/*
https://www.acmicpc.net/problem/1439
����: ������
�з�: �׸��� �˰���
���̵�: �ǹ�5

Ǯ��:���� ��ġ�� n���϶� 2�� ���� ���� �ּ� ������ Ƚ���� �ȴ�.
*/
#include<iostream>
using namespace std;
int main()
{
	//�ּ� ��ġ�� ���� 1�̴�.
	int bundle = 1;
	string str;
	cin >> str;

	//��ġ�� �����ϱ� ���� ���� ���ڰ� ������ �����Ѵ�.
	char prior = str[0];
	for (int i = 1; i < str.size(); ++i)
	{
		//���� ���ڿ� ���� ���ڰ� �ٸ��ٸ�
		//��ġ�� ���� �ø��� prior�� ����
		if (str[i] != prior)
		{
			
			bundle++;
			prior = str[i];
		}
	}
	cout << bundle / 2;
}