

Some function which will remember

https://chat.openai.com/c/730a4374-f48a-4fd4-bf84-825b5e5e7c69
https://chat.openai.com/c/0fffecbd-89ae-4487-bbad-a445fbb38307

Sure! Here are the rewritten explanations and code snippets in a good format:

1. Explanation:
   - The expression `pow(2, 3)` calculates 2 raised to the power of 3, which equals 8.
   - Similarly, `pow(2, 4)` calculates 2 raised to the power of 4, resulting in 16.
   - When a number `N` is left-shifted by 2 (i.e., `N = N << 2`), it is equivalent to multiplying `N` by `2^2`.
   - Therefore, `N` becomes `22 * (2^2)`, which simplifies to 88.

   Code:
   ```cpp
   int N = 22;
   N = N << 2; // Left shift N by 2
   ```

2. Explanation:
   - The condition `find(v.begin(), v.end(), key[i]) == v.end()` checks if `key[i]` is not already present in the vector `v`.
   - The `find` function searches for the element `key[i]` in the range defined by `v.begin()` and `v.end()`.
   - If the element is not found, `find` returns an iterator equal to `v.end()`.

   Code:
   ```cpp
   if (find(v.begin(), v.end(), key[i]) == v.end()) {
       // key[i] is not present in vector v
       // Perform desired actions
   }
   ```

3. Explanation:
   - The permutation and combination formula states that the combination of `n` items taken `r` at a time (`nCr`) is equal to the sum of `(n-1)C(r-1)` and `(n-1)C(r)`.
   - The code snippet provides a recursive implementation of the combination formula using memoization to avoid redundant calculations.

   Code:
   ```cpp
   vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));

   long long combo(int n, int k) {
       if (k == 0 || k == n)
           return 1;
       if (dp[n][k] != 0)
           return dp[n][k];
       dp[n][k] = combo(n - 1, k) + combo(n - 1, k - 1);
       return dp[n][k];
   }
   ```

4. Certainly! Here is the explanation and code snippet for the character case manipulation functions in C++:

Explanation:
- `isupper()` is a function that checks if a character is uppercase. It takes a character as an argument and returns a non-zero value (true) if the character is uppercase, or 0 (false) otherwise.
- `islower()` is a function that checks if a character is lowercase. It takes a character as an argument and returns a non-zero value (true) if the character is lowercase, or 0 (false) otherwise.
- `toupper()` is a function that converts a lowercase character to uppercase. It takes a character as an argument and returns the uppercase version of that character.
- `tolower()` is a function that converts an uppercase character to lowercase. It takes a character as an argument and returns the lowercase version of that character.

Code:
```cpp
#include <iostream>
#include <cctype> // Include the header for character handling functions

int main() {
    char ch = 'A'; // Example character

    // Check if the character is uppercase
    if (isupper(ch)) {
        std::cout << "The character is uppercase." << std::endl;
    }

    // Check if the character is lowercase
    if (islower(ch)) {
        std::cout << "The character is lowercase." << std::endl;
    }

    // Convert the character to uppercase
    char upperCh = toupper(ch);
    std::cout << "Uppercase version: " << upperCh << std::endl;

    // Convert the character to lowercase
    char lowerCh = tolower(ch);
    std::cout << "Lowercase version: " << lowerCh << std::endl;

    return 0;
}
```

In the above code, we include the `<cctype>` header, which provides the functions for character handling. We then declare a character `ch` and perform the following operations:
- Check if `ch` is uppercase using `isupper()` and display a message accordingly.
- Check if `ch` is lowercase using `islower()` and display a message accordingly.
- Convert `ch` to uppercase using `toupper()` and store the result in `upperCh`, then display it.
- Convert `ch` to lowercase using `tolower()` and store the result in `lowerCh`, then display it.

This code demonstrates the usage of these functions for character case manipulation in C++.


5. Explanation:
   - To sort an array `arr` in descending order, you can use the `sort` function with the `greater<int>()` comparator.

   Code:
   ```cpp
   sort(arr, arr + n, greater<int>());
   ```

6. Explanation:
   - To sort a vector `v` in descending order, you can use the `sort` function with the `rbegin()` and `rend()` iterators.

   Code:
   ```cpp
   sort(v.rbegin(), v.rend());
   ```

7. Explanation:
   - In a loop where both `i` and `j` are used together, they are incremented or manipulated simultaneously.
   - For example, if `i` and `j` are incremented together in a diagonal loop, the next iteration will correspond to the next diagonal element.

   Code:
   ```cpp
  vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    vector<int> k; // Temporary vector to store each diagonal
    int m = mat.size(); // Number of rows
    int n = mat[0].size(); // Number of columns

    // Sort diagonals starting from each row (r -> row)
    for (int r = 0; r < m; r++) {
        k.clear(); // Clear the temporary vector for each diagonal
        // Traverse the diagonal elements (j increments for columns, i increments for rows)
        for (int j = 0, i = r; j < n && i < m; j++, i++) {
            k.push_back(mat[i][j]); // Store the diagonal elements in vector k
        }
        sort(k.begin(), k.end()); // Sort the diagonal elements in ascending order
        // Update the matrix with the sorted diagonal elements
        for (int j = 0, i = r; j < n && i < m; j++, i++) {
            mat[i][j] = k[j];
        }
    }

    // Sort diagonals starting from each column (c -> column)
    for (int c = 1; c < n; c++) {
        k.clear(); // Clear the temporary vector for each diagonal
        // Traverse the diagonal elements (i increments for rows, j increments for columns)
        for (int i = 0, j = c; j < n && i < m; i++, j++) {
            k.push_back(mat[i][j]); // Store the diagonal elements in vector k
        }
        sort(k.begin(), k.end()); // Sort the diagonal elements in ascending order
        // Update the matrix with the sorted diagonal elements
        for (int i = 0, j = c; j < n && i < m; i++, j++) {
            mat[i][j] = k[i];
        }
    }

    return mat; // Return the sorted matrix
}


   ```

8. Explanation:
   - The code snippet demonstrates how to check if a given string `s` is present in another string `str` using the `find` function and `string::npos` as the not-found indicator.

   Code:
   ```cpp
   string s;
   cin >> s;

   string str = "FBFFBFFBFBFFBFFBFBFFBFFB";
   if (str.find(s) != string::npos) {
       cout << "YES" << endl;
   } else {
       cout << "NO" << endl;
   }
   ```

9. Explanation:
   - The definitions of subsequences, subsets, and subarrays for the set [1, 2, 3] are provided:
     - Subsequence: A subsequence is a sequence derived from the original sequence by deleting some or no elements without changing the order. Examples include [1], [2], [3], [1, 2], [1, 3], [2, 3], [1, 2, 3].
     - Subset: A subset is a selection of elements from a set, where the order of elements doesnt matter. Examples include [], [1], [2], [3], [1, 2], [1, 3], [2, 3], [1, 2, 3].
     - Subarray: A subarray is a contiguous subsequence of the original array. Examples include [1], [2], [3], [1, 2], [2, 3], [1, 2, 3].

10. Explanation:
    - In C/C++, `LLONG_MIN` and `LLONG_MAX` are predefined macros representing the minimum and maximum values of the `long long` data type, respectively. `long long` is a signed integer type capable of storing larger values than `int` or `long`.

11. Explanation:
    - The initialization of a 2D vector `vis` with dimensions `n` rows and `m` columns is demonstrated using the `vector` constructor.
    - The `vis` vector is initialized with `false` values.

    Code:
    ```cpp
    int n, m;
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    ```

15. set<vector<int>> uniquePermutations;

The line `set<vector<int>> uniquePermutations;` declares a set called `uniquePermutations` that is used to store unique permutations of vectors of integers.

A set is a container that stores unique elements in no particular order. In this case, the set `uniquePermutations` is used to store unique permutations encountered during the permutation generation process.

The element type of the set is `vector<int>`, which represents a permutation of integers. Since a set only allows unique elements, any duplicate permutations will be automatically removed when added to the set.

By using a set to store unique permutations, duplicates can be efficiently eliminated without the need for manual checks or additional bookkeeping. It simplifies the process of generating unique permutations by taking advantage of the sets inherent property of maintaining uniqueness.




STL
1. **Map vs. Unordered_map:**
The `map` and `unordered_map` are containers in C++ used to store key-value pairs. The main difference between them is the order of elements and their performance characteristics.

- `map` is an ordered container, meaning that the elements are sorted based on the key. It uses a self-balancing binary search tree (usually a red-black tree) to maintain the order. By default, it sorts the elements in increasing order of the keys.
- `unordered_map` is an unordered container, which means the elements are not sorted. It uses a hash table to store and access the elements, providing faster average access time compared to `map`. However, it does not maintain any particular order of the elements.

Here's an example demonstrating the usage of `map` and `unordered_map`:

```cpp
#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    std::map<int, std::string> orderedMap;
    orderedMap[1] = "one";
    orderedMap[3] = "three";
    orderedMap[2] = "two";

    std::cout << "Ordered Map:" << std::endl;
    for (const auto& pair : orderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    std::unordered_map<int, std::string> unorderedMap;
    unorderedMap[1] = "one";
    unorderedMap[3] = "three";
    unorderedMap[2] = "two";

    std::cout << "\nUnordered Map:" << std::endl;
    for (const auto& pair : unorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
```

Output:
```
Ordered Map:
1: one
2: two
3: three

Unordered Map:
2: two
1: one
3: three
```

2. **Calculating the sum of elements using accumulate:**
The `accumulate` function from the C++ Standard Template Library (STL) is used to calculate the sum of elements in a given range. It takes three arguments: the beginning iterator of the range, the ending iterator of the range, and the initial value of the sum.

Here's an example demonstrating the usage of `accumulate` to calculate the sum of elements in a vector:

```cpp
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    int sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
```

Output:
```
Sum: 15
```

3. **Increasing the loop index by 2:**
To increase the loop index by 2 in C++, you can use the increment operator `+=`. Here's an example:

```cpp
#include <iostream>

int main() {
    int n = 10;

    for (int i = 0; i < n; i += 2) {
            int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;

    }

    return 0;
}
```


4. **Finding the size of an array:**
To find the size of a statically allocated array in C++, you can divide the size of the array in bytes by the size of its first element in bytes.

Here's an example:

```cpp
#include <iostream>

int main() {
    int arr[] = {0, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Size of array: " << n << std::endl;

    return 0;
}
```

Output:
```
Size of array: 6
```

5. **Using ASCII values in C++:**
The ASCII values can be used in C++ to represent characters or perform operations based on their numerical values. In ASCII, each character is assigned a unique numeric value.

For example, 'a' has an ASCII value of 97, and 'A' has an ASCII value of 65. These values can be used in various operations or when comparing characters.

6. **Static keyword and initialization in a function:**
The `static` keyword in C++ has different meanings depending on its context. When a variable is declared as `static` inside a function, it retains its value between function calls.

Here's an example:

```cpp
#include <iostream>

void solve() {
    static int count = 0;
    count++;

    std::cout << "Count: " << count << std::endl;
}

int main() {
    solve(); // Count: 1
    solve(); // Count: 2
    solve(); // Count: 3

    return 0;
}
```

Output:
```
Count: 1
Count: 2
Count: 3
```

In the above example, the `count` variable is initialized only once and retains its value between function calls. Each time the `solve()` function is called, the value of `count` increases by 1.

7. **Incrementing index variable in an array:**
The expression `preorder[idx++]` increments the `idx` variable after using its current value. It is a post-increment operator. It retrieves the value of `preorder[idx]` and then increments `idx` by 1.

8. **Using a set of vectors in C++:**
The declaration `set<vector<int>> s;` suggests the creation of a set that stores vectors of integers. The `set` container in C++ ensures that each element is unique and sorted in ascending order by default.

Here's an example demonstrating the usage of a set of vectors:

```cpp
#include <iostream>
#include <vector>
#include <set>

int main() {
    std::set<std::vector<int>> s;

    // Inserting vectors into the set
    s.insert({1, 2, 3});
    s.insert({4, 5});
    s.insert({1, 2, 3}); // Duplicate, will not be inserted

    // Accessing elements in the set
    for (const auto& vec : s) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

Output:
```
1 2 3
4 5
```

In the above example, the set `s` contains three vectors. The duplicate vector `{1, 2, 3}` is not inserted into the set. The elements of the set are then accessed and printed, showing the unique and sorted vectors.








                                                             Vector

Vector Operations:

1. Erasing Elements:
The `erase` function in C++ vector allows us to remove elements from the vector. There are two variations of this function:

a. `erase(int position)`:
This version of the `erase` function removes the element at the specified position in the vector. For example, `v.erase(v.begin()+4);` erases the fifth element of the vector `v`.

b. `erase(start_pos, end_pos)`:
This version of the `erase` function removes elements in a specified range. It takes two iterators, `start_pos` and `end_pos`, which represent the range of elements to be removed. The range is inclusive of the start position and exclusive of the end position. For example, `v.erase(v.begin()+2, v.begin()+5);` erases all the elements from the third element to the fifth element in the vector.

2. Resizing Vector:
The `resize` function is used to change the size of the vector. If we want to resize the vector to a specific size `n`, we can use `nums.resize(n)`, where `nums` is the vector. This function will resize the vector to `n`, potentially discarding or adding elements as needed.

3. Applying Binary Search in Vector:
To apply binary search on a vector, we can use the `binary_search` method in C++. It takes three parameters: the starting iterator, the ending iterator, and the target value. For example, `binary_search(v.begin(), v.end(), target)` will return a boolean value indicating whether the `target` is present in the vector `v` or not.

Code Example:
Here's an example code snippet demonstrating the usage of the above vector operations:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    // Erasing elements
    v.erase(v.begin() + 4); // Erase the fifth element (position 4)
    v.erase(v.begin() + 2, v.begin() + 5); // Erase elements from position 2 to 4

    // Resizing vector
    int n = 10; // New size of the vector
    v.resize(n);

    // Applying binary search
    int target = 3;
    bool isPresent = std::binary_search(v.begin(), v.end(), target);

    std::cout << "Target " << (isPresent ? "is" : "is not") << " present in the vector." << std::endl;

    return 0;
}
```

In this code, we create a vector `v` with initial values [1, 2, 3, 4, 5]. We then demonstrate the usage of `erase` to remove elements at specific positions and within a range. Next, we resize the vector to a new size `n`. Finally, we apply binary search to check if the target value `3` is present in the vector `v`. The result is printed on the console.

Array

Recursion

Generate Parentheses - LeetCode

String

 how to add ‘a’ to ‘z’ in word 
‘a’ ascii value is 97  when we add j={1,2,3,…} wo j ka value 97 me add ho jata hai phir uss corresponding jo char rahti hai wo value output deta hai 
To add 'a' to 'z' in a word, you can iterate over each character in the word and replace it with the corresponding character after adding a value ranging from 0 to 25 (representing 'a' to 'z').

Here's the code in C++:

```cpp
#include <iostream>
#include <string>

void addAToZ(std::string& word) {
    for (int i = 0; i < word.length(); i++) {
        char ch = word[i];
        for (int j = 0; j < 26; j++) {
            word[i] = 'a' + j;
            std::cout << word[i] << " ";
        }
        word[i] = ch;  // Reset the original character
        std::cout << std::endl;
    }
}

int main() {
    std::string word = "example";
    addAToZ(word);
    return 0;
}
```

Explanation:
1. The function `addAToZ` takes a reference to a string (`std::string& word`) as input.
2. It iterates over each character in the word using a `for` loop.
3. Inside the loop, it stores the current character in a variable `ch`.
4. Another nested `for` loop iterates from 0 to 25 (inclusive), representing the range of 'a' to 'z'.
5. In each iteration, the character at the current position in the word is replaced with the corresponding character by adding the value of `j` to 'a'.
6. The modified character is printed to the console.
7. After the nested loop, the original character (`ch`) is restored in the word.
8. Finally, a newline is printed to separate the results for each character.

In the `main` function, we initialize a string `word` with the value "example". Then, we call the `addAToZ` function, passing the `word` as an argument. The function will iterate over each character in the word and display the modified characters on the console.

Note: The code assumes that the `iostream` and `string` libraries are included at the beginning of the program.


2.   Maximum Product of Word Lengths - LeetCode

class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<vector<int>> freq(words.size(), vector<int>(26, 0));
        
        // Count the frequency of characters in each word
        for (int i = 0; i < words.size(); i++) {
            for (char ch : words[i]) {
                freq[i][ch - 'a']++;
            }
        }
        
        int maxProd = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (!hasCommonLetters(freq[i], freq[j])) {
                    int product = words[i].length() * words[j].length();
                    maxProd = max(maxProd, product);
                }
            }
        }
        
        return maxProd;
    }
    
private:
    bool hasCommonLetters(const vector<int>& freq1, const vector<int>& freq2) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] > 0 && freq2[i] > 0) {
                return true;
            }
        }
        return false;
    }
};




Binary Search
1. Binary Search Functions in C++ STL (binary_search, lower_bound, and upper_bound)

Explanation:
In C++ STL (Standard Template Library), there are three useful functions for performing binary search on a sorted sequence: binary_search, lower_bound, and upper_bound. These functions can be used to efficiently search for an element or find the range of elements within a sorted container.

- The binary_search function checks if a given element exists in the sorted sequence. It returns a boolean value indicating whether the element is present or not.

- The lower_bound function returns an iterator pointing to the first element in the sorted sequence that is not less than the target element. If the target element is not found, it returns an iterator pointing to the first element that is greater than the target.

- The upper_bound function returns an iterator pointing to the first element in the sorted sequence that is greater than the target element. It returns the same iterator as lower_bound if the target element is not found.

These functions are powerful tools for efficient searching in sorted sequences and are readily available in the C++ Standard Template Library.

Example usage:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> sortedVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int target = 6;

    // Using binary_search
    if (std::binary_search(sortedVec.begin(), sortedVec.end(), target)) {
        std::cout << "Element " << target << " found using binary_search.\n";
    } else {
        std::cout << "Element " << target << " not found using binary_search.\n";
    }

    // Using lower_bound and upper_bound
    auto lower = std::lower_bound(sortedVec.begin(), sortedVec.end(), target);
    auto upper = std::upper_bound(sortedVec.begin(), sortedVec.end(), target);

    if (lower != sortedVec.end()) {
        std::cout << "Lower bound: " << *lower << " at index " << std::distance(sortedVec.begin(), lower) << std::endl;
    }

    if (upper != sortedVec.end()) {
        std::cout << "Upper bound: " << *upper << " at index " << std::distance(sortedVec.begin(), upper) << std::endl;
    }

    return 0;
}
```

2. Calculating the Midpoint (Always use this method)

Explanation:
To calculate the midpoint of a range or sequence, you can use a simple formula in C++. Given the lower and upper bounds of the range, the midpoint can be calculated using the formula: `mid = low + (end - low)/2`. This formula ensures that the midpoint is always correctly calculated, even for cases where the range has an odd number of elements.

Example usage:
```cpp
#include <iostream>

int main() {
    int low = 0;
    int end = 10;
    
    int mid = low + (end - low) / 2;
    std::cout << "Midpoint: " << mid << std::endl;
    
    return 0;
}
```

In this example, the `mid` variable is calculated using the formula `low + (end - low)/2`. This formula guarantees that the midpoint is accurately determined, regardless of whether the range has an even or odd number of elements.





3.    Search a 2D Matrix - LeetCode
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // Number of rows
        int n = matrix[0].size(); // Number of columns

        int left = 0;
        int right = m * n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int row = mid / n;
            int col = mid % n;

            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};


Reason 
Why will this do int row = mid / n; int col = mid % n; ?
In the given implementation, the expressions int row = mid / n; and int col = mid % n; are used to calculate the row and column indices of the element at the mid index of the flattened matrix.
Since the matrix is represented as a 2D vector, we need to convert the linear mid index into its corresponding row and column indices in order to access the element in the matrix.
The expression mid / n calculates the row index. Here, mid is divided by n to determine how many complete rows have been passed. This gives us the row index of the element at the mid index.
The expression mid % n calculates the column index. The modulus operator % gives us the remainder after dividing mid by n. This remainder represents the column index of the element at the mid index within the row.
By using these calculations, we can map the linear index mid to its corresponding row and column indices in the matrix. This allows us to access and compare the value at that index with the target element during the binary search process.



Linked List
Linked List - Data Structure and Algorithms.


1290. Convert Binary Number in a Linked List to Integer
Sure! Here's the code in a properly formatted C++ code with an explanation:

```cpp
#include <string>

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        // Step 1: Convert the binary number in the linked list to a string
        std::string num;
        while (head != NULL) {
            num += std::to_string(head->val);
            head = head->next;
        }
        
        // Step 2: Convert the binary string to decimal
        int res = 0;
        int pv = 1; // Power of 2
        for (int i = num.size() - 1; i >= 0; i--) {
            res += pv * (std::stoi(num.substr(i, 1)));
            pv *= 2;
        }
        
        // Step 3: Return the decimal value
        return res;
    }
};
```

Explanation:

1. The function `getDecimalValue` takes a pointer to the head of a linked list as input and returns the decimal value of the binary number represented by the linked list.

2. The code first initializes an empty string `num` to store the binary number. Then, it traverses the linked list by following the `next` pointers until it reaches the end. At each node, it converts the value of the node to a string using `std::to_string` and appends it to `num`. This way, `num` will contain the binary number in reverse order.

3. After converting the binary number to a string, the code proceeds to convert it to decimal. It initializes the decimal result `res` to 0 and the power of 2 `pv` to 1. It then iterates over each character of the binary string `num` in reverse order, starting from the most significant bit. For each bit, it multiplies its value (0 or 1) by the current power of 2 `pv` and adds the result to `res`. After each iteration, it updates `pv` by multiplying it by 2, effectively increasing its value by one power of 2.

4. Finally, the function returns the computed decimal value `res`.

Note: This code assumes the presence of a `ListNode` class or struct that represents a node in the linked list. The code snippet you provided did not include the definition of this class, so make sure to define it before using this code.




Tree


Here's the code rewritten in a better format with explanations:


```cpp
#include <iostream>
#include <vector>


using namespace std;


// Define TreeNode class
class TreeNode
{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    // Constructor
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


int main()
{
    vector<int> a = {1, 2, 2, 3, 4, 4};


    // Create the root node
    TreeNode* root = new TreeNode(a[0]);
    TreeNode* temp = root;
    
    // Build the tree
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] < temp->val)
        {
            if (temp->left == nullptr)
            {
                temp->left = new TreeNode(a[i]);
                temp = temp->left;
            }
            else
            {
                temp = temp->left;
                temp->left = new TreeNode(a[i]);
                temp = temp->left;
            }
        }
        else
        {
            if (temp->right == nullptr)
            {
                temp->right = new TreeNode(a[i]);
                temp = temp->right;
            }
            else
            {
                temp = temp->right;
                temp->right = new TreeNode(a[i]);
                temp = temp->right;
            }
        }
    }
    
    // Perform inorder traversal (Left, Root, Right)
    // TODO: Implement inorder traversal logic here
    
    return 0;
}
```


Explanation:
- The code begins by including the necessary headers and declaring the `TreeNode` class.
- Inside the `main` function, a vector `a` is declared and initialized with some values.
- The root node of the tree is created using the first element of the vector.
- A temporary pointer `temp` is initialized to point to the root node for building the tree.
- The `for` loop iterates over the remaining elements of the vector `a` and performs the following steps:
  - If the current element is less than the value of `temp`, it means it should be placed in the left subtree.
    - If the left child of `temp` is `nullptr`, create a new node and assign it as the left child of `temp`.
    - If the left child of `temp` already exists, move `temp` to its left child and create a new node there.
  - If the current element is greater than or equal to the value of `temp`, it should be placed in the right subtree.
    - Follow similar steps as for the left subtree, but considering the right child of `temp`.
- After the tree is constructed, the code needs to implement the inorder traversal logic to traverse the tree in the order: Left, Root, Right. This part is marked with a TODO comment and should be added accordingly.
- The code currently returns 0 to indicate successful execution, but you can modify it as per your requirements.






Here is the reformatted text with explanations for each topic, along with example code in C++:

1. Inorder Traversal:
In inorder traversal, we first visit the left child, then the root node, and finally the right child of a binary tree. This traversal visits the nodes in ascending order when applied to a binary search tree.
Example code in C++:
```cpp
void inorderTraversal(Node* root) {
    if (root == nullptr)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
```

2. Preorder Traversal:
Preorder traversal visits the root node first, then the left child, and finally the right child. This traversal is often used to create a copy of the tree or to get a prefix expression of an expression tree.
Example code in C++:
```cpp
void preorderTraversal(Node* root) {
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
```

3. Postorder Traversal:
Postorder traversal visits the left child, then the right child, and finally the root node. It is often used to delete a tree or to get a postfix expression of an expression tree.
Example code in C++:
```cpp
void postorderTraversal(Node* root) {
    if (root == nullptr)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}
```

4. Level Order Traversal:
Level order traversal visits the nodes of a binary tree level by level, from left to right. It uses a queue to keep track of the nodes at each level.
Example code in C++:
```cpp
void levelOrderTraversal(Node* root) {
    if (root == nullptr)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != nullptr)
            q.push(current->left);

        if (current->right != nullptr)
            q.push(current->right);
    }
}
```

5. Convert an Arbitrary Binary Tree to Hold Children Sum Property:
This problem deals with modifying a binary tree such that each node's value is equal to the sum of its childrens values. If a node has no children, its value remains unchanged.
Example code in C++:
```cpp
void convertToChildrenSumProperty(Node* root) {
    if (root == nullptr || (root->left == nullptr && root->right == nullptr))
        return;

    convertToChildrenSumProperty(root->left);
    convertToChildrenSumProperty(root->right);

    int leftVal = root->left ? root->left->data : 0;
    int rightVal = root->right ? root->right->data : 0;
    int diff = leftVal + rightVal - root->data;

    if (diff < 0) {
        root->data += abs(diff);
    } else if (diff > 0) {
        if (root->left)
            root->left->data += diff;
        else if (root->right)
            root->right->data += diff;
    }
}
```

6. Check Children Sum Property in a Binary Tree:
This problem involves checking whether a given binary tree satisfies the children sum property, i.e., each node's value is equal to the sum of its childrens values. If a node has no children, it satisfies the property.
Example code in C++:
```cpp
bool checkChildrenSumProperty(Node* root) {
    if (root == nullptr || (root->left == nullptr && root->right == nullptr))
        return true;

    int leftVal = root->left ? root->left->data : 0;
    int rightVal = root->right ? root->right->data : 0;

    if (root->data != leftVal + rightVal)
        return false;

    return checkChildrenSumProperty(root->left) && checkChildrenSumProperty(root->right);
}
```

7. N-ary Tree:
An N-ary tree is a tree data structure in which each node can have a maximum of N children. It is a generalization of a binary tree.
Example code in C++:
```cpp
class Node {
public:
    int data;
    vector<Node*> children;
};

void traverseNaryTree(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";

    for (Node* child : root->children)
        traverseNaryTree(child);
}
```

These are some common topics related to binary trees and N-ary trees, along with their explanations and example code in C++.






Graph

// Union Find Algorithm with minor tweaks
class Solution {
    vector<int> parent;
    
    int find(int x) {
        return parent[x] == x ? x : find(parent[x]);
    }
    
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        
        parent.resize(n+1, 0);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
        
        vector<int> res(2, 0);
        for (int i = 0; i < n; i++) {
            int x = find(edges[i][0]);
            int y = find(edges[i][1]);
            
            if (x != y)
                parent[y] = x;
            else {
                res[0] = edges[i][0];
                res[1] = edges[i][1];
            }
        }
        
        return res;
    }
};

// Depth First Search
// Start DFS from nodes at the boundary
class Solution {
    int rows, cols;
    
    void dfs(vector<vector<int>>& A, int i, int j) {
        if (i < 0 || j < 0 || i >= rows || j >= cols)
            return;
        
        if (A[i][j] != 1)
            return;
        
        A[i][j] = -1;
        dfs(A, i+1, j);
        dfs(A, i-1, j);
        dfs(A, i, j+1);
        dfs(A, i, j-1);
    }
    
public:
    int numEnclaves(vector<vector<int>>& A) {
        if (A.empty())
            return 0;
        
        rows = A.size();
        cols = A[0].size();
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i == 0 || j == 0 || i == rows-1 || j == cols-1)
                    dfs(A, i, j);
            }
        }
        
        int ans = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (A[i][j] == 1)
                    ans++;
            }
        }
        
        return ans;
    }
};

// Time taken to reach all nodes or share information to all graph nodes
class Solution {
    void dfs(unordered_map<int, vector<int>>& hm, int i, vector<int>& informTime, int& res, int curr) {
        curr += informTime[i];
        res = max(res, curr);
        
        for (auto it = hm[i].begin(); it != hm[i].end(); it++)
            dfs(hm, *it, informTime, res, curr);
    }
    
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int, vector<int>> hm;
        
        for (int i = 0; i < n; i++)
            if (manager[i] != -1)
                hm[manager[i]].push_back(i);
        
        int res = 0, curr = 0;
        dfs(hm, headID, informTime, res, curr);
        return res;
    }
};

// DFS from each unvisited node/Island problems
class Solution {
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j, int m, int n) {
        if (i < 0 || i >= m || j < 0 || j >= n)
            return;
        
        if (grid[i][j] == '0' || visited[i][j])
            return;
        
        visited[i][j] = true;
        dfs(grid, visited, i+1, j, m, n);
        dfs(grid, visited, i, j+1, m, n);
        dfs(grid, visited, i-1, j, m, n);
        dfs(grid, visited, i, j-1, m, n);
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty())
            return 0;
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    dfs(grid, visited, i, j, m, n);
                    res++;
                }
            }
        }
        
        return res;
    }
};

// Cycle Find
class Solution {
    bool dfs(vector<vector<int>>& graph, int v, vector<int>& dp) {
        if (dp[v])
            return dp[v] == 1;
        
        dp[v] = -1;
        
        for (auto it = graph[v].begin(); it != graph[v].end(); it++)
            if (!dfs(graph, *it, dp))
                return false;
        
        dp[v] = 1;
        
        return true;
    }
    
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        
        vector<int> res;
        vector<int> dp(V, 0);
        
        for (int i = 0; i < V; i++) {
            if (dfs(graph, i, dp))
                res.push_back(i);
        }
        
        return res;
    }
};

// Breadth First Search

// Shortest Path
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty())
            return matrix;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        queue<pair<int, int>> pq;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    pq.push({i-1, j});
                    pq.push({i+1, j});
                    pq.push({i, j-1});
                    pq.push({i, j+1});
                }
            }
        }
        
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        int steps = 0;
        
        while (!pq.empty()) {
            steps++;
            int size = pq.size();
            
            for (int i = 0; i < size; i++) {
                auto front = pq.front();
                int l = front.first;
                int r = front.second;
                pq.pop();
                
                if (l >= 0 && r >= 0 && l < rows && r < cols && !visited[l][r] && matrix[l][r] == 1) {
                    visited[l][r] = true;
                    matrix[l][r] = steps;
                    pq.push({l-1, r});
                    pq.push({l+1, r});
                    pq.push({l, r-1});
                    pq.push({l, r+1});
                }
            }
        }
        
        return matrix;
    }
};

// Graph coloring/Bipartition
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        
        for (int i = 0; i < n; i++) {
            if (color[i] != -1)
                continue;
            
            color[i] = 1;
            queue<int> q;
            q.push(i);
            
            while (!q.empty()) {
                int t = q.front();
                q.pop();
                
                for (int j = 0; j < graph[t].size(); j++) {
                    if (color[graph[t][j]] == -1) {
                        color[graph[t][j]] = 1 - color[t];
                        q.push(graph[t][j]);
                    } else if (color[graph[t][j]] == color[t]) {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};

// Topological Sort
class Solution {
    int V;
    list<int>* adj;
    
    bool isCyclicUtil(int v, vector<bool>& visited, vector<bool>& recStack) {
        visited[v] = true;
        recStack[v] = true;
        
        for (auto it = adj[v].begin(); it != adj[v].end(); it++) {
            if (!visited[*it] && isCyclicUtil(*it, visited, recStack))
                return true;
            else if (recStack[*it])
                return true;
        }
        
        recStack[v] = false;
        return false;
    }
    
    bool isCyclic() {
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);
        
        for (int i = 0; i < V; i++) {
            if (isCyclicUtil(i, visited, recStack))
                return true;
        }
        
        return false;
    }
    
    void topologicalSortUtil(int v, vector<bool>& visited, vector<int>& res) {
        visited[v] = true;
        
        for (auto it = adj[v].begin(); it != adj[v].end(); it++) {
            if (!visited[*it])
                topologicalSortUtil(*it, visited, res);
        }
        
        res.push_back(v);
    }
    
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        V = numCourses;
        adj = new list<int>[V];
        
        unordered_map<int, vector<int>> hm;
        
        for (int i = 0; i < prerequisites.size(); i++) {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            hm[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        if (isCyclic())
            return vector<int>();
        
        int i = 0;
        for (i = 0; i < V; i++) {
            if (hm.find(i) == hm.end())
                break;
        }
        
        return topologicalSort(i);
    }
};

// Find Shortest Path (Dijkstra's/Bellman Ford)
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(N+1, INT_MAX);
        
        pq.push(make_pair(0, K));
        dist[K] = 0;
        
        unordered_map<int, vector<pair<int, int>>> hm;
        for (int i = 0; i < times.size(); i++)
            hm[times[i][0]].push_back(make_pair(times[i][1], times[i][2]));
        
        while (!pq.empty()) {
            pair<int, int> p = pq.top();
            pq.pop();
            
            int u = p.second;
            for (auto it = hm[u].begin(); it != hm[u].end(); it++) {
                int v = it->first;
                int w = it->second;
                
                if (dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    pq.push(make_pair(dist[v], v));
                }
            }
        }
        
        int res = 0;
        for (int i = 1; i <= N; i++)
            res = max(res, dist[i]);
        
        return res == INT_MAX ? -1 : res;
    }
};

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        int n = times.size();
        if (!n)
            return 0;
        
        vector<int> dist(N+1, INT_MAX);
        int res = 0;
        
        dist[K] = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < n; j++) {
                int u = times[j][0];
                int v = times[j][1];
                int w = times[j][2];
                
                if (dist[u] != INT_MAX && dist[u] + w < dist[v])
                    dist[v] = w + dist[u];
            }
        }
        
        for (int i = 1; i <= N; i++)
            res = max(res, dist[i]);
        
        return res == INT_MAX ? -1 : res;
    }
};



Graph For Beginners [Problems | Pattern | Sample Solutions] - LeetCode Discuss


DP
Dynamic Programming Patterns - LeetCode Discuss

Greedy
Backtracking












Two Pointer

The Two Pointers Technique is a popular algorithmic approach used to solve certain types of problems efficiently. It involves maintaining two pointers that traverse through a data structure such as an array or a linked list. The pointers are used to perform different operations simultaneously, leading to improved time complexity compared to naive approaches.

Here's an example implementation of the 

Two Pointers Technique in C++:

```cpp
#include <iostream>
#include <vector>

using namespace std;

void twoPointers(vector<int>& nums, int target) {
    int left = 0; // Pointer starting from the beginning of the array
    int right = nums.size() - 1; // Pointer starting from the end of the array

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            // Found a pair with the target sum
            cout << "Pair found: " << nums[left] << ", " << nums[right] << endl;
            left++;
            right--;
        } else if (sum < target) {
            // The current sum is too small, move the left pointer to increase the sum
            left++;
        } else {
            // The current sum is too large, move the right pointer to decrease the sum
            right--;
        }
    }

    cout << "No pair found with the target sum." << endl;
}

int main() {
    vector<int> nums = {2, 4, 6, 8, 10};
    int target = 14;

    twoPointers(nums, target);

    return 0;
}
```

Explanation:
1. The `twoPointers` function takes a reference to a vector of integers (`nums`) and a target sum (`target`) as input.
2. It initializes two pointers, `left` and `right`, which initially point to the beginning and end of the `nums` array, respectively.
3. The function enters a `while` loop, which continues until the `left` pointer crosses the `right` pointer.
4. Inside the loop, it calculates the sum of the values at the `left` and `right` pointers.
5. If the sum equals the target, it means a pair with the target sum has been found, and the function prints the pair. The `left` pointer is then incremented, and the `right` pointer is decremented to continue searching for more pairs.
6. If the sum is less than the target, the `left` pointer is incremented to increase the sum.
7. If the sum is greater than the target, the `right` pointer is decremented to decrease the sum.
8. If no pair is found with the target sum, the function prints a message indicating so.
9. In the `main` function, a sample input array (`nums`) and target sum (`target`) are provided. The `twoPointers` function is then called with these arguments.
10. The program outputs the pairs found with the target sum, if any, or a message stating that no such pair was found.

This is a simple example of the Two Pointers Technique. The approach can be applied to various problem scenarios, such as finding pairs with a certain difference, determining if a triplet exists with a specific sum, or searching for subarrays with a given sum. By using two pointers to traverse the data structure simultaneously, the technique often provides a more optimized solution compared to other approaches.






In C++, you can use the `std::stoi` function to convert a string representing an integer to an actual integer value. It's called 

"string to integer."

Here's an example code that shows how to use `std::stoi` without using the `try` statement:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "12345"; // A string representing an integer

    int num = 0;
    bool conversionSuccess = true;

    // Convert the string to an integer
    for (char c : str) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        } else {
            conversionSuccess = false;
            break;
        }
    }

    if (conversionSuccess) {
        std::cout << "The converted integer is: " << num << std::endl;
    } else {
        std::cout << "Invalid argument: the string contains non-numeric characters." << std::endl;
    }

    return 0;
}
```

In this simplified code, we include the necessary headers `<iostream>` and `<string>`. We declare a string variable `str` representing the integer value `"12345"`.

We iterate through each character in the string and check if it is a digit between 0 and 9. If it is, we update the `num` variable accordingly. If any character is found that is not a digit, we set the `conversionSuccess` flag to `false` and break out of the loop.

After the loop, we check the value of `conversionSuccess`. If it's `true`, the conversion was successful, and we print the converted integer value. If it's `false`, we output an error message indicating that the string contains non-numeric characters.

By avoiding the use of `try` and exceptions, we handle the error case directly within the code.






In C++, the `substr()` function is used to extract a substring from a given string. It allows you to extract a portion of a string by specifying the starting position and the length of the substring. Here's an example that demonstrates the usage of

 `substr()` in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    
    // Extract a substring starting at position 7 with length 5
    std::string substr = str.substr(7, 5);
    
    std::cout << "Original string: " << str << std::endl;
    std::cout << "Substring: " << substr << std::endl;

    return 0;
}
```

Output:
```
Original string: Hello, World!
Substring: World
```

In the example above, the `substr()` function is called on the `str` string object. It takes two arguments: the starting position (index) of the substring, and the length of the substring. In this case, it starts at index 7 (which corresponds to the letter 'W') and extracts a substring of length 5. The extracted substring "World" is stored in the `substr` string variable and then printed to the console.

Note that the starting position in `substr()` is zero-based, meaning the first character of the string has an index of 0. Also, if you omit the length argument, `substr()` will extract the remaining characters from the starting position until the end of the string.



Sure! Here's the rewritten code in a more organized format with explanations:

```cpp
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        // Convert the integer 'num' to a string
        string x = to_string(num);
        
        // Get the length of the string
        int n = x.length();
        
        // Initialize a counter variable to keep track of the number of valid substrings
        int ans = 0;
        
        // Iterate through each substring of length 'k' in 'x'
        for (int i = 0; i <= (n - k); i++) {
            // Extract the current substring of length 'k' from 'x'
            string substr = x.substr(i, k);
            
            // Convert the substring to an integer
            int subNum = stoi(substr);
            
            // Check if the substring is not zero and is a divisor of 'num'
            if (subNum != 0 && num % subNum == 0) {
                // Increment the counter if the conditions are met
                ans++;
            }
        }
        
        // Return the total count of valid substrings
        return ans;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;
    
    // Test the function with sample inputs
    int num = 12345;
    int k = 2;
    int result = solution.divisorSubstrings(num, k);
    
    // Print the result
    cout << "Number of valid substrings: " << result << endl;
    
    return 0;
}
```

Explanation:
- The `divisorSubstrings` function takes an integer `num` and an integer `k` as input and returns the count of valid substrings.
- The function converts the integer `num` to a string `x` using the `to_string` function.
- It initializes a counter variable `ans` to keep track of the number of valid substrings.
- The function iterates through each substring of length `k` in `x` using a for loop.
- For each substring, it checks if the substring is not zero and is a divisor of `num` using conditional statements.
- If the conditions are met, it increments the counter `ans`.
- Finally, the function returns the total count of valid substrings.
- In the `main` function, an instance of the `Solution` class is created.
- The `divisorSubstrings` function is tested with sample inputs (`num = 12345` and `k = 2`) and the result is printed.



In C++, you can convert an 
`int` to a `string` 

using the standard library's `to_string()` function. Here's an example code snippet that demonstrates the conversion:

```cpp
#include <iostream>
#include <string>

int main() {
    int number = 42; // The integer you want to convert
    std::string strNumber = std::to_string(number); // Conversion using to_string()

    std::cout << "Original integer: " << number << std::endl;
    std::cout << "Converted string: " << strNumber << std::endl;

    return 0;
}
```

In the code above, the `to_string()` function is called with the `number` variable as an argument. It returns a `string` representation of the integer value, which is then assigned to the `strNumber` variable. Finally, the original integer and the converted string are printed to the console.

When you run this code, the output will be:

```
Original integer: 42
Converted string: 42
```

You can replace `number` with any other integer value you want to convert.





Prefix Sum




Sure! Here's the provided code rewritten in a more readable format with explanatory comments:

```cpp
#include <vector>

class Solution {
public:
    int waysToSplitArray(std::vector<int>& nums) {
        int valid_split = 0;
        long long right_sum = 0, left_sum = 0;

        // Calculate the total sum of nums and store it in right_sum
        for (int i = 0; i < nums.size(); i++) {
            right_sum += nums[i];
        }

        // Iterate over nums, adding each element to the left_sum and subtracting it from the right_sum
        for (int i = 0; i < nums.size() - 1; i++) {
            left_sum += nums[i]; // Add nums[i] to the left sum
            right_sum -= nums[i]; // Subtract nums[i] from the right sum

            // Check if the left_sum is greater than or equal to the right_sum
            // If it is, increase the valid_split count by 1
            if (left_sum >= right_sum) {
                valid_split++;
            }
        }

        return valid_split;
    }
};
```

The code calculates the number of valid splits in the given `nums` vector. A valid split is defined as a partition of the array into three non-empty contiguous subarrays, such that the sum of elements in the left subarray is greater than or equal to the sum of elements in the middle and right subarrays.

The approach used in the code is as follows:
1. Iterate over the `nums` vector and calculate the total sum of all elements, storing it in `right_sum`.
2. Iterate over the `nums` vector again, excluding the last element, and perform the following steps:
   - Add the current element to `left_sum`, representing the sum of elements in the left subarray.
   - Subtract the current element from `right_sum`, representing the sum of elements in the right subarray.
   - Check if `left_sum` is greater than or equal to `right_sum`. If it is, increment the `valid_split` count by 1.
3. Return the `valid_split` count.

This implementation utilizes the prefix sum technique, which allows for efficient calculation of sums of subarrays by storing cumulative sums in additional variables (`left_sum` and `right_sum`). By subtracting the current element from the total sum (`right_sum`) in each iteration, the remaining sum represents the sum of elements in the right subarray.

Note: The code assumes that the `vector` header is included and the `std` namespace is used.





BIT MANIPULATION


https://leetcode.com/problems/sum-of-two-integers/discuss/84278/A-summary%3A-how-to-use-bit-manipulation






1.XOR = x^y  
2. right shift me bit hatate hain 

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
};

isme 1 bit right wala hatate jate hain 
agar 2 likha rahta hai to 2 bit hatate hain 
eg:
n= 010011
n >>= 1       
ans => 01001

n >>= 2
ans => 0100  

3.
Tip: Always remember that bit manipulation techniques are usually based on observations from multiple examples
Lets take some good examples :
number->binary form
3->0000 0011
4->0000 0100
5->0000 0101
6->0000 0110
7->0000 0111
8->0000 1000

The observation we can conclude is that the number which is a power of two has always compulsorily 1 true bit.
Now consider :-
bit representation of 7  -> 0111
bit representation of 8  -> 1000
bitwise AND of 7 and 8 -> 0000
we are gonna use this property for for all numbers which are powers of two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return ((n&(n-1))==0);
    }
};











Heap

Heap:
A heap is a complete binary tree that satisfies the heap property. In a max heap, for every node, the value of that node is greater than or equal to the values of its children. In a min heap, for every node, the value of that node is less than or equal to the values of its children.


Priority Queue:
A priority queue is an abstract data type that is similar to a queue, but each element has a priority associated with it. Elements with higher priority are dequeued before elements with lower priority. The priority queue can be implemented using a heap data structure.


Code in C++:


1. Max Heap:
```cpp
priority_queue<int> pq;
```
This code creates a max heap priority queue of integers.


2. Min Heap:
```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```
This code creates a min heap priority queue of integers. The `greater<int>` is a comparator that ensures the minimum element is always on top.


3. Min Heap with Pair:
```cpp
#define pii pair<int, int>
priority_queue<pii, vector<pii>, greater<pii>> pq;
```
This code creates a min heap priority queue of pairs of integers. The pairs are compared based on their first element, and if the first elements are equal, the second element is compared.


4. Priority Queue with Custom Comparator:
```cpp
class cmp {
public:
    bool operator()(pair<int, string> a, pair<int, string> b) const {
        if (a.first < b.first) return true;
        else if (a.first == b.first && a.second > b.second) return true;
        return false;
    }
};


priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;
```
This code creates a priority queue of pairs of integers and strings. The pairs are compared based on their first element. If the first elements are equal, the pairs are further compared based on the lexicographical order of the second element (string).


Explanation:
The code defines a custom comparator class `cmp` that overloads the `()` operator. The `operator()` compares two pairs based on the specified conditions and returns `true` if the first pair should be placed before the second pair in the priority queue.


The priority queue `pq` is created with pairs of integers and strings as elements, using the custom comparator `cmp`. This priority queue will prioritize the pairs based on the custom comparison logic defined in `cmp`.


Overall, these examples demonstrate how to create different types of heaps and priority queues using the `priority_queue` container in C++.






SEGMENT TREE



A Recursive approach to Segment Trees, Range Sum Queries & Lazy Propagation




Disjoint Set

Disjoint Set Union (DSU)/Union-Find - A Complete Guide - LeetCode Discuss

Math
GCD
GCD will give the maximum number which can divide all the numbers in the array.
Inbuilt Function for GCD 
__gcd(a, b);


a-integer
b-integer



Sure! Here's an explanation with code in C++ to find the greatest common divisor (GCD) of numbers in an array:

```cpp
#include <iostream>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int findGCD(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}

int main() {
    int arr[] = { 12, 24, 36, 48, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int gcdResult = findGCD(arr, n);

    std::cout << "GCD of the array is: " << gcdResult << std::endl;

    return 0;
}
```

Explanation:
1. The `gcd` function is implemented to calculate the GCD of two numbers `a` and `b` using the Euclidean algorithm recursively.
2. The `findGCD` function takes an array `arr` and its size `n` as input. It initializes the `result` variable with the first element of the array.
3. It iterates over the array starting from the second element and calls the `gcd` function to calculate the GCD of the `result` and the current element of the array. The result is stored back in the `result` variable.
4. After iterating through all the elements, the `result` variable contains the GCD of all the numbers in the array.
5. In the `main` function, an example array `arr` is defined, and its size `n` is calculated using the `sizeof` operator.
6. The `findGCD` function is called with the array and its size, and the result is stored in the `gcdResult` variable.
7. Finally, the GCD of the array is printed to the console.

Note: The code uses the `__gcd` function, which is an inbuilt function in C++, to calculate the GCD. This function takes two integers as arguments and returns their GCD.



Greedy

Extra

In C++, both "int" and "unsigned int" are data types used to represent whole numbers. The main difference between them lies in their ranges and how they handle negative values.

1. "int":
   - The "int" data type is a signed integer type, which means it can represent both positive and negative numbers.
   - It typically uses 32 bits (4 bytes) of memory on most systems.
   - The range of "int" is from -2,147,483,648 to 2,147,483,647.
   - The memory allocated for an "int" type can store both positive and negative values.

2. "unsigned int":
   - The "unsigned int" data type is an unsigned integer type, which means it can only represent non-negative numbers (zero and positive numbers).
   - It also typically uses 32 bits (4 bytes) of memory on most systems.
   - The range of "unsigned int" is from 0 to 4,294,967,295.
   - The memory allocated for an "unsigned int" type is used to store positive values only.

Here's an example code snippet to illustrate the difference between "int" and "unsigned int":

```cpp
#include <iostream>

int main() {
    int x = -10;
    unsigned int y = 10;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}
```

In this code, we declare an "int" variable named "x" and initialize it with the value -10. We also declare an "unsigned int" variable named "y" and initialize it with the value 10. We then print the values of "x" and "y" using the `std::cout` statement.

Output:
```
x = -10
y = 10
```

As you can see, the "int" type can store negative values, while the "unsigned int" type can only store positive values.





ChatGPT Notes 

Graph


1.
In C++, a 

deque (double-ended queue) 
is a data structure that allows insertion and deletion of elements from both ends, i.e., the front and the back. It is implemented as a dynamic array-like container with efficient insertion and deletion at both ends.

To use a deque in C++, you need to include the `<deque>` header file. Here's an example code snippet that demonstrates the usage of deque:

```cpp
#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque; // Create an empty deque of integers

    // Inserting elements at the back of the deque
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_back(30);

    // Inserting elements at the front of the deque
    myDeque.push_front(5);
    myDeque.push_front(2);

    // Accessing elements
    std::cout << "Front element: " << myDeque.front() << std::endl; // Output: 2
    std::cout << "Back element: " << myDeque.back() << std::endl;   // Output: 30

    // Removing elements from the front and back of the deque
    myDeque.pop_front();
    myDeque.pop_back();

    // Printing all elements of the deque
    std::cout << "Deque elements: ";
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl; // Output: 5 10 20

    return 0;
}
```

In the above code, we create a deque named `myDeque` using the `std::deque<int>` syntax. We then perform various operations on the deque:

- We insert elements using the `push_back()` function to add elements at the back, and `push_front()` function to add elements at the front.
- To access the front and back elements, we use the `front()` and `back()` functions, respectively.
- We remove elements from the front and back of the deque using the `pop_front()` and `pop_back()` functions.
- Finally, we print all the elements in the deque using a loop and the `begin()` and `end()` member functions.

The output of the code will be:
```
Front element: 2
Back element: 30
Deque elements: 5 10 20
```

Note that a deque allows efficient insertion and deletion at both ends, unlike a vector which has efficient insertion and deletion only at the end. However, deque operations at the front are generally slower compared to vector due to its internal implementation.


2.
In C++, a list is a container that allows for efficient insertion and removal of elements at any position. It is implemented as a doubly-linked list, where each element (node) contains a value and pointers to the previous and next elements in the list.

To use a list in C++, you need to include the `<list>` header file. Here's an example of how you can create and use a list in C++:

```cpp
#include <iostream>
#include <list>

int main() {
    std::list<int> myList; // Creating an empty list of integers

    // Inserting elements into the list
    myList.push_back(10); // Inserts 10 at the end
    myList.push_front(5); // Inserts 5 at the beginning
    myList.insert(std::next(myList.begin()), 7); // Inserts 7 after the first element

    // Accessing elements in the list
    std::cout << "First element: " << myList.front() << std::endl;
    std::cout << "Last element: " << myList.back() << std::endl;

    // Iterating over the list
    std::cout << "List elements: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Removing elements from the list
    myList.pop_front(); // Removes the first element
    myList.erase(std::next(myList.begin())); // Removes the second element

    // Checking if the list is empty
    if (myList.empty()) {
        std::cout << "The list is empty." << std::endl;
    } else {
        std::cout << "The list is not empty." << std::endl;
    }

    return 0;
}
```

In the above example, we include the necessary headers and create an empty list called `myList` to store integers. We then insert elements into the list using `push_back`, `push_front`, and `insert` functions.

To access elements in the list, we use `front()` to get the first element and `back()` to get the last element. Iterating over the list can be done using a range-based for loop.

We demonstrate the removal of elements using `pop_front()` and `erase()` functions. Finally, we check if the list is empty using the `empty()` function.

Note that since a list is implemented as a doubly-linked list, it allows for efficient insertion and removal of elements at any position, but accessing elements by index is not as efficient compared to a vector.
The output of the provided C++ code would be:

```
First element: 5
Last element: 10
List elements: 5 7 10
The list is not empty.
```

Explanation of the output:
- The first element in the list is 5, which is obtained using `myList.front()`.
- The last element in the list is 10, which is obtained using `myList.back()`.
- The list elements are printed using a range-based for loop, resulting in the output `5 7 10`.
- Since elements were added to the list, it is not empty, so the message "The list is not empty." is printed.



3.
Majority Element - LeetCode
Majority Element II - LeetCode

https://www.geeksforgeeks.org/boyer-moore-majority-voting-algorithm/


The Boyer-Moore voting algorithm is an efficient algorithm used to find the majority element in an array. It determines whether an element appears more than half the size of the array. Below is an implementation of the Boyer-Moore voting algorithm in C++:

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int cnt = 0;
        int ans=0;

        for(int i = 0; i < nums.size(); i++){
            if(cnt == 0){
                ans = nums[i];
            }
            if(nums[i] == ans){
                cnt++;
            }
            else{
                cnt--;
            }
           
        }

        return ans;
// time complexity: O(n)
// space complexity: O(1)
    }
};



4. Erase function in Map
In C++, the `erase` function is a member function of the `std::map` container, and it allows you to remove elements from the map based on their keys. However, its important to note that the `erase` function does not work in the same way for every map in C++. The behavior of the `erase` function depends on the type of map container you are using.

1. `std::map` and `std::multimap`:
   The `erase` function in `std::map` and `std::multimap` takes either a single iterator or a range of iterators specifying the elements to be removed. It erases the elements from the map that match the given key or key range. The function has different variations and overloads depending on the specific use case.

2. `std::unordered_map` and `std::unordered_multimap`:
   The `erase` function in `std::unordered_map` and `std::unordered_multimap` also removes elements from the map, but it takes a key as an argument instead of an iterator. It erases the element with the specified key from the map. If the map contains multiple elements with the same key (in the case of `std::unordered_multimap`), all those elements will be removed.

Here are some examples to demonstrate the usage of `erase`:

1. `std::map` example:
   ```cpp
   std::map<int, std::string> myMap;
   myMap.insert({1, "one"});
   myMap.insert({2, "two"});
   myMap.insert({3, "three"});

   // Erase a single element
   myMap.erase(2); // Removes the element with key 2

   // Erase a range of elements
   auto it = myMap.begin();
   auto end = myMap.find(3);
   myMap.erase(it, end); // Removes elements from [begin, end)

   ```

2. `std::unordered_map` example:
   ```cpp
   std::unordered_map<int, std::string> myUnorderedMap;
   myUnorderedMap.insert({1, "one"});
   myUnorderedMap.insert({2, "two"});
   myUnorderedMap.insert({3, "three"});

   // Erase a single element
   myUnorderedMap.erase(2); // Removes the element with key 2

   ```

Remember to include the appropriate header file `<map>` or `<unordered_map>` to use these map containers and their member functions.


Topological sort
Topological sort is a linear ordering of the vertices of a directed acyclic graph (DAG) such that for every directed edge (u, v), vertex u comes before vertex v in the ordering. In other words, it arranges the vertices in a way that all the dependencies of a vertex are placed before it.

Lets say we have a DAG represented using adjacency lists. Here's an example:

```
      1     2
     / \   /
    v   v v
    3-->4
```

In this example, vertex 3 has edges to vertices 1 and 4, vertex 1 has an edge to vertex 4, and vertex 2 has an edge to vertex 4.

To perform a topological sort, we can use depth-first search (DFS) on the graph. The algorithm works as follows:

1. Initialize an empty stack and a visited array to keep track of visited vertices.
2. For each unvisited vertex v, call a helper function `topologicalSortUtil(v)` that explores all its adjacent vertices recursively.
3. In the `topologicalSortUtil(v)` function, mark the current vertex v as visited.
4. Recursively call `topologicalSortUtil` for all unvisited adjacent vertices of v.
5. Push vertex v to the stack.
6. Repeat steps 2-5 for all unvisited vertices.

Finally, pop the vertices from the stack to get the topological sort order.

Here's the C++ code for topological sort:

```cpp
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Depth-first search function
void DFS(int v, vector<bool>& visited, vector<vector<int>>& adjList, stack<int>& topoStack) {
    visited[v] = true;
    
    for (int u : adjList[v]) {
        if (!visited[u]) {
            DFS(u, visited, adjList, topoStack);
        }
    }
    
    topoStack.push(v);
}

// Topological sort function
void topologicalSort(vector<vector<int>>& adjList, int numVertices) {
    stack<int> topoStack;
    vector<bool> visited(numVertices, false);
    
    for (int v = 0; v < numVertices; ++v) {
        if (!visited[v]) {
            DFS(v, visited, adjList, topoStack);
        }
    }
    
    // Print the topological sort order
    while (!topoStack.empty()) {
        cout << topoStack.top() << " ";
        topoStack.pop();
    }
}

int main() {
    int numVertices = 5;
    vector<vector<int>> adjList(numVertices);
    
    // Add edges to the adjacency list
    adjList[3].push_back(1);
    adjList[3].push_back(4);
    adjList[1].push_back(4);
    adjList[2].push_back(4);
    
    cout << "Topological sort order: ";
    topologicalSort(adjList, numVertices);
    
    return 0;
}
```

Output:
```
Topological sort order: 3 2 1 4
```

In this example, the topological sort order is 3, 2, 1, 4. Vertex 3 comes first because it has no dependencies, followed by vertex 2, then vertex 1, and finally vertex 4.

Note that the code assumes the vertices are labeled from 0 to (numVertices - 1), and the adjacency list representation is used. You can modify the code according to your specific needs and graph representation.



Time Complexity
Here's a list of common algorithms along with their time complexities:

Note: The amortized time complexity refers to the average time complexity per operation, considering a series of operations. While individual operations like push, pop, and peek can have a worst-case time complexity of O(N) due to transferring elements between the stacks, the amortized time complexity ensures that on average, the time complexity is O(1) per operation.


1. Constant Time Complexity (O(1)): These algorithms have a constant running time and do not depend on the size of the input.
   - Examples: Accessing an element in an array, checking if a number is even or odd.

2. Logarithmic Time Complexity (O(log n)): These algorithms have a running time that increases logarithmically with the size of the input.
   - Examples: Binary search in a sorted array, searching elements in a balanced binary search tree.

3. Linear Time Complexity (O(n)): These algorithms have a running time that grows linearly with the size of the input.
   - Examples: Linear search in an unsorted array, traversing through a linked list.

4. Linearithmic Time Complexity (O(n log n)): These algorithms have a running time that is a product of the input size and its logarithm.
   - Examples: Sorting algorithms like Merge Sort, Heap Sort, Quick Sort.

5. Quadratic Time Complexity (O(n^2)): These algorithms have a running time that grows quadratically with the size of the input.
   - Examples: Bubble Sort, Selection Sort, Insertion Sort.

6. Cubic Time Complexity (O(n^3)): These algorithms have a running time that grows cubically with the size of the input.
   - Examples: Algorithms involving three nested loops.

7. Exponential Time Complexity (O(2^n)): These algorithms have a running time that grows exponentially with the size of the input.
   - Examples: Brute-force algorithms for problems like the Traveling Salesman Problem.

8. Factorial Time Complexity (O(n!)): These algorithms have a running time that grows factorial with the size of the input.
   - Examples: Brute-force algorithms for problems with a permutation of inputs.

Its worth noting that this list only includes the most commonly encountered time complexities, and there are additional complexities that exist in specific cases.






Recursion

Recursion is a powerful programming concept that involves a function calling itself to solve a problem. It allows you to solve complex problems by breaking them down into smaller, more manageable subproblems.

Here's an explanation of recursion along with examples and C++ code:

1. Basic Concept:
Recursion follows the idea of dividing a problem into smaller subproblems, solving them, and combining their results to obtain the final solution. In a recursive function, the function calls itself with different arguments until it reaches a base case, which is a condition where the function stops calling itself and returns a result. The base case is crucial to avoid infinite recursion.

2. Structure of a Recursive Function:
A recursive function generally consists of two parts: the base case and the recursive case.

- Base Case: It defines the condition(s) where the function stops calling itself and returns a specific value or performs a specific action. The base case is necessary to prevent infinite recursion.

- Recursive Case: It defines the condition(s) where the function calls itself with modified arguments, moving closer towards the base case.

3. Example 1: Calculating Factorial:
Lets start with a classic example of calculating the factorial of a number using recursion.

```cpp
#include <iostream>

int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int number = 5;
    int result = factorial(number);
    std::cout << "Factorial of " << number << " is " << result << std::endl;
    return 0;
}
```

Output:
```
Factorial of 5 is 120
```

In the above example, the `factorial()` function calculates the factorial of a number `n`. If `n` is 0 or 1, it returns 1 as the base case. Otherwise, it calls itself with `n - 1` as the argument, and the result is multiplied by `n` to get the factorial.

4. Example 2: Computing Fibonacci Sequence:
Lets explore another example of generating the Fibonacci sequence using recursion.

```cpp
#include <iostream>

int fibonacci(int n) {
    // Base case: Fibonacci of 0 is 0, Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    
    // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number = 7;
    int result = fibonacci(number);
    std::cout << "Fibonacci sequence at position " << number << " is " << result << std::endl;
    return 0;
}
```

Output:
```
Fibonacci sequence at position 7 is 13
```

In the above example, the `fibonacci()` function calculates the Fibonacci number at position `n`. If `n` is 0, it returns 0 as the base case. If `n` is 1, it returns 1 as another base case. Otherwise, it calls itself with `n - 1` and `n - 2` as arguments, and their results are summed up to get the Fibonacci number.

Remember to be cautious when using recursion, as it can consume a lot of memory and time if not designed properly. Its crucial to define

 the base case correctly to ensure termination.


Backtracking


Backtracking is a problem-solving algorithmic technique used to find all possible solutions to a problem by exploring all potential candidates incrementally. It is commonly used for solving problems where the solution is a sequence of decisions, and the goal is to find all possible valid sequences.

The backtracking algorithm works by incrementally building a potential solution and then "backtracking" when it determines that the current candidate cannot be extended further to a valid solution. It explores all possibilities by trying out different choices and undoing the choices that lead to dead ends.

Here's a step-by-step explanation of the backtracking process:

1. Define the problem space: Clearly define the problem and the constraints involved. Determine the decision variables and their possible values.

2. Formulate the constraints: Determine the conditions that a valid solution must satisfy. These constraints will guide the search and help in pruning unnecessary branches.

3. Design the backtracking function: Create a recursive function that explores the solution space by making decisions incrementally.

4. Implement the backtracking function: Write code for the recursive function that considers a decision at each step and recursively explores further.

5. Implement the stopping conditions: Specify the conditions under which the backtracking function should stop and return a solution or backtrack.

6. Handle the choices and constraints: At each step of the backtracking function, make a choice from the available options and check if it satisfies the constraints. If it does, continue exploring recursively; otherwise, backtrack.

7. Backtrack: When the backtracking function reaches a dead end or fails to satisfy the constraints, undo the previous choice (backtrack) and try a different option.

8. Collect valid solutions: As the backtracking function explores the solution space, collect the valid solutions based on the stopping conditions.

Now, lets consider an example to demonstrate backtracking. Suppose we have to find all possible permutations of a given set of integers.

```cpp
#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<int>& nums, vector<int>& curr, vector<vector<int>>& result, vector<bool>& used) {
    if (curr.size() == nums.size()) {
        result.push_back(curr);  // Found a valid permutation
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) {
            continue;  // Skip already used numbers
        }

        curr.push_back(nums[i]);  // Make a choice
        used[i] = true;

        backtrack(nums, curr, result, used);  // Explore further

        curr.pop_back();  // Undo the choice
        used[i] = false;
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> curr;
    vector<bool> used(nums.size(), false);
    backtrack(nums, curr, result, used);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permute(nums);

    cout << "Permutations:" << endl;
    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
```

In this example, the `permute` function takes a vector of integers and returns all possible permutations. The `backtrack` function is responsible for the recursive exploration of the solution space. We use a vector `curr` to keep track of the current permutation being built, and `used` to mark the numbers that have already been used.

The `backtrack` function follows the steps mentioned earlier. It checks if the current permutation (`curr`) has reached


Rabin-Karp algorithm

The Rabin-Karp algorithm is a string searching algorithm that finds the occurrence of a pattern within a larger text by using hashing. The algorithm has an average-case time complexity of O(n+m), where n is the length of the text and m is the length of the pattern to be found.

Here's a step-by-step explanation of the Rabin-Karp algorithm:

1. Calculate the hash value of the pattern and the first window of the text with the same length as the pattern.
2. Slide the window over the text one character at a time and recalculate the hash value of the window at each step.
3. Compare the hash value of the current window with the hash value of the pattern. If they match, perform a full string comparison to confirm the match.
4. If the hash values dont match, move the window by one position and recalculate the hash value for the new window.
5. Repeat steps 3 and 4 until a match is found or the window reaches the end of the text.

Here's an example to illustrate the Rabin-Karp algorithm:

Text: "ABABCABABCDABCABCD"
Pattern: "ABCD"

Step 1:
Calculate the hash value of the pattern "ABCD": hash_pattern = hash("ABCD") = 6567.
Calculate the hash value of the first window "ABAB": hash_window = hash("ABAB") = 6525.

Step 2:
Compare hash_pattern with hash_window. They dont match.

Step 3:
Move the window by one character to the right: "BABC".
Recalculate the hash value of the window "BABC": hash_window = hash("BABC") = 6608.

Step 4:
Compare hash_pattern with hash_window. They dont match.

Step 5:
Move the window by one character to the right: "ABCA".
Recalculate the hash value of the window "ABCA": hash_window = hash("ABCA") = 6600.

Step 6:
Compare hash_pattern with hash_window. They dont match.

Step 7:
Move the window by one character to the right: "BCAB".
Recalculate the hash value of the window "BCAB": hash_window = hash("BCAB") = 6558.

Step 8:
Compare hash_pattern with hash_window. They dont match.

Step 9:
Move the window by one character to the right: "CABC".
Recalculate the hash value of the window "CABC": hash_window = hash("CABC") = 6542.

Step 10:
Compare hash_pattern with hash_window. They dont match.

Step 11:
Move the window by one character to the right: "ABCD".
Recalculate the hash value of the window "ABCD": hash_window = hash("ABCD") = 6567.

Step 12:
Compare hash_pattern with hash_window. They match.
Perform a full string comparison to confirm the match.

The Rabin-Karp algorithm finds a match at position 11 in the text.

Here's an example implementation of the Rabin-Karp algorithm in C++:

```cpp
#include <iostream>
#include <string>
using namespace std;

// Function to search for a pattern in a text using Rabin-Karp algorithm
void searchRabinKarp(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    int prime = 101; // A prime number to calculate the hash value
    int d = 256; // Number of possible characters (ASCII)

    int patternHash = 0; // Hash value of the

 pattern
    int textHash = 0; // Hash value of the current window in the text

    int h = 1; // h = (d^(m-1)) % prime

    // Calculate the value of h
    for (int i = 0; i < m - 1; i++)
        h = (h * d) % prime;

    // Calculate the initial hash values of the pattern and the first window
    for (int i = 0; i < m; i++) {
        patternHash = (d * patternHash + pattern[i]) % prime;
        textHash = (d * textHash + text[i]) % prime;
    }

    // Slide the window over the text one character at a time
    for (int i = 0; i <= n - m; i++) {
        // Compare the hash values of the current window and the pattern
        if (patternHash == textHash) {
            int j;
            // Perform a full string comparison to confirm the match
            for (j = 0; j < m; j++) {
                if (text[i + j] != pattern[j])
                    break;
            }
            if (j == m)
                cout << "Pattern found at position " << i << endl;
        }

        // Calculate the hash value of the next window in the text
        if (i < n - m) {
            textHash = (d * (textHash - text[i] * h) + text[i + m]) % prime;
            if (textHash < 0)
                textHash += prime;
        }
    }
}

int main() {
    string text = "ABABCABABCDABCABCD";
    string pattern = "ABCD";
    searchRabinKarp(text, pattern);

    return 0;
}
```

In this implementation, the `searchRabinKarp` function takes the text and pattern as input and searches for the pattern within the text using the Rabin-Karp algorithm. It calculates the hash values of the pattern and the first window, slides the window over the text, and compares the hash values to find matches. Finally, it performs a full string comparison to confirm the matches and prints the positions where the pattern is found in the text.

Note that this implementation assumes ASCII characters and uses a prime number (101) for hashing. Its important to choose an appropriate prime number based on the expected size of the text and pattern to minimize the chances of collisions.






Trie

A trie, also known as a prefix tree or digital tree, is a tree-like data structure that is commonly used to efficiently store and retrieve strings. It provides an efficient way to search for words or prefixes within a large set of strings.

In a trie, each node represents a single character of a string. The root node represents an empty string, and each child node represents a character in the alphabet. The edges between the nodes represent the characters. By traversing the edges from the root to a particular node, we can reconstruct the string represented by that node.

Here's an example implementation of a trie in C++:

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isWord;

    TrieNode() {
        isWord = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = new TrieNode();
            }
            current = current->children[ch];
        }
        current->isWord = true;
    }

    bool search(string word) {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return current->isWord;
    }

    bool startsWith(string prefix) {
        TrieNode* current = root;
        for (char ch : prefix) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return true;
    }
};

int main() {
    Trie trie;

    trie.insert("apple");
    trie.insert("banana");
    trie.insert("orange");

    cout << trie.search("apple") << endl;   // Output: 1 (true)
    cout << trie.search("orange") << endl;  // Output: 1 (true)
    cout << trie.search("grape") << endl;   // Output: 0 (false)

    cout << trie.startsWith("app") << endl;    // Output: 1 (true)
    cout << trie.startsWith("ban") << endl;    // Output: 1 (true)
    cout << trie.startsWith("watermelon") << endl;  // Output: 0 (false)

    return 0;
}
```

In this example, we define two classes: `TrieNode` and `Trie`. The `TrieNode` class represents a single node in the trie, and it contains an unordered map of child nodes, representing the possible characters that can follow the current node. The `isWord` variable indicates whether the node represents the end of a valid word.

The `Trie` class provides methods to insert a word into the trie (`insert`), search for a specific word (`search`), and check if a given prefix exists in the trie (`startsWith`).

In the `main` function, we create a `Trie` object and insert some words into it. We then perform various search operations to demonstrate the functionality of the trie.

Note that this is a basic implementation, and there are various optimizations that can be applied to improve the performance of a trie, such as compressing nodes with a single child or using a compressed trie structure.




Sure! Here's a visual representation of how the trie data structure works using the example words "apple", "banana", and "orange":





In this diagram, each node represents a character in the words. The edges between nodes represent the characters. The root node represents an empty string, and its children nodes represent the first characters of the words.

The diagram shows that "apple" and "banana" have common prefixes, "a" and "ap," which are shared among the nodes. The final character of each word ("e" in "apple" and "a" in "banana") is marked as the end of a word.

The word "orange" has a different path from the root, and its nodes are marked accordingly.

This visualization demonstrates how the trie efficiently stores and retrieves strings. By following the edges and traversing the nodes, we can determine if a word exists in the trie or if a prefix matches any words in the trie.










Sorting Algorithms

Sure! Here are several sorting algorithms along with their details and C++ code implementations:

1. Bubble Sort:
   - Description: Bubble Sort repeatedly swaps adjacent elements if they are in the wrong order until the entire array is sorted.
   - Time Complexity: O(n^2)
   - Code:

```cpp
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

2. Selection Sort:
   - Description: Selection Sort selects the minimum element from the unsorted part and places it at the beginning of the array.
   - Time Complexity: O(n^2)
   - Code:

```cpp
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
```

3. Insertion Sort:
   - Description: Insertion Sort builds the final sorted array one element at a time by inserting each unsorted element into its correct position.
   - Time Complexity: O(n^2)
   - Code:

```cpp
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
```

4. Merge Sort:
   - Description: Merge Sort divides the array into two halves, sorts them separately, and then merges the sorted halves.
   - Time Complexity: O(n log n)
   - Code:

```cpp
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {


        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}
```

5. Quick Sort:
   - Description: Quick Sort selects a pivot element and partitions the array such that all elements less than the pivot come before it and all elements greater than the pivot come after it. It then recursively sorts the sub-arrays.
   - Time Complexity: O(n log n) (average case), O(n^2) (worst case)
   - Code:

```cpp
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i + 1] and arr[high] (pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

These are just a few examples of sorting algorithms. There are many more sorting algorithms available, each with its own advantages and use cases.

Certainly! Here are a few more sorting algorithms along with their details and C++ code implementations:

6. Heap Sort:
   - Description: Heap Sort uses the concept of a binary heap to sort elements. It first builds a max-heap (or min-heap) from the array and repeatedly extracts the maximum (or minimum) element from it, resulting in a sorted array.
   - Time Complexity: O(n log n)
   - Code:

```cpp
void heapify(int arr[], int size, int root) {
    int largest = root;  // Initialize largest as root
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    // If left child is larger than root
    if (left < size && arr[left] > arr[largest]) {
        largest = left;
    }

    // If right child is larger than largest so far
    if (right < size && arr[right] > arr[largest]) {
        largest = right;
    }

    // If largest is not root
    if (largest != root) {
        // Swap arr[root] and arr[largest]
        int temp = arr[root];
        arr[root] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size) {
    // Build a max-heap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }

    // Extract elements from the heap one by one
    for (int i = size - 1; i >= 0; i--) {
        // Swap root (maximum element) with the last element
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Heapify the reduced heap
        heapify(arr, i, 0);
    }
}
```

7. Counting Sort:
   - Description: Counting Sort assumes that each element in the array has a key value that belongs to a known range. It counts the occurrences of each key value and uses this information to place the elements in sorted order.
   - Time Complexity: O(n + k), where n is the number of elements and k is the range of input
   - Code:

```cpp
void countingSort(int arr[], int size) {
    // Find the maximum element to determine the range
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Create a count array to store the count of each element
    int count[max + 1] = {0};

    // Store the count of each element
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Modify the count array to store the actual position of each element
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // Build the sorted array
    int output[size];
    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted array back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];


    }
}
```

8. Radix Sort:
   - Description: Radix Sort sorts the elements by processing the digits of the numbers. It sorts the numbers from least significant digit (LSD) to the most significant digit (MSD) using a stable sorting algorithm such as Counting Sort or Bucket Sort.
   - Time Complexity: O(d * (n + k)), where d is the number of digits, n is the number of elements, and k is the range of input
   - Code:

```cpp
void countingSortByDigit(int arr[], int size, int exp) {
    int output[size];
    int count[10] = {0};

    // Store count of occurrences in count[]
    for (int i = 0; i < size; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Modify the count array to store the actual position of each element
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the sorted array
    for (int i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the sorted array back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int size) {
    // Find the maximum number to determine the number of digits
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Perform counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSortByDigit(arr, size, exp);
    }
}
```

These are a few more examples of sorting algorithms. There are many other sorting algorithms with different characteristics and complexities.




BIT MANIPULATION
                                                                                

Bit manipulation is the process of manipulating individual bits within binary data at the bit level. It is a powerful technique used in computer programming for various purposes, including optimizing code, working with hardware registers, and solving specific problems efficiently. In this response, I will provide you with an overview of bit manipulation, explain common operations, and provide examples with C++ code.

In computer systems, data is typically stored and represented in binary form, consisting of 0s and 1s. Each binary digit is called a bit, and it is the smallest unit of information in a computer. A bit can represent two states: 0 or 1. These binary values can be manipulated at the bit level using bitwise operators.

C++ provides several bitwise operators for performing bit manipulation:

1. Bitwise AND (&): It performs the logical AND operation on each pair of corresponding bits in two numbers. The result is 1 only if both bits are 1; otherwise, it is 0.

```cpp
int result = a & b;  // Performs bitwise AND of a and b
```

2. Bitwise OR (|): It performs the logical OR operation on each pair of corresponding bits in two numbers. The result is 1 if at least one bit is 1; otherwise, it is 0.

```cpp
int result = a | b;  // Performs bitwise OR of a and b
```

3. Bitwise XOR (^): It performs the logical XOR (exclusive OR) operation on each pair of corresponding bits in two numbers. The result is 1 if the bits are different; otherwise, it is 0.
bitwise XOR operation (^). The XOR operator returns 1 if the corresponding bits between two numbers are different, and 0 if they are the same.

```cpp
int result = a ^ b;  // Performs bitwise XOR of a and b
```

4. Bitwise NOT (~): It performs the logical NOT operation on each bit in a number, flipping the bits. The result is the one's complement of the number.

```cpp
int result = ~a;  // Performs bitwise NOT of a
```

5. Left shift (<<): It shifts the bits of a number to the left by a specified number of positions. This operation effectively multiplies the number by 2 raised to the power of the shift amount.

```cpp
int result = a << n;  // Shifts the bits of a to the left by n positions
```

6. Right shift (>>): It shifts the bits of a number to the right by a specified number of positions. This operation effectively divides the number by 2 raised to the power of the shift amount.

```cpp
int result = a >> n;  // Shifts the bits of a to the right by n positions
```

Now, lets look at some examples to illustrate these operations:

**Example 1: Bitwise AND**

```cpp
int a = 12;  // Binary: 1100
int b = 6;   // Binary: 0110

int result = a & b;  // Bitwise AND
// Binary result: 0100 (decimal: 4)
```

**Example 2: Bitwise OR**

```cpp
int a = 12;  // Binary: 1100
int b = 6;   // Binary: 0110

int result = a | b;  // Bitwise OR
// Binary result: 1110 (decimal: 14)
```

**Example 3: Bitwise XOR**

```cpp
int a = 12;  // Binary: 1100
int b = 6;   // Binary: 0110

int result = a ^ b;  // Bitwise XOR
// Binary result: 1010 (decimal: 10)
```

**Example 4

: Bitwise NOT**

```cpp
int a = 12;  // Binary: 1100

int result = ~a;  // Bitwise NOT
// Binary result: 0011 (decimal: -13)
```

**Example 5: Left Shift**

```cpp
int a = 5;  // Binary: 0101

int result = a << 2;  // Left shift by 2 positions
// Binary result: 10100 (decimal: 20)
```

**Example 6: Right Shift**

```cpp
int a = 20;  // Binary: 10100

int result = a >> 2;  // Right shift by 2 positions
// Binary result: 00101 (decimal: 5)
```

These are just a few examples of how bit manipulation can be used in C++. Bit manipulation is particularly useful in scenarios where bitwise operations can optimize code, implement algorithms, or work with low-level representations of data.

Remember to use bit manipulation techniques judiciously, as they can make your code less readable and more error-prone if used improperly.



Greedy

It seems like you are referring to "greedy" in the context of data structures and algorithms (DSA). In computer science, "greedy" is a term used to describe a general problem-solving approach. A greedy algorithm makes locally optimal choices at each step with the hope that those choices will lead to a globally optimal solution.

Here are some key details about greedy algorithms in DSA:

1. Definition: Greedy algorithms make the best choice at each step without considering the overall future consequences. It focuses on the immediate benefit rather than looking ahead.

2. Characteristic: Greedy algorithms are often easy to understand and implement compared to other complex algorithms. However, they may not always provide the most optimal solution.

3. Approach: The typical approach of a greedy algorithm involves the following steps:
   a. Define the problem and determine the objective to be optimized.
   b. Identify the choices available at each step.
   c. Determine the criteria for making a choice.
   d. Develop a greedy strategy to make the choice that appears best at each step.
   e. Prove that the greedy choice is safe and will lead to an optimal solution.
   f. Iterate the steps until the entire problem is solved.

4. Examples: Greedy algorithms are used in various well-known problems, such as:
   - The Knapsack problem: Selecting items with maximum value and fitting them into a knapsack with limited capacity.
   - Huffman coding: Constructing an optimal prefix code for data compression.
   - Minimum Spanning Tree: Finding the minimum-cost tree that spans all vertices in a graph.
   - Dijkstra's algorithm: Finding the shortest path from a source vertex to all other vertices in a graph.

5. Properties: Greedy algorithms may exhibit the following properties:
   - Greedy-choice property: A globally optimal solution can be arrived at by selecting a locally optimal choice.
   - Optimal substructure: An optimal solution to a problem contains optimal solutions to its subproblems.

6. Trade-offs: Greedy algorithms often provide efficient solutions, but they may not always produce the best possible solution. In some cases, a more sophisticated algorithm, such as dynamic programming, may be required to find the optimal solution.

7. Analysis: The correctness of a greedy algorithm is typically proven using mathematical induction or contradiction. The efficiency of greedy algorithms varies depending on the problem and its specific implementation.

Remember that not all problems can be solved optimally using a greedy approach. It is crucial to analyze the problems characteristics and constraints to determine if a greedy algorithm is appropriate or if an alternative approach should be considered.








KMP Algorithm

The Knuth-Morris-Pratt (KMP) algorithm is a string searching algorithm that efficiently finds the occurrence of a pattern within a larger text. It uses the concept of the Longest Proper Prefix which is also a Proper Suffix (LPS) to optimize the matching process. The algorithm has a time complexity of O(n + m), where n is the length of the text and m is the length of the pattern.

The LPS (pi) array is a preprocessing step in the KMP algorithm. It calculates the longest proper prefix that is also a proper suffix for each prefix of the pattern. The LPS array helps in avoiding unnecessary comparisons by indicating the positions to which the algorithm can backtrack when a mismatch occurs.

Here's an explanation of the KMP algorithm with the LPS array:

1. Calculate the LPS array for the pattern by iterating over the pattern and comparing prefixes with suffixes.
2. Initialize two pointers, `i` for the text and `j` for the pattern, both starting from 0.
3. Compare the characters at `i` and `j`. If they match, increment both pointers (`i` and `j`) and continue the comparison.
4. If the characters dont match, use the LPS array to determine the next position of `j` to continue the comparison. Move `j` to the value at LPS[j-1] and keep `i` unchanged.
5. Repeat steps 3 and 4 until either the pattern is completely matched (i.e., `j` reaches the end of the pattern) or the text is fully traversed (i.e., `i` reaches the end of the text).
6. If the pattern is matched completely, a match is found at position `i - j` in the text.

Here's an example to illustrate the KMP algorithm with the LPS array:

Text: "ABABDABACDABABCABAB"
Pattern: "ABABCABAB"

Step 1:
Calculate the LPS array for the pattern "ABABCABAB":
LPS: [0, 0, 1, 2, 0, 1, 2, 3, 4, 5]

Step 2:
Initialize `i` and `j` to 0.

Step 3:
Compare text[i] = 'A' with pattern[j] = 'A'. They match. Increment both `i` and `j`.

Step 4:
Compare text[i] = 'B' with pattern[j] = 'B'. They match. Increment both `i` and `j`.

Step 5:
Compare text[i] = 'A' with pattern[j] = 'A'. They match. Increment both `i` and `j`.

Step 6:
Compare text[i] = 'B' with pattern[j] = 'B'. They match. Increment both `i` and `j`.

Step 7:
Compare text[i] = 'D' with pattern[j] = 'C'. They dont match. Use the LPS array to determine the next position of `j`.
Move `j` to LPS[j-1] = LPS[7-1] = 3.

Step 8:
Compare text[i] = 'D' with pattern[j] = 'A'. They dont match. Use the LPS array again to determine the next position of `j`.
Move `j` to LPS[j-1] = LPS[3-1] = 2.

Step 9:
Compare text[i] = 'D' with pattern[j] = 'A'. They dont match. Use the LPS array to determine the next position of `j`.
Move `j`

 to LPS[j-1] = LPS[2-1] = 0.

Step 10:
Compare text[i] = 'D' with pattern[j] = 'A'. They dont match. Use the LPS array to determine the next position of `j`.
Move `j` to LPS[j-1] = LPS[0-1] = 0.

Step 11:
Compare text[i] = 'A' with pattern[j] = 'A'. They match. Increment both `i` and `j`.

Step 12:
Compare text[i] = 'B' with pattern[j] = 'B'. They match. Increment both `i` and `j`.

Step 13:
Compare text[i] = 'C' with pattern[j] = 'B'. They dont match. Use the LPS array to determine the next position of `j`.
Move `j` to LPS[j-1] = LPS[7-1] = 3.

Step 14:
Compare text[i] = 'D' with pattern[j] = 'A'. They dont match. Use the LPS array to determine the next position of `j`.
Move `j` to LPS[j-1] = LPS[3-1] = 2.

Step 15:
Compare text[i] = 'A' with pattern[j] = 'A'. They match. Increment both `i` and `j`.

The KMP algorithm finds a match at position 10 in the text.

Here's an example implementation of the KMP algorithm in C++:

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the LPS array for the pattern
vector<int> calculateLPS(string pattern) {
    int m = pattern.length();
    vector<int> lps(m, 0); // Initialize the LPS array with zeros

    int len = 0; // Length of the previous longest prefix suffix

    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// Function to search for a pattern in a text using KMP algorithm
void searchKMP(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    vector<int> lps = calculateLPS(pattern);

    int i = 0; // Pointer for the text
    int j = 0; // Pointer for the pattern

    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            cout << "Pattern found at position " << i - j << endl;
            j = lps[j - 1];
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    searchKMP(text, pattern);

    return 0;
}
```

In this implementation, the `calculateLPS` function calculates the LPS array for the given pattern. It iterates over the pattern, comparing prefixes with suffixes, and fills

 the LPS array accordingly.

The `searchKMP` function takes the text and pattern as input and searches for the pattern within the text using the KMP algorithm. It initializes pointers `i` and `j`, compares characters, and adjusts the pointers according to the LPS array when a mismatch occurs. If a complete match is found, it prints the position in the text where the pattern starts.

Note that in both the LPS array calculation and the search process, the indexing starts from 0.





Unicode characters



The line of code `unordered_map<wchar_t, int> mp1;` declares a variable named `mp1` of type `unordered_map`. In C++, `unordered_map` is a container class template that provides an associative array, which maps keys to values. It is part of the Standard Template Library (STL) and is defined in the `<unordered_map>` header.

In this particular case, the key type (`KeyType`) of the `unordered_map` is `wchar_t`, which is a wide character type used to represent Unicode characters. The value type (`ValueType`) is `int`, indicating that the mapped values will be of type `int`. So, this `unordered_map` is designed to store associations between `wchar_t` keys and integer values.

Here's a brief explanation of the components in the declaration:

- `unordered_map`: The class template representing the unordered map container.
- `<wchar_t, int>`: The template arguments that specify the key and value types for the `unordered_map`. In this case, `wchar_t` is the key type, and `int` is the value type.
- `mp1`: The name given to the `unordered_map` object.

After this declaration, `mp1` can be used to store key-value pairs where the keys are of type `wchar_t` and the values are of type `int`. The `unordered_map` provides efficient lookup and retrieval operations based on the keys, allowing you to store and access values associated with specific characters efficiently.


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<wchar_t, int> mp1;
        unordered_map<wchar_t, int> mp2;

        // Populate the frequency maps for string s and t
        for (wchar_t c : s) {
            mp1[c]++;
        }
        for (wchar_t c : t) {
            mp2[c]++;
        }

        // Check if the frequency maps are equal
        return mp1 == mp2;
    }
};




STL


STL stands for Standard Template Library. It is a powerful library in C++ that provides a collection of generic algorithms and data structures. The STL includes various containers, iterators, algorithms, and function objects that can be used to simplify and accelerate C++ programming.

Containers in the STL:
1. Vector:
 It is a dynamic array that can resize itself. It provides constant time access to elements and efficient insertion and deletion at the end.
Example:
```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec; // Declare a vector of integers
    vec.push_back(10); // Insert an element at the end
    vec.push_back(20);
    vec.push_back(30);

    for (int i : vec) {
        std::cout << i << " "; // Output: 10 20 30
    }

    return 0;
}
```

2. List:
 It is a doubly-linked list that allows efficient insertion and deletion at any position. Random access is not available in lists.
Example:
```cpp
#include <list>
#include <iostream>

int main() {
    std::list<int> myList; // Declare a list of integers
    myList.push_back(10); // Insert an element at the end
    myList.push_front(5); // Insert an element at the beginning

    for (int i : myList) {
        std::cout << i << " "; // Output: 5 10
    }

    return 0;
}
```

3. Map: 
It is an associative container that stores key-value pairs in a sorted manner based on the keys. Each key in the map is unique.
Example:
```cpp
#include <map>
#include <iostream>

int main() {
    std::map<std::string, int> myMap; // Declare a map with string keys and integer values
    myMap["Alice"] = 25; // Insert a key-value pair
    myMap["Bob"] = 30;

    std::cout << myMap["Alice"] << std::endl; // Output: 25

    return 0;
}
```

Algorithms in the STL:
1. Sorting: 
The STL provides efficient sorting algorithms like `std::sort` that can sort elements in a container in ascending order.
Example:
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {5, 2, 8, 1, 9};

    std::sort(vec.begin(), vec.end());

    for (int i : vec) {
        std::cout << i << " "; // Output: 1 2 5 8 9
    }

    return 0;
}
```

2. Searching: 
The STL provides algorithms like `std::find` that can search for a value in a container.
Example:
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {5, 2, 8, 1, 9};

    auto it = std::find(vec.begin(), vec.end(), 8);

    if (it != vec.end()) {
        std::cout << "Found at position " << std::distance(vec.begin(), it) << std::endl; // Output: Found at position 2
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
```

3. Binary Search: 
The STL provides algorithms like `std::binary_search` that can perform binary search on sorted containers.
Example:
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

int main

() {
    std::vector<int> vec = {1, 2, 5, 8, 9};

    bool found = std::binary_search(vec.begin(), vec.end(), 8);

    if (found) {
        std::cout << "Found" << std::endl; // Output: Found
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
```

The STL provides many more containers, algorithms, and utilities. It is highly recommended to explore the documentation and experiment with the different components to fully leverage the power of the STL in C++.

Certainly! Here are a few more components of the STL:

4. Iterators:
 Iterators are used to access and manipulate elements within containers. They provide a uniform interface to traverse the elements of a container.
Example:
```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using iterators to traverse the vector
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " "; // Output: 1 2 3 4 5
    }

    return 0;
}
```

5. Functors (Function Objects): 
Functors are objects that can be treated as functions. They are used with algorithms to define custom operations.
Example:
```cpp
#include <algorithm>
#include <iostream>
#include <vector>

struct Square {
    int operator()(int x) const {
        return x * x;
    }
};

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using a functor with the transform algorithm
    std::transform(vec.begin(), vec.end(), vec.begin(), Square());

    for (int i : vec) {
        std::cout << i << " "; // Output: 1 4 9 16 25
    }

    return 0;
}
```

6. Algorithms with Predicates: 
Predicates are functions or function objects that return a Boolean value. They are often used with algorithms for conditional operations.
Example:
```cpp
#include <algorithm>
#include <iostream>
#include <vector>

bool isEven(int x) {
    return x % 2 == 0;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using a predicate with the count_if algorithm
    int count = std::count_if(vec.begin(), vec.end(), isEven);

    std::cout << "Count of even numbers: " << count << std::endl; // Output: Count of even numbers: 2

    return 0;
}
```

These examples demonstrate a few additional components of the STL. The Standard Template Library is extensive and offers a wide range of containers, algorithms, and utilities to simplify C++ programming. Exploring the documentation and experimenting with different components will enhance your understanding and proficiency with the STL.


Certainly! Here are a few more components of the STL:

7. Sets:
 Sets are containers that store unique elements in a sorted order. They are implemented as binary search trees.
Example:
```cpp
#include <set>
#include <iostream>

int main() {
    std::set<int> mySet; // Declare a set of integers
    mySet.insert(10); // Insert elements into the set
    mySet.insert(5);
    mySet.insert(15);

    for (int i : mySet) {
        std::cout << i << " "; // Output: 5 10 15
    }

    return 0;
}
```

8. Queues:
 Queues are containers that follow the First-In-First-Out (FIFO) order. Elements are inserted at the back and removed from the front.
Example:
```cpp
#include <queue>
#include <iostream>

int main() {
    std::queue<int> myQueue; // Declare a queue of integers
    myQueue.push(10); // Insert elements into the queue
    myQueue.push(5);
    myQueue.push(15);

    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " "; // Output: 10 5 15
        myQueue.pop(); // Remove the front element
    }

    return 0;
}
```

9. Stacks: 
Stacks are containers that follow the Last-In-First-Out (LIFO) order. Elements are inserted and removed from the top.
Example:
```cpp
#include <stack>
#include <iostream>

int main() {
    std::stack<int> myStack; // Declare a stack of integers
    myStack.push(10); // Insert elements into the stack
    myStack.push(5);
    myStack.push(15);

    while (!myStack.empty()) {
        std::cout << myStack.top() << " "; // Output: 15 5 10
        myStack.pop(); // Remove the top element
    }

    return 0;
}
```

10. Iterators with Algorithms: 
STL algorithms can be used with iterators to perform operations on a range of elements.
Example:
```cpp
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using algorithms with iterators
    auto it = std::find(vec.begin(), vec.end(), 3);
    std::reverse(it, vec.end());

    for (int i : vec) {
        std::cout << i << " "; // Output: 1 2 5 4 3
    }

    return 0;
}
```

These examples illustrate additional components of the STL, such as sets, queues, stacks, and using iterators with algorithms. The STL offers a wide range of containers, algorithms, and utilities to facilitate efficient and reusable C++ programming.


Certainly! Here are a few more components of the STL:

11. Strings: 

The STL provides a string class, `std::string`, which offers a convenient and efficient way to manipulate strings in C++.
Example:
```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";

    std::cout << str << std::endl; // Output: Hello, World!

    str += " Welcome to C++";
    std::cout << str << std::endl; // Output: Hello, World! Welcome to C++

    std::cout << "Length: " << str.length() << std::endl; // Output: Length: 23

    return 0;
}
```

12. Deques: 

Deques, short for "double-ended queues," are similar to vectors but support efficient insertion and deletion at both ends.
Example:
```cpp
#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque; // Declare a deque of integers
    myDeque.push_back(10); // Insert elements at the back
    myDeque.push_front(5); // Insert elements at the front

    for (int i : myDeque) {
        std::cout << i << " "; // Output: 5 10
    }

    return 0;
}
```

13. Algorithms with Predicates: 

The STL algorithms can be used with custom predicates to perform specialized operations on containers.
Example:
```cpp
#include <algorithm>
#include <iostream>
#include <vector>

bool isEven(int x) {
    return x % 2 == 0;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using a predicate with the remove_if algorithm
    vec.erase(std::remove_if(vec.begin(), vec.end(), isEven), vec.end());

    for (int i : vec) {
        std::cout << i << " "; // Output: 1 3 5
    }

    return 0;
}
```

14. Unordered Containers: 

The STL provides unordered containers like `std::unordered_set` and `std::unordered_map` that use hash tables for fast access and insertion.
Example:
```cpp
#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> mySet; // Declare an unordered set of integers
    mySet.insert(10); // Insert elements into the set
    mySet.insert(5);
    mySet.insert(15);

    for (int i : mySet) {
        std::cout << i << " "; // Output: 5 10 15 (unordered)
    }

    return 0;
}
```








