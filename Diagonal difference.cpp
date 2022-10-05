#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int sum1=0,sum2=0;
    int n;
    cin>>n;
    int arr[n][n];
    for (int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        sum1 += arr[i][i];
    }
    int x=0,y=(n-1);
    while(x<n && y>=0){
        sum2 += arr[x][y];
        x++;
        y--;}
        int result= abs(sum1-sum2);
        cout<<result;
    
return 0;
}
