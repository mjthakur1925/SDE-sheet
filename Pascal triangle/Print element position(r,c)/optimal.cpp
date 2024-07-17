#include<bits/stdc++.h>
using namespace std;
//TC: o(r)
int nCr(int n, int r){
    long long res =1;
    for(int i=0;i<r;i++){
res = res*(n-i);
res =res/(i+1);

    }
    return res;
}
int PascalTriangle( int r, int c){
    int element =nCr(r-1, c-1);
    return element;
}
int main(){
    int r = 5;
    int c=3;
    int ans = PascalTriangle(r,c);
    cout<<"the element are "<<ans<<"n";
    return 0;
}