#include <iostream>
#include <string>

#include "max.h"

using namespace std;

int main()
{
	int i = 10, j = 20, k = 30;
	double a = 10.3, b = 2.7, c = 3.0;
	string x = "abc", y = "ijk", z = "abcde";

	cout <<"int:\n"<< max(i, j, k)<<endl;
	cout << "double:\n"<<max(a, b, c) << endl;
	cout << "string:\n" << max(x, y, z) << endl;

	system("pause");
	return 0;
}