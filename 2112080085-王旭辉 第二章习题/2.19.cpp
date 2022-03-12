/*Date:March 12th.2022
  Name:王旭辉
  Email:2723964029@qq.com
  Function:输出三个数的和 均值 积 最小值 最大值
  */
#include <iostream>
#include <cmath>
using namespace std;
int max(int a,int b,int c)
{
    int temp=a;
	if(b>a) temp=b;
	if(temp<c) temp=c;
	return temp;
}int min(int a,int b,int c)
{
    int tem=a;
	if(b>a) tem=a;
	if(tem>c) tem=c;
	return tem;
}
int main()
{
    cout << "Input three different integers:"<<endl ;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Sum is "<<a+b+c<<endl;
        cout<<"Average is "<<(a+b+c)/3<<endl;
          cout<<"Product is "<<a*b*c<<endl;
            cout<<"Smallest is "<<min(a,b,c)<<endl;
                cout<<"Largest is "<<max(a,b,c)<<endl;
                    cout<<""<<a+b<<endl;
    return 0;
}
