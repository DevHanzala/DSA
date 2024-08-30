#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Book allocation Problem
// bool isPossible(int arr[],int n,int m,int mid){
//     int studentCount=1;
//     int pageSum=0;

//     for (int i = 0; i < n; i++)
//     {
//         if (pageSum+arr[i]<=mid)
//         {
//             pageSum+=arr[i];  //it indicate how much pages allocate to one student
//         }
//         else{
//             studentCount++;
//             if (studentCount>m || arr[i]>mid ){
//                 return false;
//             }
//             pageSum=arr[i];
//         }
//     }
//     return true;
// }

// int allocateBooks(int arr[],int n,int m)
// {
//     int s=0;
//     int sum=0;
//     for (int i = 0; i <n; i++)
//     {
//         sum+=arr[i];
//     }
//     int e=sum;
//     int ans=-1;
//     int mid=s+(e-s)/2;
//     while (s<=e)
//     {
//         if(isPossible(arr,n,m,mid)){
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }


//Painters Partition problem
// You want to distribute N boards among K painters such that the maximum time any painter spends painting is minimized.
// Each board has a specific length, and the painters work simultaneously but must paint contiguous boards

// This function checks if it is possible to paint all boards such that no painter paints more than maxTime units of length.
// bool canPaintWithMaxTime(vector<int>&boards, int K, int maxTime) {
//     int paintersRequired = 1;
//     int currentSum = 0;
    
//     for (int board : boards) {
//         if (currentSum + board > maxTime) {
//             paintersRequired++;
//             currentSum = board;  //currentSum accumulates the length of boards painted by the current painter.
//             if (paintersRequired > K) {
//                 return false;
//             }
//         } else {
//             currentSum += board;
//         }
//     }
//     return true;
// }

// int paintersParition(vector<int> &boards, int k) {

//     int s = 0;
//     int maxi=-1;
//     for (int i = 0; i < boards.size(); i++)
//     {
//         maxi=max(maxi,boards[i]);
//     }
//     int e=maxi;
    

//     int mid = s + (e - s) / 2;
//     while (s < e) {        
//         if (canPaintWithMaxTime(boards, k, mid)) {
//             e = mid;  
//         } else {
//             s = mid + 1; 
//         }
//     mid=s+(e-s)/2;
//     }
//     return s; 
// }



// bool isPossible(vector<int> &stalls, int k, int mid) {
//     int cowCount = 1;  
//     int lastPos = stalls[0];  // Place the first cow at the first stall
//     for (int i = 0; i < stalls.size(); i++) { 
//         if (stalls[i] - lastPos >= mid) { 
//             cowCount++;
//             if (cowCount == k) { 
//                 return true;
//             }
//             lastPos = stalls[i];
//         }
//     }
//     return false; 
// }

// int aggressiveCows(vector<int> &stalls, int k) {
//     sort(stalls.begin(), stalls.end()); 

//     int s = 0;
//     int maxi=-1;
//     for (int i = 0; i < stalls.size(); i++)
//     {
//         maxi=max(maxi,stalls[i]);
//     }
//     int e=maxi;
//     int ans=-1;

//     int mid = s + (e - s) / 2; //4
//     while (s <= e) {        
//         if (isPossible(stalls, k, mid)) {
//             ans = mid;  
//             s = mid + 1; 
//         } else {
//             e = mid - 1; 
//         }
//     mid=s+(e-s)/2;
//     }
//     return ans; 
// }

int main(){
// int arr[4]={10,20,30,40};
// int ans=allocateBooks(arr,4,2);
// cout<<ans<<endl;

//  vector<int> boards = {10, 20, 30, 40};
//     int K = 2; // Number of painters
    
//     int result = paintersParition(boards, K);
//     cout << "Minimum time to paint all boards: " << result << std::endl;


// vector<int> stalls = {4, 2, 1, 8, 9};
    // int k = 2;  // Number of cows to place
    // int result = aggressiveCows(stalls, k);
    // cout << "The largest minimum distance is: " << result << endl;
}
