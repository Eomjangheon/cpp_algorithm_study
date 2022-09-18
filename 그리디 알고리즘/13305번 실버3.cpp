/*
https://www.acmicpc.net/problem/13305
제목: 주유소
분류: 그리디 알고리즘
난이도: 실버3

풀이: 주유소에 들렀을 때 이전에 구매했던 기름중 가장 싼 가격으로
또 구매한다고 가정한다. 예를들어 지금 도시의 기름 가격이 7원이고,
이전에 들른 도시들중 가장 싼 기름값이 2원이면 이 도시도 2원이라고 가정하는 것이다.
왜냐하면 어차피 이전 도시중 가장 싼가격으로 다음 도시까지 샀다고
생각하면 되기 때문
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
		//도시를 하나씩 지나가며, 싼 기름 값을 갱신
		//다음 도시까지 싼 기름값으로 거리에 대한 가격을 더한다.
		cin >> cost;
		min_cost = min(min_cost, cost);
		ans += min_cost * dis[i];
	}
	cout << ans;
}