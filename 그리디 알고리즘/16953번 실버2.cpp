/*
https://www.acmicpc.net/problem/16953
����: A -> B
�з�: �׸��� �˰���
���̵�: �ǹ�2

Ǯ��:������ ���� �� �ִ°��� �׻� *2�� �ڿ� ����1�� �߰��� ��츸�̴�.
�� ���� ���ڸ� ������ϸ� �Ǵ°��̴�.
���� ���ڰ� ¦����� 2�� ������.
Ȧ���ε� 1�� �ƴ϶�� ����� ���� ���̴�.
1�̶�� 1�� ���ش� �̸� �ݺ��ؼ� �տ��� �������� �����ϴ�.
*/
#include <iostream>
using namespace std;
int main()
{
	long long int ans = 1;
	long long int a, b;
	cin >> a >> b;

	while (a<b)
	{
		ans++;
		if (b % 10 == 1)
		{
			b /= 10;
		}
		else if (b % 2 == 1)
		{
			break;
		}
		else b /= 2;
	}
	if (a == b)
		cout << ans;
	else
		cout << -1;
}