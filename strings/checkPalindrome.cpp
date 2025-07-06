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
    int temp = 0;

    while(s<e){
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

bool isPalindrome(char arr[]){
    int s=0;
    int e = getLength(arr)-1;

    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else {
            return true;
        }
    }
}

int main(){

    char name[20];

    cout<<"enter your name:";
    cin>>name;
    
    cout<<"Your name is:"<<name<<endl;

    reverseString(name);

    cout<<"Is the string palidrome? "<<isPalindrome(name)<<endl;
    
    return 0;
}