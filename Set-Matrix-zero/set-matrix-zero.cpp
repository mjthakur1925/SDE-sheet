#include<bits/stdc++.h>
using namespace std;
//brute force
 /*void markrow(vector<vector<int>> &matrix,int m, int n , int i){
    for (int j = 0; j <m; j++)
    {
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
    

 }
  int markcol(vector<vector<int>> &matrix,int m, int n , int j){
    for (int i = 0; j <n; i++)
    {
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
    
 }
vector<vector<int>> MatrixZero(vector<vector<int>> &matrix,int m, int n ){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
              markrow(matrix,  n, m,i);
              markcol(matrix, n, m,j);
            }

    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==-1){
            matrix[i][j]=0;
        }
}
}
return matrix;
}
int main(){
    vector<vector<int>> matrix ={{1,1,1},{1,0,1},{1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> ans = MatrixZero(matrix,n,m);
   // cout<<"the matrix is :n";
    for(auto it : ans){
        for(auto ele : it){
           // cout<<ele<<" ";
            }
           // cout<<endl;
            }   

return 0;
}*/
//------------------------------------------------------------------------------------------------------------------------------------
// time complexity =n3
//better sol
//tc: o(2XnXm)
//sc:o(n) + o(m)
 vector<vector<int>>zeroMatrix(vector<vector<int>>& matrix, int m, int n) {
  
    int col[m]={0};
int row[n]={0};
  
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                col[j]=1;
                row[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(col[j]==1 || row[i]==1){
                matrix[i][j]=0;
                }
                }
                }
                return matrix;
}

int main(){
    vector<vector<int>> matrix ={{1,1,1},{1,0,1},{1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix,n,m);
    cout<<"the matrix is :n";
    for(auto it : ans){
        for(auto ele : it){
           cout<<ele<<" ";
            }
           cout<<endl;
            }   

return 0;
}