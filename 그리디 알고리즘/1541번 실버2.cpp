/*
https://www.acmicpc.net/problem/1541
제목: 잃어버린 괄호
분류: 그리디 알고리즘
난이도: 실버2

풀이: 원하는대로 괄호를 묶을수 있다면 더하기끼리 모두 묶으면된다.
그렇게 되면 처음으로 -가 나온 이후의 숫자는 전부 빼면 가장 작은 값이 나온다.
*/
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> arr;
	string str;
	cin >> str;
	stringstream stream(str);

	//정수만 추출하기 위해 sstream을 사용했다.
	int num;
	while (stream >> num)
	{
		arr.push_back(num);
	}

	//처음으로 음수가 나온 시점에서 모든 정수를 음수로 바꾼다.
	bool isMinus = false;
	int ans = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] < 0)
		{
			isMinus = true;
		}

		if (isMinus)
		{
			if (arr[i] > 0)
			{
				arr[i] = -arr[i];
			}
		}
	}

	//이제 모든 정수를 더해주기만하면 된다.
	for (int i = 0; i < arr.size(); ++i)
	{
		ans += arr[i];
	}
	cout << ans;
}