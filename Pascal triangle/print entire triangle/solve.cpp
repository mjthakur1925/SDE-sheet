#include<bits/stdc++.h>
using namespace std;
/*int nCr(int n, int r){
    long long res =1;
    for(int i=0;i<r;i++){
res = res*(n-i);
res =res/(i+1);

    }
    return res;
}
 vector<vector<int>>PascalTriangle( int n){
     vector<vector<int>>ans;
for(int row =1; row<=n; row++){
    vector<int>temp;
  for( int c =1;c<=row;c++){
    temp.push_back(nCr(row-1,c-1));
  }
  ans.push_back(temp);
}
return ans;
}
int main(){
    int n = 5;
   vector<vector<int>>ans = PascalTriangle(n);
   for( auto it : ans){
    for( auto ele : it){
        cout<<ele<<" ";
   }
   cout<<endl;
   }
   
    return 0;
   }*/
//TC:0(n X n X r)
//--------------------------------------------------------------------
//Optimal sol

 vector<vector<int>>PascalTriangle( int n){
     vector<vector<int>>ans;
     for(int row =0; row<n; row++){
      for(int i=1;i<n;i++){
          long long ans =1;
           vector<int>temp;
           temp.push_back(1);
for(int c =1;c<row;c++){
    ans = ans*(row-c);
    ans =ans/(c);
    temp.push_back(ans);
  }
  return temp;
s.push_back(ans);
      }
  
}
return ans;
}
int main(){
    int n = 5;
   vector<vector<int>>ans = PascalTriangle(n);
   for( auto it : ans){
    for( auto ele : it){
        cout<<ele<<" ";
   }
   cout<<endl;
   }
   
    return 0;
   }