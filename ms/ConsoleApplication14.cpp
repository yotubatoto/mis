#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void disp(int i,int j);

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	int j = 0;
	/*char *test = "”n";
	printf("%2s",test);*/
	std::cout << "”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	disp(i,j);
	
	return 0;
}

void disp(int i,int j)
{
	if (i > j)
	{
		return;
	}
	int right = 0;
	int ans = 0;
	for (int left = i; left <= j; left++)
	{
		ans = left + right;
		printf("%d + %d = %d\n", left, right, ans);
		right += left;
	}
}

