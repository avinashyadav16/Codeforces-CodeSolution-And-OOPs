# Find Missing And Repeating

[![Find Missing And Repeating](https://img.shields.io/badge/-GeeksForGeeks-green?style=for-the-badge&logo=geeksforgeeks&logoColor=Gray)](https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1) ![Medium](https://img.shields.io/badge/-Medium-green?style=for-the-badge&logoColor=green)


<details>
Author: Avinash Yadav<br>
Date: 04-01-2024
</details><br>

Given an unsorted array **Arr** of size **N** of positive integers. **One number 'A'** from set {1, 2,....,N} is missing and **one number 'B'** occurs twice in array. Find these two numbers.

### Example 1:

```
Input:
N = 2
Arr[] = {2, 2}
Output: 2 1

Explanation: Repeating number is 2 and 
smallest positive missing number is 1.
```

### Example 2:

```
Input:
N = 3
Arr[] = {1, 3, 3}
Output: 3 2
Explanation: Repeating number is 3 and 
smallest positive missing number is 2.
```

### Your Task:
You don't need to read input or print anything. Your task is to complete the function **findTwoElement()** which takes the array of integers **arr** and **n** as parameters and returns an array of integers of size 2 denoting the answer ( The first index contains **B** and second index contains **A**.)

### Solution:

```python
class Solution:
    def findTwoElement(self, arr, n):
        result = [0, 0]
        seen = set()

        for num in arr:
            if num in seen:
                result[0] = num
            seen.add(num)

        for i in range(1, n + 1):
            if i not in seen:
                result[1] = i
                break

        return result


# { Driver Code Starts
if __name__ == '__main__':

    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc = tc-1
# } Driver Code Ends
```
