#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>

using namespace std;

int main()
{
	// 입력값
	unsigned int n,j;
	cout << "찿을 소수값:";
	cin >> n;

	// 만일 n이 1보다 작거나 같으면 함수 종료
	if (n <= 1) return 0;

	j = 2;

	//j값으로 나눠지면 0 아니면 다음으로 진행. 
	while (n%j!=0)
	{
		j += 1;
	}

	// 만약 위에서j가 n값보다 작은값이 나오면 소수가 아니라는뜻. 
	// 소수는 1외에 자신보다 작은값으로 나눠지기 않기때문.
	if (n==j)
	{
		cout << "소수임";
	}
	else 
	{
		cout << "소수 아님";

	}

}