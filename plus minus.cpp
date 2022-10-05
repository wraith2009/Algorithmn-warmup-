
#include <iostream>
using namespace std;
int main()
{
    int n;
    double a=0,b=0,c=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        if(A[i]>0){
            a++;
        }else if (A[i]<0) {
        b++;
        }else{
            c++;
        }
        
        
    }
    double x=a/n;
        double y=b/n;
        double z=c/n;
        printf("%.6f\n",x);
        printf("%.6f\n",y);
        printf("%.6f",z);

    return 0;
}
