#include<iostream>
using namespace std;
 main()
{
  int n;
  cin>>n;
  int count=0;
  for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1&&b==1)
        {count++;
        continue;}
     if(b==1&&c==1)
        {count++;
        continue;}
     if(c==1&&a==1)
        {count++;
        continue;}
  }
  cout<<count;
}
