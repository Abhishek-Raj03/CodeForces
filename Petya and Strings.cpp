#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    transform(a.begin(),a.end(),a.begin(),::toupper);
    transform(b.begin(),b.end(),b.begin(),::toupper);
    for(int i=0;i<a.size();i++){
        if(a[i]<b[i]){
            cout<<"-1";
            return 0;}
        if(a[i]>b[i]){
            cout<<"1";
            return 0;}
    }
    cout<<"0";
}
