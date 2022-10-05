#include<iostream>
#include<algorithm>
using namespace std;
int main(){
//     int n;
//     cin>>n;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    //sort(arr.begin(),arr.end());
    // sort(arr,arr+5);
for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++) { if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    long sum=0;
    for (int i=0;i<5;i++){
        sum += arr[i];
    }
    cout<<sum - arr[5-1]<<" "<<sum - arr[0];
}
