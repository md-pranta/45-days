#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006

vector<int> prime_divisor[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

   for(int i = 2; i < N; i++){
        if(prime_divisor[i].empty()){
            for(int j = i; j < N; j+=i){
                prime_divisor[j].push_back(i);
            }
        }
    }

    int n;
    cin >> n;

    ll c[n+2];
    memset(c, 0, sizeof c);

    for(int i = 1; i <= n; i++){
        int x = 1;
        for(int d: prime_divisor[i]){
            int cnt = 0;
            int tmp = i;
            while(tmp%d==0){
                cnt++;
                tmp /= d;
            }
            if(cnt%2==1) x *= d;
        }

        c[x]++;
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ans += c[i]*c[i];
    }

    cout << ans << '\n';

    return 0;
}
