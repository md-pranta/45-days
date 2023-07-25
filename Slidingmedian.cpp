#include<bits/stdc++.h>
using namespace std;
multiset<int>leftt, rightt;
void adjust(int windowlength){
    int l = (windowlength + 1)/2;
    int r = windowlength - l;
    while (leftt.size() > l)
    {
        /* code */
        rightt.insert(*(leftt.rbegin()));
        leftt.erase(--leftt.end());

    }
    while (rightt.size() > r)
    {
        /* code */
        leftt.insert(*rightt.begin());
        rightt.erase(rightt.begin());

    }
    
}
void add(int value){
    if (value <= *leftt.rbegin()){
        leftt.insert(value);
    }
    else{
            rightt.insert(value);
        }
}
void remove(int value){
    if (leftt.find(value) != leftt.end()){
        leftt.erase(leftt.find(value));
    }
    else{
        rightt.erase(rightt.find(value));
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<k;i++){
        leftt.insert(a[i]);
    }
    adjust(k);

    cout<<*leftt.rbegin()<<" ";

    for (int i=k;i<n;i++){
        add(a[i]);
        remove(a[i-k]);
        adjust(k);

        cout<<*leftt.rbegin()<<" ";
    }
    cout<<"\n";
    return 0;
}