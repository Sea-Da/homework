/*Date:March.18th.2022
  Name:王旭辉
  Email:2723964029@qq.com
  Function：薪金计算器。
  */




#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double m,g,a,t=0;
int i=1;
   while(i)
        {


        cout<<"Enter hours worked (-1 to end):"<<endl;
   cin>>m;
   if (m==-1) break;
   else
       {
       cout<<"Enter hourly rate of the employee ($):"<<endl;
   cin>>g;
   if(m>40)
       t=g*40+(m-40)*g*1.5;
   else
       t=g*m;
   cout<<"Salary is: $"<<fixed<<showpoint<<setprecision(2)<<t<<endl;

       }}

    return 0;
}
