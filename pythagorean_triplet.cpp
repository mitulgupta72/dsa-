#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
   
for(int h=0;h<200;h++)
        for(int j=0;j<200;j++){
            for(int k=0;k<200;k++){
                if((j*j+h*h)==k*k){
                    cout<<h<<"  "<<j<<" "<<k<<endl;
                    

                    // arr[l]=k;
                    // arr[l+1]=j;
                    // arr[l+2]=i;
                    // l+=3;

                    // cout<<arr[l]<<arr[l+1]<<arr[l+2]<<endl;
                }
            }
        
    }

    // for(int f=0;f<3*n;f++){
    //     cout<<arr[f];
    // }
    
} 