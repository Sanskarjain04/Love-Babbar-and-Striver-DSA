#include<bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        int temp = 0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main(){
    vector<int> arr;
    int n, elem, key;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements to input";
    for(int i=0;i<n;i++){
        cin>>elem;
        arr.push_back(elem);
    };

    selectionSort(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}