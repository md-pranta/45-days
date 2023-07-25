#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int main() {
  // Initialize the data points.
  vector<vector<float>> data = {
      {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}
  };

  // Set the number of clusters.
  int k = 3;

  // Initialize the centroids.
  vector<vector<float>> centroids(k, vector<float>(2));
  for (int i = 0; i < k; i++) {
    centroids[i] = data[i];
  }

  // Iterate until the centroids stop moving.
  bool converged = false;
  while (!converged) {
    // Assign each data point to the closest centroid.
    vector<int> clusters(data.size());
    for (int i = 0; i < data.size(); i++) {
      float min_distance = 1e9;
      int min_cluster = 0;
      for (int j = 0; j < k; j++) {
        float distance = euclidean_distance(data[i], centroids[j]);
        if (distance < min_distance) {
          min_distance = distance;
          min_cluster = j;
        }
      }
      clusters[i] = min_cluster;
    }

    // Update the centroids.
    for (int i = 0; i < k; i++) {
      vector<float> sum(2);
      for (int j = 0; j < data.size(); j++) {
        if (clusters[j] == i) {
          sum[0] += data[j][0];
          sum[1] += data[j][1];
        }
      }
      centroids[i] = sum / clusters.size();
    }

    // Check if the centroids have converged.
    converged = true;
    for (int i = 0; i < k - 1; i++) {
      if (centroids[i] != centroids[i + 1]) {
        converged = false;
        break;
      }
    }
  }

  // Print the clusters.
  for (int i = 0; i < k; i++) {
    cout << "Cluster " << i << ": ";
    for (int j = 0; j < data.size(); j++) {
      if (clusters[j] == i) {
        cout << data[j][0] << ", " << data[j][1] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}

float euclidean_distance(vector<float> a, vector<float> b) {
  float sum = 0;
  for (int i = 0; i < a.size(); i++) {
    sum += (a[i] - b[i]) * (a[i] - b[i]);
  }
  return sqrt(sum);
}
