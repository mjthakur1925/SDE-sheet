//Brute force
//TC:O(n3)
//SC:O(1)

#include<bits/stdc++.h>
using namespace std;
/*int MaximumSubarray(int arr[], int n){
    int maxi =  INT_MIN;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
                }
                maxi = max(maxi,sum);
                

        }
    }
    return maxi;

}*/

//-----------------------------------------------------------------------------------------------
//better sol
//TC:O(n2)
//SC:O(1)

/*int MaximumSubarray(int arr[], int n){
    int maxi =  INT_MIN;
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum+=arr[j];
                

        }
         maxi = max(maxi,sum);
    }
    return maxi;

}*/
//-----------------------------------------------------------------------------------------------

//Optimal sol
//TC:O(n)
//SC:O(1)
long long MaximumSubarray(int arr[], int n){
    int maxi =  INT_MIN;
    long long sum = 0;
   for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum>maxi){
        maxi = sum;
    }
    if(sum<0){
        sum = 0;

    }
   

   }
   return maxi;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long maxiSum =MaximumSubarray(arr,n);
    cout<<maxiSum<<endl;
    return 0;

}
