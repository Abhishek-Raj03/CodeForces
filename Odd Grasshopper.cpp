#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    long long *i=new long long[t];
    long long *n=new long long[t];
    for(int j=0;j<t;j++){
        cin>>i[j]>>n[j];
    }
    for(int j=0;j<t;j++){
        long long k;
        long long z;
        if(n[j]%4==0)
            k=0;
        else if(n[j]%4==1)
            k=-n[j];
        else if(n[j]%4==2)
            k=1;
        else
            k=n[j]+1;
            if(n[j]%4==0)
                z=0;
            else if(n[j]%4==1)
                z=n[j];
            else if(n[j]%4==2)
                z=-1;
            else
                z=-1-n[j];
        if(i[j]%2==0){
            i[j]=i[j]+k;
        }
        else
            i[j]=i[j]+z;
        cout<<i[j]<<endl;
    }
}
