#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	time_t start1, start2, start3;
	time_t end1, end2, end3;
	time_t difference1, difference2, difference3;
	int a = 2;
	int b = 1;
	int c = 0;
	start1 = time(NULL) * 1000000;
	for (int i = 0; i <= 1000000; i++)
	{
		c = (a - b) * (a + b);
	}
	end1 = time(NULL) * 1000000;
	difference1 = end1 - start1;
	start2 = time(NULL) * 1000000;
	for (int i = 0; i <= 1000000; i++)
	{
		c = pow(a, 2) + pow(b, 2);
	}
	end2 = time(NULL) * 1000000;
	difference2 = end2 - start2;
	start3 = time(NULL) * 1000000;
	for (int i = 0; i <= 1000000; i++)
	{
		c = (a << 1) - (b << 1);
	}
	end3 = time(NULL) * 1000000;
	difference3 = end3 - start3;
	cout << "start 1 (microseconds) = " << start1 << endl;
	cout << "start 2 (microseconds) = " << start2 << endl;
	cout << "start 3 (microseconds) = " << start3 << endl;
	cout << "end 1 (microseconds) = " << end1 << endl;
	cout << "end 2 (microseconds) = " << end2 << endl;
	cout << "end 3 (microseconds) = " << end3 << endl;
	cout << endl;
	cout << "difference = end - start" << endl;
	cout << endl;
	cout << "difference 1 = " << difference1 << endl;
	cout << "difference 2 = " << difference2 << endl;
	cout << "difference 3 = " << difference3 << endl;
	system("pause");
	return 0;
}