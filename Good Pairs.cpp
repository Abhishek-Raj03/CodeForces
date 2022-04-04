#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[v[i]]=i;
        }
        cout<<m[*min_element(v.begin(),v.end())]+1<<" "<<m[*max_element(v.begin(),v.end())]+1<<"\n";

    }

}
