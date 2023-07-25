#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int clss;
        char s;
        int id;
};
int main()
{
    int N;
    cin>>N;
    Student ar[N];
    for(int i=0;i<N;i++)
    {
        cin>>ar[i].name>>ar[i].clss>>ar[i].s>>ar[i].id;
        cin.ignore();
    }
    for(int j=0;j<N;j++)
    {
        cout<<ar[j].name<<" "<<ar[j].clss<<" "<<ar[j].s<<" "<<ar[N-j-1].id<<endl;
    }
    return 0;
}