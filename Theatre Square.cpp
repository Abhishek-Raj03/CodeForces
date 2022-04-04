#include<iostream>
using namespace std;
int main()
{
   long long n,m,a;
   cin>>n>>m>>a;
   long long num1,num2;
   if(n%a==0){
    num1=n/a;
   }
   else{
    num1=(n/a)+1;
   }
   if(m%a==0){
    num2=m/a;
   }
   else{
    num2=(m/a)+1;
   }
   cout<<num1*num2;
   return 0;
}
