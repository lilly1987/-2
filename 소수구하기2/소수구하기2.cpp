#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>

using namespace std;

int main()
{
	// �Է°�
	unsigned int n,j;
	cout << "�O�� �Ҽ���:";
	cin >> n;

	// ���� n�� 1���� �۰ų� ������ �Լ� ����
	if (n <= 1) return 0;

	j = 2;

	//j������ �������� 0 �ƴϸ� �������� ����. 
	while (n%j!=0)
	{
		j += 1;
	}

	// ���� ������j�� n������ �������� ������ �Ҽ��� �ƴ϶�¶�. 
	// �Ҽ��� 1�ܿ� �ڽź��� ���������� �������� �ʱ⶧��.
	if (n==j)
	{
		cout << "�Ҽ���";
	}
	else 
	{
		cout << "�Ҽ� �ƴ�";

	}

}