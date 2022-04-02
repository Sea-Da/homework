
/*Date:March.18th.2022
  Name:王旭辉
  Email:2723964029@qq.com
  Function:4.27 二进制转化十进制
  */



#include <iostream>

using namespace std;

int main()
{int a,b,c=1,sum=0,t;
cin>>a;
while(a!=0)
{t=a%10;
sum=sum+t*c;
c=c*2;
a/=10;


}cout<<sum << endl;
    return 0;
}
