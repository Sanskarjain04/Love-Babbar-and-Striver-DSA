### Factorial ko recursion me implement karne ke liye sbse phle uska concept jaan na zaruri hai

factorial ka formula hota hai n*(n-1)*(n-2)*(n-3).....3*2*1 jaha n ek integer hai

toh mtlb agar apne pass n ho toh bas aage ke liye usme sab multiply karke apan last value tak phuch sakte hain iske liye given number chaiye aur phir ek number chaiye jisme iska multiplication store ho har step par.

toh function kuch aisa ho sakta hai

void factorial(int n {number jo given hoga mtlb jiska factorial nikalna hai}, fact){
    base condition me jab n=0 hojaye toh recursion ko stop kardo
    if(n==0){
        return;
    }
    fact*=n-1;
    factorial(n-1,fact);
}

int main(){
    int n;
    cin>>n>>endl;
    int fact=n;
    factorial(n, fact);
    return 0;
}

### Reverse an array using recursion

Ek array hai usse reverse karna hai method toh ye rahegi uski length nikalo usko 2 se divide karo floor value lo aur waha tak ek loop chalao jahan array ka first aur last index par se swap karna shuru karna hai aur har swap ke baad start ki value increase aur last ki value decrease karni hai 1 se aur ye cheez tab tak karni hai jab tak middle value tak start ki value na aajae.

iske liye
int arr;
j = length of array - 1
for(int i=0;i<=n/2;i++){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    j--;
}
