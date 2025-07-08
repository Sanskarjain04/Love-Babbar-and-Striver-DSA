#include<bits/stdc++.h>
using namespace std;

void takeInput(int arr[][3],int m,int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
}

void getOutput(int arr[][3],int m,int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rowSum(int arr[][3],int m,int n){
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        cout<<"The sum is: "<<sum<<" "<<endl;
    }
}

int main(){
    int m = 3;
    int n = 3;
    int arr[3][3];
    takeInput(arr,3,3);
    getOutput(arr,3,3);
    rowSum(arr,3,3);
    return 0;
}