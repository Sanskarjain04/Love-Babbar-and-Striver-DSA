#include<bits/stdc++.h>

using namespace std;
int factorial(int num){
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num-1);
}

int Combination(int a, int b){
    int numerator = factorial(a);
    int denominator = factorial(b)*factorial(a-b);
    int result = numerator/denominator;
    return result;
}


int main(){
    int n, r;
    cout<<"Enter the first number:"<<endl;
    cin>>n;
    cout<<"Enter the second number:"<<endl;
    cin>>r;
    int result = Combination(n,r);
    cout<<"The result is: "<<result<<endl;
    return 0;
}