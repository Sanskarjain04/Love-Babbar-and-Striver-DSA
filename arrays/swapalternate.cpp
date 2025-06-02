#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int elem;
    int temp;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>elem;
        arr.push_back(elem);
    }
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout<<"The size of array is: "<<arr.size()<<endl;
    for(int i=0; i+1<arr.size(); i+=2){
        temp = arr[i];
        arr[i]= arr[i+1];
        arr[i+1]= temp;
    }
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}