#include<iostream>
#include<vector>
using namespace std;

// void bubbleSort(vector<int> &arr,int n){
//     for (int i = 1; i <n; i++)
//     {
//         //for round 0 to n-1
//         bool swapped=false;
//         for (int j = 0; j < n-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
    
//     if (swapped==false)
//     {
//         //already sorted
//         break;
//     }
//     }
//     for (int i = 0; i <= n-1; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
// }

void bubbleSort(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {  // Fix loop condition
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            // Already sorted
            break;
        }
    }
}
int main(){
vector<int> arr={100,123,700,634,142,900,765,987,9854};
int n=arr.size();
bubbleSort(arr,n);

for (int i = 0; i < n-1; i++)
{
    cout<<"Index of "<<i<<" is: "<<arr[i]<<endl;
}

}