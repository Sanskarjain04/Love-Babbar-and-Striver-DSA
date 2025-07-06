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

void reverseString(char arr[]){
    int s=0;
    int e = getLength(arr)-1;
    cout<<"The end of the string is:"<<e<<endl;
    int temp = 0;

    while(s<e){
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

int main(){

    char name[20];

    cout<<"enter your name:";
    cin>>name;
    
    cout<<"Your name is:"<<name<<endl;

    reverseString(name);

    cout<<"Your name after reverse is:"<<name<<endl;

    return 0;
}