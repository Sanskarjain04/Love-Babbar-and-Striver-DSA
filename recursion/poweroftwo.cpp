#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;
}

int main(){
    int n;
    cin >> n;
    int ans = power(n);

    cout<<"Answer of 2 to the power "<<n<<" is: "<<ans;
    return 0;
}