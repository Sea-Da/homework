/*Date:March.18th.2022
  Name:王旭辉
  Email:2723964029@qq.com
  Function:英里油数
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


        cout<<"Enter miles driven (-1 to quit):"<<endl;
   cin>>m;
   if (m==-1) break;
   else
       {
       cout<<"Enter gallons used:"<<endl;
   cin>>g;
   a=m/g;
   cout<<"MPG this trip:"<<fixed<<showpoint<<setprecision(6)<<a<<endl;
   t=t+a;
   cout<<"Total MPG:"<<fixed<<showpoint<<setprecision(6)<<t<<endl;

       }}

    return 0;
}
