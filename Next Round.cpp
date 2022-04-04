#include<iostream>
using namespace std;
 main()
{
   int n,k;
   cin>>n>>k;
   int count=0;
   int *a=new int[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   if(a[k-1]==0){
    for(int j=0;j<k-1;j++){
        if(a[j]!=0)
            count++;
    }
     cout<<count;
   }
   else
   {
       count=k;
       int j=a[k-1];
       int m=k;
       while(a[m]==j){
        count+=1;
        m++;
       }
       cout<<count;
   }

}
