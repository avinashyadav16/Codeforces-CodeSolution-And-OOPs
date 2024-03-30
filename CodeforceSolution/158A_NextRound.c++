/**
 *  @file: 158A_NextRound.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/158/A
 *  @date: 28-03-2024
 */

#include <iostream>
using namespace std;

int main()
{
	int n, k, i, j, count = 0;
	cin >> n >> k;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (j = 0; j < n; j++)
	{
		if (arr[j] >= arr[k - 1] && arr[j] != 0)
		{
			count++;
		}
		else if (arr[j] == 0 || arr[j] < 0)
		{
			continue;
		}
	}
	cout << count << endl;
	return 0;
}