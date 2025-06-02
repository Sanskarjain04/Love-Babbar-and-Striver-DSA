/**
 * Recursion ek programming technique hai jahan ek function khud ko directly ya indirectly call karta hai
 * ek problem ko solve karne ke liye. Recursive function mein typically ek base case hota hai jo recursion ko stop karta hai
 * aur ek ya zyada recursive cases hote hain jo problem ko chhote subproblems mein tod dete hain.
 * Ye approach aksar un problems ko solve karne ke liye use hoti hai jo similar subproblems mein divide ho sakti hain,
 * jaise ki factorials compute karna, trees traverse karna, aur puzzles solve karna jaise Tower of Hanoi.
 */

 // Recursion: When a function calls itself until a specific condition is met is called recursion.

#include<bits/stdc++.h>
using namespace std;

int myCount = 0; // We defined a global variable so that the changes keep its state even after calling the function again this makes it suitable for applying conditions in the function

void func1(){        // after calling it the function enters into its definition area where we defined the logic
    cout<<"Hello World"<<endl;
    func1();                     // here the function calls itself and goes into a loop where it calls itself again and again forever it is called non-ending recursion cause we have not specified a condition for it to stop.

    // Stack overflow occurs when the call stack pointer exceeds the stack bound. 
    // This happens because each function call uses a small amount of stack space for its execution context.
    // In the case of recursion, if the base case is not defined or not reached, the function keeps calling itself indefinitely,
    // leading to an excessive number of function calls and eventually causing a stack overflow.
};

void func2(){ 
    if (myCount == 5) // here a second function is defined with a base condition that returns when that condition is met and the code terminates.
    {
        return;
    }
    cout<<"Hello World"<<endl;
    myCount++; // We incremented the value of our global variable so that it's value gets increased and it does not create stack overflow condition.
    func2();
};

int main(){
    func2(); // here the function gets called for the first time.
    return 0;
}