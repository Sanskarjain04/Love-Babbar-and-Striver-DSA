#include<bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> & arr,int n,int m,int mid){
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if ( pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
}

int bookAlloc(vector<int> &arr,int n,int m){
    int s = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
};

int main(){
    int students, books, elem;
    cout<<"Enter number of books";
    cin>>books;
    cout<<"Enter number of students";
    cin>>students;
    vector<int> pages;
    cout<<"Enter number of pages in each book";
    for(int i=0;i<books;i++){
        cin>>elem;
        pages.push_back(elem);
    };

    int alloc = bookAlloc(pages, books, students);

    return 0;
}