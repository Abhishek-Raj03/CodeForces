#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
      long long x,y;
      cin>>x>>y;
      long long i=x*x+y*y;
      long long j=sqrt(i);
      if(x==0&&y==0){
        cout<<"0"<<"\n";

      }
      else if(j*j==i){
        cout<<"1"<<"\n";
      }
      else cout<<"2"<<"\n";
    }
}
