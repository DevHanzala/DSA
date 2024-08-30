#include<iostream>
using namespace std;

//find Pivot elelment in an array
// int findPivotElement(int arr[],int n){
// int s=0;
// int e=n-1;

// int mid=s+(e-s)/2;

// while (s<e)
// {
//     if (arr[mid]>=arr[0])
//     {
//         s=mid+1;
//     }
//     else{
//         e=mid;
//     }
//     mid=s+(e-s)/2;
// }
// return s;

// }



//Find position of elelment
// int findPivotElement(int arr[], int n) {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;

//     while (s < e) {
//         if (arr[mid] >= arr[0]) {
//             s = mid + 1;
//         } else {
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return s;
// }

// int binarySearch(int arr[], int s, int e, int key) {
//     int start = s;
//     int end = e;
//     int mid = start + (end - start) / 2;

//     while (start <= end) {
//         if (arr[mid] == key) {
//             return mid;
//         }

//         if (key > arr[mid]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }

// // Function to search for a key in a rotated sorted array
// int searchInRotatedSortedArray(int arr[], int n, int key) {
//     int pivot = findPivotElement(arr, n);

//     // If the key is in the right half of the array
//     if (key >= arr[pivot] && key <= arr[n - 1]) {
//         return binarySearch(arr, pivot, n - 1, key);
//     } else { // If the key is in the left half of the array
//         return binarySearch(arr, 0, pivot - 1, key);
//     }
// }


//finding sqrt  using binary search
// long long int findSQRT_BS(int val) {
//     int s = 0;
//     int e = val;
//     long long int ans = -1;
    
//     while (s <= e) {
//         long long int mid = s + (e - s) / 2;
//         long long int square = mid * mid;

//         if (square == val) {
//             return mid;
//         }
        
//         if (square < val) {
//             ans = mid;  
//             s = mid + 1;
//         } else {
//             e = mid - 1;  
//         }
//     }
//     return ans;  
// }

// double morePrecise(int n,int precision,int tempsol){
// double factor=1;
// double ans=tempsol;
// for (int i = 0; i < precision; i++)
// {
//     factor=factor/10;
//     for (double j = ans; j*j<n; j+=factor)
//     {
//         ans=j;
//     }
// }
// return ans;
// }


int main(){

// int even[7]={17,11,66,12,13,14,15};
// int ans=findPivotElement(even,7);
// cout<<"Pivot is: "<<ans<<endl;

    // int arr[7] = {17, 66, 1, 2, 3, 4, 5};
    // int key = 66;
    // int ans = searchInRotatedSortedArray(arr, 7, key);  //complexity O(logn)
    // cout << "Index of the key is: " << ans << endl;

    // int val = 55;  // The value for which we want to find the square root
    // int ans = findSQRT_BS(val);
    // cout<<"Answer is: "<<morePrecise(val,3,ans);


}
