/*
https://www.acmicpc.net/problem/13305
����: ������
�з�: �׸��� �˰���
���̵�: �ǹ�3

Ǯ��: �����ҿ� �鷶�� �� ������ �����ߴ� �⸧�� ���� �� ��������
�� �����Ѵٰ� �����Ѵ�. ������� ���� ������ �⸧ ������ 7���̰�,
������ �鸥 ���õ��� ���� �� �⸧���� 2���̸� �� ���õ� 2���̶�� �����ϴ� ���̴�.
�ֳ��ϸ� ������ ���� ������ ���� �Ѱ������� ���� ���ñ��� ��ٰ�
�����ϸ� �Ǳ� ����
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dis[100000];
int main()
{
	int n;
	unsigned long long ans=0;

	cin >> n;
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> dis[i];
	}
	dis[n - 1] = 0;

	long long int cost;
	long long int min_cost=1000000001;
	for (int i = 0; i < n; ++i)
	{
		//���ø� �ϳ��� ��������, �� �⸧ ���� ����
		//���� ���ñ��� �� �⸧������ �Ÿ��� ���� ������ ���Ѵ�.
		cin >> cost;
		min_cost = min(min_cost, cost);
		ans += min_cost * dis[i];
	}
	cout << ans;
}