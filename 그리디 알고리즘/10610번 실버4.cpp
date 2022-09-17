/*
https://www.acmicpc.net/problem/10610
����: 30
�з�: �׸��� �˰���
���̵�: �ǹ�4

Ǯ��:3�� ����� ����ڸ��� ���� �������� 3�� ��������Ѵ�.
10^5�ڸ��� ������ ����ϱ� ����Ƿ� string���� �ٷ��.
���������� 30�� ����� �����̹Ƿ� �ݵ�� ����0�� �ϳ��� �־���Ѵ�.
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int sum = 0;

	//���ڿ��� ������������ �����Ѵ�.
	sort(str.begin(), str.end(), greater<int>());
	//�� �ڸ� ������ ���� ���Ѵ�.
	for (int i = 0; i < str.size(); ++i)
	{
		sum += (int)str[i] - 48;
	}

	//���������� ���� ������ ���ڰ� 0�� �ƴϰų�
	//3�� ����� �ƴ϶�� 30�� ����� �Ұ����ϹǷ� -1���
	if (str[str.size() - 1] != '0')
	{
		cout << -1;
		return 0;
	}
	if (sum % 3 != 0)
	{
		cout << -1;
		return 0;
	}
	
	//���� �ΰ����� ����ߴٸ� �����ϹǷ� ���ĵ� �״�� ���
	cout << str;
}