/*Filename:T4_32
  Name:王旭辉
  Email:2723964029@qq.com
Function:判断能否构成三角形
Date:Mar.18.2022
*/
#include <iostream>
using namespace std;
int main()
{
      double a,b,c;
      cin>>a>>b>>c;
      if(a+b>c&&a+c>b&&b+c>a)
            cout<<"yes"<<endl;
      else
            cout<<"no"<<endl;
      return 0;
}
