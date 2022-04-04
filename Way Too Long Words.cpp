#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string *s=new string[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++){
        if(s[i].size()>10){
                int k=s[i].size()-2;
            cout<<s[i][0]<<k<<s[i][k+1]<<endl;
        }
        else
            cout<<s[i]<<endl;
    }
    return 0;
}
