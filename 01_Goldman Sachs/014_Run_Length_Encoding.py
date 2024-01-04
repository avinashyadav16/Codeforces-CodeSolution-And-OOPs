'''
  @file: 014_Run_Length_Encoding.py
  @author: Avinash Yadav
  @brief: https://www.geeksforgeeks.org/problems/run-length-encoding/1
  @level: Easy
  @date: 04-01-2024
'''


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
