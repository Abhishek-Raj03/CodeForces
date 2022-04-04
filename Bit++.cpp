#include<iostream>
using namespace std;
 main()
{
   int n;
   cin>>n;
   int count=0;
   for(int i=0;i<n;i++){
    char a,b,c;
    cin>>a>>b>>c;
    if(a=='+'||b=='+'||c=='+')
        count++;
    else
        count--;
   }
   cout<<count;

}
