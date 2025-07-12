#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int k){
    if(size==0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }
    else {
        return linearSearch(arr+1,size-1,k);
    }
}

int main(){
    int arr[5];
    int size = 5;

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    bool ans = linearSearch(arr,size,4);
    cout<<ans;
    return 0;
}