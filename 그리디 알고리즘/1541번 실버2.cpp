/*
https://www.acmicpc.net/problem/1541
����: �Ҿ���� ��ȣ
�з�: �׸��� �˰���
���̵�: �ǹ�2

Ǯ��: ���ϴ´�� ��ȣ�� ������ �ִٸ� ���ϱⳢ�� ��� ������ȴ�.
�׷��� �Ǹ� ó������ -�� ���� ������ ���ڴ� ���� ���� ���� ���� ���� ���´�.
*/
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> arr;
	string str;
	cin >> str;
	stringstream stream(str);

	//������ �����ϱ� ���� sstream�� ����ߴ�.
	int num;
	while (stream >> num)
	{
		arr.push_back(num);
	}

	//ó������ ������ ���� �������� ��� ������ ������ �ٲ۴�.
	bool isMinus = false;
	int ans = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] < 0)
		{
			isMinus = true;
		}

		if (isMinus)
		{
			if (arr[i] > 0)
			{
				arr[i] = -arr[i];
			}
		}
	}

	//���� ��� ������ �����ֱ⸸�ϸ� �ȴ�.
	for (int i = 0; i < arr.size(); ++i)
	{
		ans += arr[i];
	}
	cout << ans;
}