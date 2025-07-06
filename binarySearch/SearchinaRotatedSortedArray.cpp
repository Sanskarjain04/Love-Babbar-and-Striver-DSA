#include<bits/stdc++.h>
using namespace std;

int searchInRotatedArray(vector<int> &arr,int n, int k){
    int low = 0;
    int high = n-1;
    if(arr[0]==k){
        return 0;
    };
    if(arr[n-1]==k){
        return n-1;
    }
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(k<arr[0]){
            if(k<arr[mid]){
                high = mid-1;
            }
            else if(k>arr[mid]){
                low = mid+1;
            }
        }
        else if(k>arr[0]){
            if(arr[mid]>k){
                high = mid-1;
            }
            else if(arr[mid]<k){
                low = mid+1;
            }
        }
    };
    return -1;
};

int main(){
    vector<int> arr;
    int n, elem, k;
    cout<<"The size of array is: ";
    cin>>n;
    cout<<"Enter the element which need to be searched: ";
    cin>>k;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>elem;
        arr.push_back(elem);
    }
    int result = searchInRotatedArray(arr,n,k);
    cout<<"the index of the element is: "<<result<<endl;
    return 0;
}