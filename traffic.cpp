#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, n;
    cin>>x>>n;

    multiset<int>ms;
    ms.insert(x);

    set<int>s;
    s.insert(0);
    s.insert(x);

    int i=0;
    while(i<n){
        int k;
        cin>>k;

        int previous = *(--s.lower_bound(k));
        int next = *s.upper_bound(k);

        int length = next - previous;
        ms.erase(ms.find(length));
        ms.insert(k-previous);
        ms.insert(next-k);

        s.insert(k);

        cout<<*(--ms.end())<<" ";

        i ++;

    }
    cout<<endl;

    return 0;
}