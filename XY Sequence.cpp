#include<iostream>
#include<bits/stdc++.h>
# define int long long
using namespace std;
 main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,B,x,y;
        cin>>n>>B>>x>>y;
        int arr[n+1];
        arr[0]=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            int a=arr[i-1]+x;
            int b=arr[i-1]-y;
            if(a>B){
                arr[i]=b;
            }
            else if(b>B){
                arr[i]=b;
            }
            else
                arr[i]=max(a,b);
                sum=sum+arr[i];
        }
        cout<<sum<<"\n";
    }
}
