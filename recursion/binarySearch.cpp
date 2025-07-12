#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int start, int end, int k){
    int mid = start + (end-start)/2;
    if(start==end && arr[mid]!=k){
        return false;
    }

    if(arr[mid]==k){
        return true;
    }
    else {
        if (arr[mid]<k)
        {
            return binarySearch(arr,mid+1,end,k);
        }
        else {
            return binarySearch(arr,start,mid-1,k);
        }
    }
}

int main(){
    int arr[5];
    int size = 5;

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    bool ans = binarySearch(arr,0,4,3);
    cout<<ans;
    return 0;
}