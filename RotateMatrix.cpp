#include <bits/stdc++.h>
using namespace std;
// Rotate matrix
int main() {
     vector<vector<int>> matrix {
         {1,2,3},
         {4,5,6},
         {7,8,9},
     };
     vector<vector<int>> transpose(3,vector<int> (3));
     
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
     }
     
     for(int i=0;i<3;i++)
     {
         int j=0,k=2;
         while(j<k)
         {
             transpose[i][j]=(transpose[i][k]+transpose[i][j])-(transpose[i][k]=transpose[i][j]);
             j++;
             k--;
         }
     }
     
     for(auto items : transpose)
     {
         for (auto item : items)
         {
             cout<<item<< " ";
         }
         cout<<endl;
     }
     
