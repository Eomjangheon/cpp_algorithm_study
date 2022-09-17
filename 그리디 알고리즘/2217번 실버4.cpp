/*
https://www.acmicpc.net/problem/2217
제목: 로프
분류: 그리디 알고리즘
난이도: 실버4

풀이: 로프를 약한것부터 정렬한뒤
하나씩 최대로 버틸수 있는 무게를 구한다.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main()
{
	int n;
	int max_sum = 0;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);

	for (int i = 0; i < n; ++i)
	{
		max_sum = max(max_sum, arr[i] * (n - i));
	}
	cout << max_sum;
}
