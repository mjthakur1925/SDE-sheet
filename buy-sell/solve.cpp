#include<bits/stdc++.h>
using namespace std;
int BuySell( vector<int> &arr){
  
    int mini=arr[0];
    int profit=0;
    for(int i=1;i<arr.size();i++){
    int curProfit = arr[i]-mini;
    profit = max(profit,curProfit);
    mini = min(mini,arr[i]);
    }
     return profit;


}
int main(){
    
    vector<int> arr ={7,1,5,3,6,4};
     cout<<BuySell(arr);
}