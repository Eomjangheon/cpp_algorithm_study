/*
https://www.acmicpc.net/problem/14916
����: �Ž�����
�з�: �׸��� �˰���
���̵�: �ǹ�5

Ǯ��: ������ ������ �ִ��� ���̱� ���ؼ��� 5������ �ִ��� ���� �ش�.
�������� Ȧ����� 2������ �� �� �����Ƿ� 5�� �ϳ��� �� �������� 2������ �ش�.
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int ans = 0;
	cin >> n;

	//n�� 1�Ǵ�3�̶�� 2���� 5������ ���� �� ����.  
	if (n == 1 || n == 3)
	{
		cout << -1;
		return 0;
	}


	ans += n / 5;
	n %= 5;

	if (n % 2 == 1)
	{
		ans--;
		n += 5;
	}
	ans += n / 2;
	cout << ans;
}