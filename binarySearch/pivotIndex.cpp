#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0);
        int leftsum = 0;
        for(int i=0; i<nums.size();i++){
            int rightsum = total - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
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
    int result = pivotIndex(arr);
    cout<<"the pivot index is: "<<result<<endl;
    return 0;
}