#include<bits/stdc++.h>
using namespace std;


int arraySum(int *arr,int size){
    if(size==0){
        return 0;
    }
    return arr[0] + arraySum(arr+1,size-1);
};

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    int sum = arraySum(arr,10);
    cout<<"The sum of the array is: "<<sum<<endl;
    return 0;
}