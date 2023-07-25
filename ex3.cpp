#include <bits/stdc++.h>
using namespace std;

void sortStrings(string& s, int len){
    for(int i=0; i<len-1; i++){
        for(int j=i+1; j<len; j++){
            if(s[i] > s[j]){
                swap(s[i], s[j]);
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string str;
    cin >> n >> str;

    sortStrings(str,n);
    cout << str << endl;
    
    return 0;
}