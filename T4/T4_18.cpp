/*Date:March.18th.2022
   Name:王旭辉
  Email:2723964029@qq.com

  Function:输出表格
  */




#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int a=1,b;
   cout<<"N\t\t\t\t10*N\t\t\t\t100*N\t\t\t\t1000*N"<<endl;
   while (a<5)
   {
          cout<<a<<"\t\t\t\t"<<10*a<<"\t\t\t\t"<<100*a<<"\t\t\t\t"<<1000*a<<endl;
          a++;
   }

    return 0;
}
