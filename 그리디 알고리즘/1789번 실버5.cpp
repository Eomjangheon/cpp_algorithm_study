/*
https://www.acmicpc.net/problem/1789
����: ������ ��
�з�: �׸��� �˰���
���̵�: �ǹ�5

Ǯ��:���ڰ� 1~n�� �� �̻� 1~n+1�� �� �̸��� ��� 
n���� ������ ���ڸ� ��Ÿ�� �� �ִ�.
*/

#include <iostream>
using namespace std;

int main()
{
	long int n;
	int cnt=0;
	cin >> n;

	for (int i = 1; n >= i; ++i)
	{
		cnt++;
		n -= i;
	}
	cout << cnt;
}