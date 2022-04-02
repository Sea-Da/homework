/*Filename:T4_33
 Name:王旭辉
  Email:2723964029@qq.com
Function:判断能否构成直角三角形
Date:Mar.18.2022
*/
#include <iostream>
using namespace std;
int main()
{
      int a,b,c;
      cin>>a>>b>>c;
      if(a*a+b*b==c||a*a+c*c==b||b*b+c*c==a*a)
            cout<<"yes"<<endl;
      else{
            cout<<"no"<<endl;}
      return 0;
}
