
//Takes an element and place it in its correct order
#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(int arr[], int n){
for (int i = 0; i<=n-1; i++)
{
  int j = i;
   while (j>0 && arr[j-1]>arr[j])
   {
    int temp =arr[j-1];
     arr[j-1]=arr[j];
     arr[j]= temp;
     j--;
   }
    
}
    cout<<"after Insertion sort:"<<"\n";
  for (int i = 0; i <n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}
 

int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before Insertion sort: " << "\n";

   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  Insertion_sort(arr, n);
  return 0;
}
//Time complexity: O(N2)
//Space Complexity: O(1)