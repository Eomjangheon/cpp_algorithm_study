/*
https://www.acmicpc.net/problem/1789
제목: 수들의 합
분류: 그리디 알고리즘
난이도: 실버5

풀이:숫자가 1~n의 합 이상 1~n+1의 합 미만일 경우 
n개의 합으로 숫자를 나타낼 수 있다.
*/

#include <iostream>
using namespace std;

int main()
{
	long int n;
	int cnt=0;
	cin >> n;

	for (int i = 1; n >= i; ++i)
	{
		cnt++;
		n -= i;
	}
	cout << cnt;
}