/*
https://www.acmicpc.net/problem/2217
����: ����
�з�: �׸��� �˰���
���̵�: �ǹ�4

Ǯ��: ������ ���Ѱͺ��� �����ѵ�
�ϳ��� �ִ�� ��ƿ�� �ִ� ���Ը� ���Ѵ�.
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
