#include <iostream>
#include <string>

#include "minmax.h"

using namespace std;

int main()
{
	int i = 10, j = 20, k = 30;
	double a = 10.3, b = 2.7, c = 3.0;
	string x = "abc", y = "ijk", z = "abcde";

	minMax minMax1(true);
	minMax minMax2(false);
	
	int res = findMinMax(i, j, k, minMax1);
	 res = findMinMax(i, j, k, minMax2);
	system("pause");
	return 0;
}