#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr, int n, int k){
    int low = 0;
    int high = arr.size() - 1;
    int mid = low + (high - low)/2;
    int first = -1;

    while (low<=high)
    {
        if(arr[mid]==k){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid]<k){
            low = mid + 1;
        }
        else if(arr[mid]>k){
            high = mid - 1;
        }
        mid = low + (high - low)/2;
    };
    return first;
};

int lastOccurence(vector<int> &arr, int n, int k){
    int low = 0;
    int high = arr.size() - 1;
    int mid = low + (high - low)/2;
    int last = -1;

    while (low<=high)
    {
        if(arr[mid]==k){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid]<k){
            low = mid + 1;
        }
        else if(arr[mid]>k){
            high = mid - 1;
        }
        mid = low + (high - low)/2;
    };
    return last;
};

pair<int,int> firstAndLastOccurence(vector<int> &arr, int n, int k){
    pair<int,int> p;
    p.first = firstOccurence(arr,n,k);
    p.second = lastOccurence(arr,n,k);
    return p;
}

int main(){
    vector<int> arr;
    int n, elem, key;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<< "Enter the element to search: ";
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>elem;
        arr.push_back(elem);
    };

    pair<int,int> result = firstAndLastOccurence(arr,n,key);
    cout<<"The first and last occurence of the element is: "<<result.first<<" "<<result.second<<endl;
    return 0;
}