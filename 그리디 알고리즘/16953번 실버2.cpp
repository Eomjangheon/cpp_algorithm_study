/*
https://www.acmicpc.net/problem/16953
제목: A -> B
분류: 그리디 알고리즘
난이도: 실버2

풀이:정답을 만들 수 있는것은 항상 *2와 뒤에 숫자1을 추가한 경우만이다.
즉 뒤의 숫자를 역계산하면 되는것이다.
뒤의 숫자가 짝수라면 2로 나눈다.
홀수인데 1이 아니라면 만들수 없는 수이다.
1이라면 1을 떼준다 이를 반복해서 앞에랑 같아지면 가능하다.
*/
#include <iostream>
using namespace std;
int main()
{
	long long int ans = 1;
	long long int a, b;
	cin >> a >> b;

	while (a<b)
	{
		ans++;
		if (b % 10 == 1)
		{
			b /= 10;
		}
		else if (b % 2 == 1)
		{
			break;
		}
		else b /= 2;
	}
	if (a == b)
		cout << ans;
	else
		cout << -1;
}