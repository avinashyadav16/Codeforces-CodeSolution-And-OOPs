# Run Length Encoding

[![Run Length Encoding](https://img.shields.io/badge/-GeeksForGeeks-green?style=for-the-badge&logo=geeksforgeeks&logoColor=Gray)](https://www.geeksforgeeks.org/problems/run-length-encoding/1) ![Easy](https://img.shields.io/badge/-Easy-blue?style=for-the-badge&logoColor=blue)


<details>
Author: Avinash Yadav<br>
Date: 04-01-2024
</details><br>

Given a string, Your task is to  complete the function **encode** that returns the **run length encoded** string for the given string.
**eg** if the input string is **“wwwwaaadexxxxxx”**, then the function should return **“w4a3d1e1x6″**.
You are required to complete the function **encode** that takes only one argument the string which is to be encoded and returns the encoded string.

### Example 1:

```
Input:
str = aaaabbbccc
Output: a4b3c3

Explanation: a repeated 4 times
consecutively b 3 times, c also 3
times.
```

### Example 2:

```
Input:
str = abbbcdddd
Output: a1b3c1d4
```

### Your Task:
Complete the function **encode()** which takes a character array as a input parameter and returns the encoded string.

### Solution:

```python
def encode(arr):
    result = ""

    i = 0
    while i < len(arr):
        count = 1
        while i + 1 < len(arr) and arr[i] == arr[i + 1]:
            i += 1
            count += 1
        result += arr[i] + str(count)
        i += 1

    return result


# { Driver Code Starts
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        arr = input().strip()
        print(encode(arr))
# } Driver Code Ends
# } Driver Code Ends
```