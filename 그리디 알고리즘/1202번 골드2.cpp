/*
https://www.acmicpc.net/problem/1202
����: ���� ����
�з�: �׸��� �˰���
���̵�: ���2

Ǯ��: ���Ը� �ּ�������, ������ �ּ������� �����Ѵ�.
���� ���� ������� ���濡 �����ִ� ������ ���� ������.
������ ���ݼ����� �ִ��������Ѵ�.
�׸��� ���濡 ��Ѱ��� �ִ´�. �ݺ�
*/
#pragma warning(disable:4996)
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;


struct jam {
	int cost;
	int mass;
};

struct compare_high_cost{
	bool operator()(const jam& j1, const jam& j2) {
		return j1.cost < j2.cost;
	}
};

struct compare_low_mass {
	bool operator()(const jam& j1, const jam& j2) {
		return j1.mass > j2.mass;
	}
};


priority_queue<jam, vector<jam>, compare_low_mass> q;
priority_queue<jam, vector<jam>, compare_high_cost> q2;
priority_queue<int, vector<int>, greater<int>> bag;
long long int sum = 0;


int main()
{
	int n, k;
	cin >> n >> k;

	int temp1, temp2;
	jam tempJam;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d", &temp1, &temp2);
		tempJam.mass = temp1;
		tempJam.cost = temp2;
		q.push(tempJam);
	}

	for (int i = 0; i < k; ++i)
	{
		scanf("%d", &temp1);
		bag.push(temp1);
	}

	//�������ŭ �ݺ�
	for (int i = 0; i < k; ++i)
	{	
		//������ �� ���ų�, ������ ����ũ�⺸�� Ŀ��������
		while(!q.empty())
		{
			if (q.top().mass <= bag.top())
			{
				q2.push(q.top());
				q.pop();
			}
			else
			{
				break;
			}
		}
		//���� ������ ���ٸ� ������ �ϳ� ������
		if (q2.empty())
		{
			bag.pop();
		}
		//������ ���濡 ��´�
		else if (!q2.empty())
		{
			sum += q2.top().cost;
			q2.pop();
			bag.pop();
		}
	}
	cout << sum;
}
