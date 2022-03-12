/*Date:March 12th.2022
  Name:王旭辉
  Email:2723964029@qq.com
  Function:输入五个整数，输出最大值和最小值
  */
#include <iostream>
using namespace std;
int main()
{
	int a[5], max, min;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	max = a[0];
	min = a[0];
	for (int j = 0; j < 5; j++)
	{
		if (max < a[j])
		{
			max = a[j];
		}
		if (min > a[j])
		{
			min = a[j];
		}
	}
	cout << "最大值为" << max << endl;
	cout << "最小值为" << min << endl;



	return 0;
}
