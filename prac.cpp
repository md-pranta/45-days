#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m;
    cin>>n>>m;

    long long a[10];
    int d = -1;
    int len;

    for(int i=1; i<10; i++){
        a[i] = i%m;
        if(a[i] == 0){
            d = i;
            len = 1;
        }
    }
    
    for(int i=2; i<=n; i++){
        for(int j=1; j<10; j++){
            a[j] = (a[j]*10+j)%m;
            if(a[j] == 0){
                d = j;
                len = i;
            }
        }

    }

    if(d==-1) cout<<-1<<endl;

    else{
        while(len--){
            cout<<d;
        }
        cout<<endl;
    }
  
   return 0;
}