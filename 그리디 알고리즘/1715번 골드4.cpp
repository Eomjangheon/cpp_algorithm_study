/*
https://www.acmicpc.net/problem/1715
제목: 카드 정렬하기
분류: 그리디 알고리즘
난이도: 골드4

풀이: 카드 묶음이 n개 일때 카드 묶음끼리의 비교는 총 n-1이다.
이 때 비교하는 카드 묶음이 크면 카드끼리의 비교횟수는 커진다.
따라서 묶음끼리 비교할 때마다 가장 작은 묶음끼리 비교하고 합쳐야만 한다.
*/
#include<iostream>
#include<queue>
using namespace std;

int main()
{
	//항상 작은 카드 뭉치만 뽑기위해 최소힙 사용
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
		//최소힙을 사용해 작은 카드뭉치 2개를 꺼내 합치고
		//다시 최소힙에 넣어준다.
		temp1 = min_heap.top();
		min_heap.pop();
		temp2= min_heap.top();
		min_heap.pop();

		ans += temp1 + temp2;
		min_heap.push(temp1 + temp2);
	}
	cout << ans;
}
