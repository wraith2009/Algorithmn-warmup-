#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for ( int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=0;
    
    for(int i=0;i<n;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]==max){
            count++;
        }
    }
    cout<<count;
    return 0;
}
