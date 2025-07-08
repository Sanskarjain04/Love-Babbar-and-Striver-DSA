#include<bits/stdc++.h>
using namespace std;

void reverse(vector<char> &s, int count, int index){
    int left=index-count;
    int right=index-1;
    while (left<=right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
    
}

void reverseWords(vector<char>& s){
    int count=0;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]==' '){
            reverse(s,count,i);
            count=0;
        }
        count++;
    }
    
}
    

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<s<<endl;
    vector<char> str(s.begin(), s.end());
    reverseWords(str);
    string result(str.begin(),str.end());
    cout<<result;
    return 0;
}