

#include<bits/stdc++.h>
using namespace std;
//better approch
//TC: O(2n)
//SC: O(n)
/*void SortArray(int arr[],int n){
    int temp0=0;
    int temp1=0;
    int temp2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            temp0++;
            }
            else if(arr[i]==1){
                temp1++;
                }
                else{
                    temp2++;
                    }
                    }
            for( int i = 0;i<temp0;i++){
                arr[i]=0;

            }
            for(int i = temp0;i<temp0+temp1;i++){
                arr[i]=1;
            }
            for(int i = temp0+temp1;i<temp0+temp1+temp2;i++){
                arr[i]=2;
            }
            }*/
//----------------------------------------------------------------------------------------------------
//Optimal sol
//TC: O(n)
//SC: O(1)
void SortArray(int arr[],int n){
    int low =0; 
    int mid =0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){    
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            }
            else if(arr[mid]==1){
                mid++;
                }
                else{
                    swap(arr[mid],arr[high]);
                    high--; 
                    }
                    }
}


    int main(){
    int arr[] = {1,0,0,1,1,2,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    SortArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}

