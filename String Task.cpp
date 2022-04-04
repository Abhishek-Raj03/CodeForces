#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    s.erase(remove(s.begin(),s.end(),'a'),s.end());
    s.erase(remove(s.begin(),s.end(),'e'),s.end());
    s.erase(remove(s.begin(),s.end(),'i'),s.end());
    s.erase(remove(s.begin(),s.end(),'o'),s.end());
    s.erase(remove(s.begin(),s.end(),'u'),s.end());
    s.erase(remove(s.begin(),s.end(),'y'),s.end());
    for(int i=0;i<s.size();i=i+2){
        s.insert(i,".");
    }
    cout<<s;

}
