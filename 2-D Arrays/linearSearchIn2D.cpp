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

bool isPresent(int arr[][3],int m,int n,int num){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]==num)
            {
                return 1;
            }
        }
    }
    return 0;
}


int main(){
    int m = 3;
    int n = 3;
    int arr[3][3];
    takeInput(arr,3,3);
    getOutput(arr,3,3);
    cout<<isPresent(arr,3,3,6);
    return 0;
}