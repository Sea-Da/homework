/*Date:March.18th.2022
 Name:�����
  Email:2723964029@qq.com

  Function:����Ӷ���������
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


        cout<<"Enter sales in dollars(or -1to end):"<<endl;
   cin>>m;
   if (m==-1) break;
   else
       {
       m=m*9/100+200;


   cout<<"Salary is : $"<<fixed<<showpoint<<setprecision(2)<<m<<endl;

       }}

    return 0;
}
