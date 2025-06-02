🔹 2 Pointer Approach kya hota hai?
2 pointer approach ka matlab hota hai do variables ya "pointers" ka use karna ek array ya list ke elements ko efficiently process karne ke liye.

Usually ye sorted arrays/lists ke problems mein use hota hai, jahan humein kisi condition ko satisfy karte huye kuch dhoondhna ya solve karna hota hai.

🔹 Common Types of 2 Pointer Approach:
1. Opposite Ends se Pointers:
Ek pointer start se chalta hai, doosra end se.

Jab tak condition meet na ho, pointers move karte hain.

🧠 Example: Two Sum in Sorted Array

txt
Copy
Edit
Input: [1, 2, 4, 6, 10], target = 8
Output: True (2 + 6 = 8)
🛠️ Approach:

Start = 0, End = n-1

Sum karo: arr[start] + arr[end]

Agar sum < target → start++

Agar sum > target → end--

Agar sum == target → return true

js
Copy
Edit
function hasTwoSum(arr, target) {
    let start = 0, end = arr.length - 1;
    while (start < end) {
        let sum = arr[start] + arr[end];
        if (sum === target) return true;
        else if (sum < target) start++;
        else end--;
    }
    return false;
}
2. Same Direction (Sliding Window jaisa):
Dono pointers left to right move karte hain.

Common in substring, subarray problems.

🧠 Example: Find subarray with sum k

🔹 2 Pointer Approach Kab Use Karna Chahiye?
Jab array sorted ho

Jab tumhe pair ya triplet find karna ho kisi target ke liye

Jab tumhe duplicates skip karne ho (e.g., in 3Sum problem)

Jab tumhe minimum/maximum subarray nikalni ho

