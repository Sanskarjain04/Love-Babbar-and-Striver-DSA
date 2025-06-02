Jab bhi hum koi bada number left shift karte hain toh vo negative number ban jata hai kyiki uske shuru me 1 aajata hai

chote numbers ke liye agr aapne left shift kara toh uski value nikalne ke liye bas aap usse 2 se multiply kardo

jab hun right shift karte hain toh number ki value ko 2 se divide kardo


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"Answer is "<<ans<<endl;
    return 0;
}


iss code me hum sbse phle n le rhe hain n ek number hai integer value me.

uske baad answer ki value ko hum 0 se initialize iss value ko hum binary value store karne ke liye use karenge

toh logic decimal value ko binary me convert karne ka hai.

isme hum ek while loop lagate hain aur vo isliye kyunki hum jo number hai vo decimal me ek digit ka bhi ho skta hai aur multiple digits ka bhi ho sakta hai lekin jab hun usse binary me convert karenge tab bhut likely hai ki vo more than 2 digits ka ho toh ye while loop ussi ke liye hai.



Combinations program

formula for nCr is n!/(r!*(n-r)!)

Toh hume sbse phle n! calculate karna hoga phir r! aur phir (n-r)! aur phir r! aur (n-r)! multiply krna hoga phir n! ko result se divide krna hoga