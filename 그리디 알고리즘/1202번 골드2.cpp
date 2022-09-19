/*
https://www.acmicpc.net/problem/1202
제목: 보석 도둑
분류: 그리디 알고리즘
난이도: 골드2

풀이: 무게를 최소힙으로, 가방을 최소힙으로 정렬한다.
가장 작은 가방부터 가방에 들어갈수있는 보석을 전부 꺼낸다.
보석은 가격순으로 최대힙정렬한다.
그리고 가방에 비싼것을 넣는다. 반복
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

	//가방수만큼 반복
	for (int i = 0; i < k; ++i)
	{	
		//보석이 더 없거나, 보석이 가방크기보다 커질때까지
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
		//넣을 보석이 없다면 가방을 하나 버린다
		if (q2.empty())
		{
			bag.pop();
		}
		//보석을 가방에 담는다
		else if (!q2.empty())
		{
			sum += q2.top().cost;
			q2.pop();
			bag.pop();
		}
	}
	cout << sum;
}
