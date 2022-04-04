#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int row;
    cin>>row;
    int **arr=new int*[row];
    for(int i=0;i<row;i++)
        arr[i]=new int[3];
    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<3;j++){
            int sum=0;
        for(int i=0;i<row;i++){
            sum+=arr[i][j];
        }
        if(sum!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


}
