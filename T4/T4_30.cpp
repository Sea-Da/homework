/*Filename:T4_30
  Name:王旭辉
  Email:2723964029@qq.com
Function:计算圆的直径，周长和面积
Date:Mar.18.2022
*/
#include<iostream>
#include<cstdio>
using namespace std;
const double pi=3.14159;
int main()
{
	double r,d,c,s;
	cin>>r;
	d=r*2;
	c=2*pi*r;
	s=pi*r*r;
	printf("%.4f%.4f%.4f",d,c,s);
	return 0;
}
