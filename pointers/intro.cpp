#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 5;
    int *p = &num;
    cout<<" address of num is: "<<&num<<endl;
    cout<<" address of stored in p is: "<<p<<endl;
    cout<<" the value where p is pointing is: "<<*p;
    return 0;
}