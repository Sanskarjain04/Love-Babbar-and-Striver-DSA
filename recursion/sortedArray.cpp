#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else {
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main(){
    vector<int> arr;
    return 0;
}