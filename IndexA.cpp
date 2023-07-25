#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<ll>v(n);
    ll temp = 0, mul_temp = 0, ans = LLONG_MIN;
    for(int i = 0; i <n; i++){
        cin >> v[i];
        temp += v[i];
        
        if(i >= m-1){
            mul_temp += v[i]*m;
            ans = max(ans,mul_temp);
            mul_temp -= temp;
            temp = temp-v[i+1-m] ;
        }else{
            mul_temp += v[i]*(i+1);
        }
    }
    cout << ans <<"\n";
    return 0;
}