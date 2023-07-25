#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    
    int prefix[n+1],g=0;
    prefix[0]= 0;
    for(int i = 1; i <=n; i++){
        g = __gcd(arr[i],g);
        prefix[i]=g;
    }
    g = 0;
    int suffix[n+2];
    suffix[n+1]=0;
    for(int i = n; i > 0; i--){ 
        g = __gcd(arr[i],g);
        suffix[i]=g;
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans,__gcd(prefix[i-1],suffix[i+1]));
    }
    cout << ans << endl;



    return 0;
}