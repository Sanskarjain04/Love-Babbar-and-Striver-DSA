#include<bits/stdc++.h>
using namespace std;

int getLength(char arr[]){
    int i=0;
    int count=0;
    while (arr[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}

int main(){

    char name[20];

    cout<<"enter your name:";
    cin>>name;

    cout<<"The length of the string is:"<<getLength(name);
    return 0;
}