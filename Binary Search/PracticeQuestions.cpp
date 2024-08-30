#include<iostream>
using namespace std;

// int firstOccurence(int arr[],int n,int key){
//     int s=0;
//     int e=n-1;
//     int ans=-1;
    
//     int mid=s+(e-s)/2;

//     while (s<=e)
//     {
//         if (arr[mid]==key){
//          ans=mid;
//          e=mid-1;
//         }
//         //finding to the left side
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         //finding to the right side
//         else{
//             s=mid+1;
//         }
          
//        mid=s+(e-s)/2;   
//     }
//     return ans;
// }


// int lastOccurence(int arr[],int n,int key){
//     int s=0;
//     int e=n-1;
//     int ans=-1;
    
//     int mid=s+(e-s)/2;

//     while (s<=e)
//     {
//         if (arr[mid]==key){
//          ans=mid;
//          s=mid+1;
//         }
//         //finding to the left side
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         //finding to the right side
//         else{
//             s=mid+1;
//         }
          
//        mid=s+(e-s)/2;   
//     }
//     return ans;
// }

int findPeakElement(int arr[],int n)
{
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }

        mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    // int even[7]={1,2,3,3,4,6,9};
    // int result=firstOccurence(even,7,3);
    // cout<<"First Occurence of 3 at Index: "<<result<<endl;

    // int result2=lastOccurence(even,7,3);
    // cout<<"Last Occurence of 3 at Index: "<<result2<<endl;

    //Find total nuber of occurence
    // int answer=(result2-result)+1;
    // cout<<"Total number of occurence in an array is: "<<answer<<endl;

    int even[9]={1,2,3,4,5,11,19,22,45};
    int answer=findPeakElement(even,9);
    cout<<"Peak Element Index is: "<<answer<<endl;  
}