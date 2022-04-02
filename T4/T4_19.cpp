/*Date:March.18th.2022
 Name:王旭辉
  Email:2723964029@qq.com

  Function:找两个最大数
  */


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int a,b,c,d,e,i=1,j,n[10],t;
while(i<=10)
{cin>>n[i];
i++;
}
for(j=1;j<10;j++)
{for(i=j;i<=10;i++)
if(n[i]>n[i+1])
{t=n[i];
n[i]=n[i+1];
n[i+1]=t;
}}
cout<<n[11]<<"\t\t"<<n[10];








    return 0;
}
