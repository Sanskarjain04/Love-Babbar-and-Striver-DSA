### 🧠 What is a Pointer?

Pointer ek variable hota hai jo kisi aur variable ke address ko store karta hai.
So instead of holding a value directly, pointer holds location of that value in memory.

int a = 10;
int* ptr = &a;

# 🤔 What’s happening here?
-> a is an integer with value 10
-> &a means "address of a"
-> int* ptr means pointer to an int
-> So ptr stores the address of a

📌 Basic Pointer Terms
   Symbol	     Meaning
->   *  	-    Used to declare or dereference a pointer
->   &      -    Used to get the address of a variable

🧪 Example:
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p holds address: " << p << endl;
    cout << "Value at pointer p: " << *p << endl;

    return 0;
}

🧾 Output:
Value of a: 5
Address of a: 0x61ff08
Pointer p holds address: 0x61ff08
Value at pointer p: 5


💥 Dereferencing
*p ka matlab:

"Pointer p jahan point kar raha hai, us address pe jo value hai, use nikaal do"

📦 Why Use Pointers?
Functions me pass by reference karne ke liye

Dynamic memory allocation (heap memory)

Arrays and strings handle karne ke liye

Data structures like linked list, trees, graphs


### 🧠 Pehle Basic Idea:
🔸 Jab tu array banata hai:
int arr[5] = {10, 20, 30, 40, 50};
To arr khud ek pointer ki tarah behave karta hai.

Matlab:

arr == &arr[0]
Yani array ka naam arr actually first element ke address ko point karta hai.

✅ Example 1: Basic pointer to array
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;  // or &arr[0]

    cout << *ptr << endl;      // 10
    cout << *(ptr + 1) << endl;  // 20
    cout << *(ptr + 2) << endl;  // 30

    return 0;
}
🧾 Explanation:
ptr = arr → pointer holds base address

*(ptr + 1) → 2nd element

*(ptr + 2) → 3rd element

Because array is stored sequentially in memory.

✅ Example 2: Access using pointer in loop
for (int i = 0; i < 3; i++) {
    cout << *(ptr + i) << " ";
}
🧠 Pointer vs Array Notation
Expression	Meaning
arr[i]	element at index i
*(arr + i)	same as above
ptr[i]	same if ptr = arr

✅ Example 3: Array of Pointers
int* ptrArr[3];
int a = 10, b = 20, c = 30;

ptrArr[0] = &a;
ptrArr[1] = &b;
ptrArr[2] = &c;

cout << *ptrArr[1];  // 20
🧾 Ye thoda alag hota hai:
Yahan ptrArr ek array hai of int pointers

Har pointer kisi alag variable ko point kar raha hai

⚡ Bonus: Pointer to entire array
int arr[5] = {1, 2, 3, 4, 5};
int (*ptr)[5] = &arr;

cout << (*ptr)[2];  // prints 3
Yahan ptr is a pointer to the whole array of 5 ints.

📌 Summary:
Type	Meaning
int* p = arr;	Pointer to first element of array
*p	First element value
*(p + i)	i-th element of array
int (*p)[5]	Pointer to whole array of 5 integers


#### Pointers with Char Arrays:-

🔹 1. Char Array (C-style string)
char name[] = "Sanskar";
Ye ek character array hai jo memory mein aise store hota hai:
['S', 'a', 'n', 's', 'k', 'a', 'r', '\0']
\0 = null character (string end hone ka signal)

🔹 2. Pointer to char array
char name[] = "Sanskar";
char* ptr = name;  // or &name[0]
Yahaan ptr ek pointer hai jo name[0] (i.e., 'S') ko point karta hai.

🔹 3. Access using pointer
cout << *ptr;       // S
cout << *(ptr + 1); // a
cout << ptr;        // Sanskar (prints full string)
🧠 Why cout << ptr; works?
C++ cout jab char pointer dekhta hai, toh us address se lekar null character \0 tak print karta hai — isi wajah se pura string print ho jaata hai.

✅ Full Example:
#include <iostream>
using namespace std;

int main() {
    char name[] = "Sanskar";
    char* ptr = name;

    cout << "First char: " << *ptr << endl;
    cout << "Second char: " << *(ptr + 1) << endl;
    cout << "Full string: " << ptr << endl;

    return 0;
}


🔹 4. Char pointer with string literal
char* str = "Hello";
⚠️ Warning: Ye string literal hai — mostly stored in read-only memory, so avoid modifying it:

str[0] = 'M';  // ❌ Undefined behavior / segmentation fault
✅ Safe Way (modifiable):
char str[] = "Hello";  // Array, not pointer
str[0] = 'M';          // ✅ Works fine


🔹 5. Looping using pointer
char name[] = "Sanskar";
char* ptr = name;

while(*ptr != '\0') {
    cout << *ptr << " ";
    ptr++;
}
🔁 Output:
S a n s k a r


🔸 Summary Table
Code	Meaning
char name[]	Modifiable char array
char* ptr = name	Pointer to first character
*ptr	First character
ptr[i]	i-th character
cout << ptr	Print string till \0