/*
https://www.acmicpc.net/problem/1715
����: ī�� �����ϱ�
�з�: �׸��� �˰���
���̵�: ���4

Ǯ��: ī�� ������ n�� �϶� ī�� ���������� �񱳴� �� n-1�̴�.
�� �� ���ϴ� ī�� ������ ũ�� ī�峢���� ��Ƚ���� Ŀ����.
���� �������� ���� ������ ���� ���� �������� ���ϰ� ���ľ߸� �Ѵ�.
*/
#include<iostream>
#include<queue>
using namespace std;

int main()
{
	//�׻� ���� ī�� ��ġ�� �̱����� �ּ��� ���
	priority_queue<int, vector<int>, greater<int>> min_heap;
	int n;
	cin >> n;

	int input;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		min_heap.push(input);
	}

	int ans = 0;
	int temp1, temp2;
	for (int i = 0; i < n - 1; ++i)
	{
		//�ּ����� ����� ���� ī�并ġ 2���� ���� ��ġ��
		//�ٽ� �ּ����� �־��ش�.
		temp1 = min_heap.top();
		min_heap.pop();
		temp2= min_heap.top();
		min_heap.pop();

		ans += temp1 + temp2;
		min_heap.push(temp1 + temp2);
	}
	cout << ans;
}
