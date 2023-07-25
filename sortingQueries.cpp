#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    multiset<int>ms;
    queue<int>que;
    int q;
    cin >> q;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1){
            int x;
            cin >> x;
            que.push(x);
        }
        else if (t == 3){
            while(!que.empty()){
                ms.insert(que.front());
                que.pop();
            }
        }
        else{
            if(ms.empty()){
                cout << que.front() << endl;
                que.pop();
            }
            else{
                cout << *ms.begin() << endl;
                ms.erase(ms.find(*ms.begin()));
            }
        }
    }

    return 0;
}