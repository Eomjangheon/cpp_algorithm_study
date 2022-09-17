/*
https://www.acmicpc.net/problem/14916
제목: 거스름돈
분류: 그리디 알고리즘
난이도: 실버5

풀이: 동전의 갯수를 최대한 줄이기 위해서는 5원으로 최대한 많이 준다.
나머지가 홀수라면 2원으로 줄 수 없으므로 5원 하나를 뺀 나머지를 2원으로 준다.
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int ans = 0;
	cin >> n;

	//n이 1또는3이라면 2원과 5원으로 만들 수 없다.  
	if (n == 1 || n == 3)
	{
		cout << -1;
		return 0;
	}


	ans += n / 5;
	n %= 5;

	if (n % 2 == 1)
	{
		ans--;
		n += 5;
	}
	ans += n / 2;
	cout << ans;
}