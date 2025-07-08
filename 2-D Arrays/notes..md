🧠 What is a 2D array?
A 2D array is like a grid or table — it has rows and columns.

For example:

[ [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9] ]

Here:
3 rows
3 columns
Access like arr[1][2] = 6

✅ How to declare a 2D array

int arr[3][4];  // 3 rows, 4 columns
This creates a 2D array of size 3 x 4, with default garbage values.

✅ How to initialize a 2D array

int arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

or:

int arr[2][3] = {1, 2, 3, 4, 5, 6};  // same result

✅ How to input values in 2D array

int arr[3][3];
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        cin >> arr[i][j];
    }
}
✅ How to print a 2D array
cpp
Copy
Edit
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
🔄 Accessing and modifying values
cpp
Copy
Edit
arr[0][2] = 100;  // sets element in 1st row, 3rd column to 100
✅ 2D array with variable size (user input):
cpp
Copy
Edit
int n, m;
cin >> n >> m;
int arr[n][m];  // works in some compilers (VLA - variable length arrays), but not standard C++
To handle dynamic sizes safely, use vectors 👇

📦 Bonus: 2D array using vector<vector<int>> (dynamic 2D array)
cpp
Copy
Edit
int n = 3, m = 4;
vector<vector<int>> arr(n, vector<int>(m, 0));  // 3x4 filled with 0s
Access like: arr[i][j]

