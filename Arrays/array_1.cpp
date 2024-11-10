#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArr(vector<int> v){
int s=0;
int e=v.size()-1;

while(s<=e){
    swap(v[s],v[e]);
    s++;
    e--;
}
return v;
}
void print(vector<int> v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
cout<<endl;
}


void merge(int arr1[],int n,int arr2[], int m, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
    }


//copy first array of elements
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    //copy second array remaing element 
 while(j<m){
    arr2[k++]=arr2[j++];
 }

}

 vector<int> movezeros(vector<int> v){
int i=0;
for(int j=0;j<v.size();j++){
    if(v[j] !=0){
        swap(v[j],v[i]);
        i++;
    }
}
    return v;
 }
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
// vector<int> v={5,4,3,2,1,0,-1,-2};
// vector<int> ans=reverseArr(v);
// print(ans);

// int arr1[5]={4,5,6,7,8};
// int arr2[3]={1,2,3};
// int arr3[8]={0};
// merge(arr1,5,arr2,3,arr3);
// print(arr3,8);

vector<int> a={1,0,30,0,6,0,0,7};
vector<int> ans=movezeros(a);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}


}