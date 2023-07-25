#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, k, d;
        cin >> n >> k >> d;
        int a[n];
        unordered_map<int,int>ump;
        for(int i=0; i<n;i++)cin >> a[i];
        int left=0,cnt=0,answer=INT_MAX;
        for(int right=0;right<n;++right){
            if((ump[a[right]]++)==0)cnt++;
            if(right>=d){
                if((--ump[a[left++]])==0)cnt--;
            }
            if(right>=d-1)
                answer = min(answer,cnt);
        }
        cout<<answer<<" "<<endl;
    }
    return 0;
}