#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    int gcd = 0;
    for(int i=1;i<n;i++){
        gcd = __gcd(gcd, a[i]-a[0]);
    }


    while (m--)
    {

        /* code */
        int b;
        cin >> b;

        int ans = __gcd(a[0]+b, gcd);
        cout << ans << " ";
    }
    cout<<endl;
    return 0;
}