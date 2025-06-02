#include<bits/stdc++.h>
using namespace std;

int peakValue(vector<int> &arr,int n){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;
        cout<<"The mid is: "<<mid<<endl;

        bool leftOk = (mid == 0) || (arr[mid] > arr[mid - 1]);
        bool rightOk = (mid == n - 1) || (arr[mid] > arr[mid + 1]);

        if (leftOk && rightOk)
        {
            return mid;
        }
        else if(mid < n - 1 && arr[mid]<arr[mid+1]){
            low = mid + 1;
            cout<<"The low is: "<<low<<endl;
        }
        else{
            high = mid - 1;
            cout<<"The high is: "<<high<<endl;
        }
    }
    return -1;
}

int main(){
    vector<int> arr;
    int n, elem;
    cout<<"The size of array is: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>elem;
        arr.push_back(elem);
    }
    int peak = peakValue(arr, n);
    cout<<"The peak value is at Index: "<<peak;
    return 0;
}