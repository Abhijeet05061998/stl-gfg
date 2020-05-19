#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        s.insert(num);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
