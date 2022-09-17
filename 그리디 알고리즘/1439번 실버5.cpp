/*
https://www.acmicpc.net/problem/1439
제목: 뒤집기
분류: 그리디 알고리즘
난이도: 실버5

풀이:숫자 뭉치가 n개일때 2로 나눈 몫이 최소 뒤집기 횟수가 된다.
*/
#include<iostream>
using namespace std;
int main()
{
	//최소 뭉치의 수는 1이다.
	int bundle = 1;
	string str;
	cin >> str;

	//뭉치를 구분하기 위해 이전 숫자가 몇인지 저장한다.
	char prior = str[0];
	for (int i = 1; i < str.size(); ++i)
	{
		//이전 숫자와 지금 숫자가 다르다면
		//뭉치의 수를 늘리고 prior를 갱신
		if (str[i] != prior)
		{
			
			bundle++;
			prior = str[i];
		}
	}
	cout << bundle / 2;
}