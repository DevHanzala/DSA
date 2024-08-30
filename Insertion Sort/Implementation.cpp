#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr,int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j = i-1;
        for (; j >=0 ; j--)
        {
            if (arr[j]>temp)
            {
                //shift
                arr[j+1]=arr[j];
            }
            else
            {
             break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
vector<int> arr={45,32,76,43,12,23};
int n=arr.size();
insertionSort(arr,n);

for (int i = 0; i < n; i++)
{
    cout<<"At the Index "<<i<<" we have: "<<arr[i]<<endl;
}

}