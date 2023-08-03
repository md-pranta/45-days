#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l=0, r=0;

    int temp=0,cnt=0;
    while(r<n){
        temp += v[r];
        r++;
        if(temp > t){
            cnt--;
            temp -= v[l];
            l++;
        }
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}