#include<bits/stdc++.h>
using namespace std;

long long MaximumSubarray(int arr[], int n){
    int maxi =  INT_MIN;
    long long sum = 0;
    int start =0;
    int ansStart=-1;
    int ansEnd=-1;
   for(int i=0;i<n;i++){
if(sum ==0){
    start =i;
}
    sum+=arr[i];

    if(sum>maxi){
        maxi = sum;
        ansStart = start;
        ansEnd = i;
    
    }
    if(sum<0){
        sum = 0;

    }
   

   }
   cout<<"the subarray is";
   for(int i=ansStart;i<=ansEnd;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
   return maxi;
}

int main(){
    int arr[] = {1,2,3,-4,7,5,-6};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long maxiSum =MaximumSubarray(arr,n);
    cout<<maxiSum<<endl;
    return 0;

}
