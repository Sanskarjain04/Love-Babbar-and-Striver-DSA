#include<bits/stdc++.h>
using namespace std;

int pivotInArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        while(low<high){
            int mid = low + (high - low)/2;
            if(nums[mid]<nums[mid-1]){
                return mid;
            }
            else if(nums[mid]<nums[0] && nums[mid]<nums[nums.size()-1]){
                high = mid;
            }
            else {
                low = mid+1;
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
    int result = pivotInArray(arr);
    cout<<"the pivot index is: "<<result<<endl;
    return 0;
}