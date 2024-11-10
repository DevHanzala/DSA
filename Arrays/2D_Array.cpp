#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
// void printSum(int arr[][3],int row,int col){
//     for(int j=0;j<row;j++){
//     int sum=0;
//     for(int i=0;i<col;i++)
//     sum+=arr[i][j];
//     cout<<sum<<" ";
//     }
// }

// vector<int> spiralOrder(vector<vector<int>>& matrix){
// vector<int> ans;
// int row=matrix.size();
// int col=matrix[0].size();

// int count=0;
// int total=row*col;

// //index initialization
// int startingRow=0;
// int startingCol=0;
// int endingRow=row-1;
// int endingCol=col-1;

// while(count<total){
      
//   //print starting row
//   for(int index=startingCol;count<total && index<=endingCol;index++){
//     ans.push_back(matrix[startingRow][index]);
//     count++;
//   }
//   startingRow++;    

// //   printing ending column
// for(int index=startingRow;count<total && index<=endingCol;index++){
//     ans.push_back(matrix[index][endingCol]);
//     count++;
// }
// endingCol--;

// //print ending row
// for(int index=endingCol;count<total && index>=startingCol;index--){
//     ans.push_back(matrix[endingRow][index]);
//     count++;
// }
// endingRow--;


// //print starrting col
// for(int index=endingRow;count<total && index>=startingRow;index--){
//     ans.push_back(matrix[index][startingCol]);
//     count++;
// }
// startingCol++;
// }
// return ans;
// }


// Function to rotate the matrix by 90 degrees clockwise
// void rotateMatrix(vector<vector<int>>& matrix) {
//     int n = matrix.size();

//     // Step 1: Transpose the matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }

//     // Step 2: Reverse each row
//     for (int i = 0; i < n; i++) {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
// }

// // Function to print the matrix
// void printMatrix(const vector<vector<int>>& matrix) {
//     for (int i = 0; i < matrix.size(); i++) {
//         for (int j = 0; j < matrix[i].size(); j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


bool searchMatrix(vector<vector<int>>& arr,int target){
    int row=arr.size();
    int col=arr[0].size();

    int start=0;
    int end=row*col-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        int element=arr[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        if(element<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}


int main(){

    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for (int i = 0; i < 3; i++)
    // {
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for(int j=0;j<3;j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
//  printSum(arr1,3,3);

// vector<vector<int>> v={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
//     };
// vector<int> ans=spiralOrder(v);

// for(int num:ans){
// cout<<num<<" ";
// }

//     vector<vector<int>> matrix = {{1, 2, 3},
//                                   {4, 5, 6},
//                                   {7, 8, 9}};
//     cout << "Original Matrix:" << endl;
//     printMatrix(matrix);
//     rotateMatrix(matrix);

//     cout << "Rotated Matrix by 90 degrees clockwise:" << endl;
//    printMatrix(matrix);


     vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

  cout<<searchMatrix(matrix,10);
}