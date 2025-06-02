#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr, int k){
    int low = 0;
    int high = arr.size()-1;
    int ans = -1;
    int mid = 0;
    while(low<=high){
        mid = low + (high-low)/2;
        if (arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr;
    int n;
    int elem;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>elem;
        arr.push_back(elem);
    };
    cout<<"Target Element is at index: "<<BinarySearch(arr,6)<<endl;
    return 0;
}