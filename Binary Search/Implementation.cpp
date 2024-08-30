#include<iostream>
using namespace std;

int binaraySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    
    int mid=start+(end-start)/2;
    
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }

        if (key>arr[mid])
        {
            start=mid+1;
        }
        else{
             end=mid-1;
        }

      mid=start+(end-start)/2;
        
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,10,18};
    int odd[5]={1,7,13,15,23};

    int index=binaraySearch(even,6,18);
    cout<<"Index of 10 is: "<<index<<endl;

    int result=binaraySearch(odd,5,15);
    cout<<"Index of 15 is: "<<result<<endl;
}