/*Filename:T4_25
 Name:王旭辉
  Email:2723964029@qq.com
Function:打印出空心正方形
Date:Mar.18.2022
*/
#include <iostream>
using namespace std;
void allStar(int);
void spaceStar(int);

int main()
{
	int n,i;
	cout << "请输入边长n:" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		if (i%n == 0 || i%n == n - 1)
			allStar(n);
		else
			spaceStar(n);
	}

	return 0;
}

void allStar(int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
		cout << "*";
	cout << endl;
}

void spaceStar(int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (i%n == 0 || i%n == n - 1)
			cout << "*";
		else
			cout << ' ';

	}

	cout << endl;
}

