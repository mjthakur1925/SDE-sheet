#include<bits/stdc++.h>
    using namespace std;
    //brute force 
    //TC: O(n2)
    //SC: O(n2)
   /* vector<vector<int>> RotateMatrix(vector<vector<int>>& matrix){
        int n = matrix.size();
    vector < vector < int >> rotated(n, vector < int > (n, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rotated[j][n-1-i]=matrix[i][j];
            }
            }
            return rotated;
    }*/
   //-------------------------------------------------------------------------

   //Optimal approch
   vector<vector<int>> RotateMatrix(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i =0; i<n-1;i++){
            for(int j = i+1; j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
        }
              
   }
   for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
   }
   return matrix;
   }
    
int main(){
    vector<vector<int>> matrix ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    
    vector<vector<int>> rotated = RotateMatrix(matrix);
    cout<<"the matrix is :n";
    for(auto it : rotated){
        for(auto ele : it){
           cout<<ele<<" ";
            }
           cout<<endl;
            }   

return 0;
}