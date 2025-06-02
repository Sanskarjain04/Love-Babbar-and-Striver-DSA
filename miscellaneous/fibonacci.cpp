#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to which the fibonacci series will run: ";
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<endl;
    cout<<b<<endl;

    for (int i = 2; i <= n; i++)
    {
        cout<<(a+b)<<endl;
        if(a<b){
            a+=b;
        }
        else {
            b+=a;
        }
    }
    return 0;
}