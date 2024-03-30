# 2513. Minimize the Maximum of Two Arrays

[![Minimize the Maximum of Two Arrays](https://img.shields.io/badge/-Leetcode-grey?style=for-the-badge&logo=Leetcode&logoColor=Gray)](https://leetcode.com/problems/minimize-the-maximum-of-two-arrays/description/) ![Medium](https://img.shields.io/badge/-Medium-green?style=for-the-badge&logoColor=green)


<details>
Author: Avinash Yadav<br>
Date: 01-01-2024
</details><br>


We have two arrays `arr1` and `arr2` which are initially empty. You need to add positive integers to them such that they satisfy all the following conditions:

+ `arr1` contains `uniqueCnt1` **distinct** positive integers, each of which is **not divisible** by `divisor1`.
+ `arr2` contains `uniqueCnt2` **distinct** positive integers, each of which is **not divisible** by `divisor2`.
+ **No** integer is present in both `arr1` and `arr2`.

Given `divisor1`, `divisor2`, `uniqueCnt1`, and `uniqueCnt2`, return the ***minimum possible maximum integer*** that can be present in either array.

 

### Example 1:

```
Input: divisor1 = 2, divisor2 = 7, uniqueCnt1 = 1, uniqueCnt2 = 3
Output: 4

Explanation: 
We can distribute the first 4 natural numbers into arr1 and arr2.
arr1 = [1] and arr2 = [2,3,4].
We can see that both arrays satisfy all the conditions.
Since the maximum value is 4, we return it.
```


### Example 2:

```
Input: divisor1 = 3, divisor2 = 5, uniqueCnt1 = 2, uniqueCnt2 = 1
Output: 3

Explanation: 
Here arr1 = [1,2], and arr2 = [3] satisfy all conditions.
Since the maximum value is 3, we return it.
```


### Solution:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int calculateGCD(int num1, int num2)
    {
        if (num2 == 0)
        {
            return num1;
        }
        return calculateGCD(num2, num1 % num2);
    }

    int calculateLCM(long long num1, long long num2)
    {
        long long temp = (num1 / calculateGCD(num1, num2)) * num2;
        return (temp > INT_MAX) ? INT_MAX : temp;
    }

public:
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2)
    {
        int LCM = calculateLCM(divisor1, divisor2);
        int result = -1;
        int start = 1, end = INT_MAX;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            int countDivBy1 = mid / divisor1, countDivBy2 = mid / divisor2;

            if (uniqueCnt1 + uniqueCnt2 <= mid - mid / LCM &&
                uniqueCnt1 <= mid - countDivBy1 &&
                uniqueCnt2 <= mid - countDivBy2)
            {
                result = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return result;
    }
};

```


