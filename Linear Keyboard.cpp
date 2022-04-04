#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
main()
{
   int n;
   cin>>n;
   unordered_map<char,int> m;
   cin.ignore();
   string *s=new string[n];
   string *a=new string[n];
   for(int i=0;i<n;i++){
     cin>>s[i];
     cin>>a[i];
   }
   for(int i=0;i<n;i++){
     for(int j=0;j<26;j++){
        m[s[i][j]]=j;
     }
        int sum=0;
        for(int j=1;j<a[i].size();j++){
        sum+=abs(m[a[i][j]]-m[a[i][j-1]]);
    }
      cout<<sum<<endl;
   }
}
