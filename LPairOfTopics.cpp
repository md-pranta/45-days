#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n;
    int a[n],b[n];
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
        v.push_back(a[i]-b[i]);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for(int j=0; j<n; j++) {
        int x = b[j]-a[j];
        int temp = n-(upper_bound(v.begin(),v.end(),x)-v.begin());
        if(a[j]-b[j] > x) temp--;
        ans += temp;
    }
    cout << ans/2 << endl;
    return 0;
}