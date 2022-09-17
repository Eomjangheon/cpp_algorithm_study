/*
https://www.acmicpc.net/problem/10610
제목: 30
분류: 그리디 알고리즘
난이도: 실버4

풀이:3의 배수는 모든자리의 수를 합했을때 3의 배수여야한다.
10^5자리수 정수는 사용하기 힘드므로 string에서 다룬다.
문제에서는 30의 배수의 문제이므로 반드시 숫자0이 하나는 있어야한다.
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

	//문자열을 내림차순으로 정렬한다.
	sort(str.begin(), str.end(), greater<int>());
	//각 자리 숫자의 합을 구한다.
	for (int i = 0; i < str.size(); ++i)
	{
		sum += (int)str[i] - 48;
	}

	//정렬했을때 가장 마지막 숫자가 0이 아니거나
	//3의 배수가 아니라면 30의 배수는 불가능하므로 -1출력
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
	
	//위의 두가지를 통과했다면 가능하므로 정렬된 그대로 출력
	cout << str;
}