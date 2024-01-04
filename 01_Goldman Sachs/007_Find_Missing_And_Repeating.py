'''
  @file: 007_Find_Missing_And_Repeating.py
  @author: Avinash Yadav
  @brief: https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
  @level: Medium
  @date: 04-01-2024
'''


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
