# Number following a pattern

[![Number following a pattern](https://img.shields.io/badge/-GeeksForGeeks-green?style=for-the-badge&logo=geeksforgeeks&logoColor=Gray)](https://www.geeksforgeeks.org/problems/number-following-a-pattern3126/1) ![Medium](https://img.shields.io/badge/-Medium-green?style=for-the-badge&logoColor=green)

<details>
Author: Avinash Yadav<br>
Date: 04-01-2024
</details><br>

Given a pattern containing only **I**'s and **D**'s. I for **increasing** and D for **decreasing**. Devise an algorithm to print the **minimum number** following that pattern. Digits from **1-** and digits **can't repeat**.

### Example 1:

```
Input: D
Output: 21

Explanation:
D is meant for decreasing, so we choose the minimum number among all possible numbers like 21,31,54,87,etc.
```

### Example 2:

```
Input: IIDDD
Output: 126543
Explanation:
Above example is self- explanatory,
1 < 2 < 6 > 5 > 4 > 3
  I - I - D - D - D
```

#### Your Task:

You don't need to read input or print anything. Your task is to complete the function **printMinNumberForPattern()** which takes the string **S** and returns a string containing the minimum number following the valid number.


### Solution:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string printMinNumberForPattern(string S)
    {
        stack<int> temp_stack;
        int num = 1;
        string result;

        for (int i = 0; i < S.length(); i++)
        {
            temp_stack.push(num++);
            if (S[i] == 'I')
            {
                while (!temp_stack.empty())
                {
                    result += to_string(temp_stack.top());
                    temp_stack.pop();
                }
            }
        }
        temp_stack.push(num++);
        while (!temp_stack.empty())
        {
            result += to_string(temp_stack.top());
            temp_stack.pop();
        }
        return result;
    }
};
```