#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr,int n){
 for (int i=1;i<n;i++)
 {
    bool swapped = false;
     for(int j=0;j<n-1;j++){
         if (arr[j]>arr[j+1])
         {
             swap(arr[j],arr[j+1]);
             swapped = true;
         }
     }
     if(swapped = false){
        break;
     }
 }
}

// agr start hoga ye toh index 0 se hi har baar iteration start karega aur end condition kya hai ki array ki length ya index agr 1 se kam hojaega toh ye loop end kardo

// ek loop hogi jisme har baar n-1 tak val

int main(){
    vector<int> arr;
    int n, elem, key;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements to input";
    for(int i=0;i<n;i++){
        cin>>elem;
        arr.push_back(elem);
    };

    bubbleSort(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}