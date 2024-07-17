#include<bits/stdc++.h>
using namespace std;
//naive approch 
/*int nCr(int n, int r){
    long long res =1;
    for(int i=0;i<r;i++){
res = res*(n-i);
res =res/(i+1);

    }
    return res;
}
int PascalTriangle( int n){
  for( int c =1;c<=n;c++){
    cout<<nCr(n-1,c-1)<<"";
  }
  cout<<"n";
}
int main(){
    int n = 5;
    PascalTriangle(n);
   
    return 0;
}*/
//tc: o(n X r)
//---------------------------------------------------------------------------------------------
//optimal approch
void PascalTriangle(int n){
    long long res =1;
cout<<res<<" ";
    for(int i=1;i<n;i++){
res = res*(n-i);
res =res/(i);
cout<<res<<" ";
    }
   cout<<endl;
}
 int main(){
    int n = 5;
    PascalTriangle(n);
   
    return 0;
}