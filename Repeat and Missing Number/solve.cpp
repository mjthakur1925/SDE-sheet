#include<bits/stdc++.h>
using namespace std;
//brute force 
/*vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); // size of the array
    int repeating = -1, missing = -1;
    for(int i = 1 ; i <= n ; i++){
 int sum = 0;
 for(int j = 0 ; j < n ; j++){
    if( a[j]==i)
        sum++;
 }
    if(sum==2)
        repeating = i;
    
    else if(sum==0)
        missing = i;
    
    
    if(repeating!=-1 && missing!=-1 )
    break;
 }

 return {repeating, missing};
}*/
    
  //------------------------------------------------------------------------------------------------------------------------------------
  //Better Approch
    /*vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size();
     // size of the array
     int hash[n + 1] = {0};
   
    for(int i = 1 ; i <= n ; i++){
             hash[a[i]]++;
 }
  int repeating = -1, missing = -1;
     for (int i = 1; i <= n; i++) {
        if (hash[i] == 2) repeating = i;
        else if (hash[i] == 0) missing = i;
    
    
    if(repeating!=-1 && missing!=-1 )
    break;
 }

 return {repeating, missing};
}*/
//TC: o(2n)
//sc: O(n)
//------------------------------------------------------------------------------------
//Optimal Approach

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    long long n = a.size();
    long long SN = (n*(n+1)) /2;
    long long S2N = (n*(n+1)*(2*n+1)) /6;
     
    // Calculate S and S2:
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }

    //S-Sn = X-Y:
    long long val1 = S - SN;

    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;

    //Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}
int main(){
     vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;

}
//TC: o(n2)
//sc: O(1)