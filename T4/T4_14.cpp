*Date:March.18th.2022
  Name:王旭辉
  Email:2723964029@qq.com
  Function:信用额度问题
  */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double m,g,a,t,b,n;
int i=1;
   while(i)
        {


        cout<<"Enter account number ( or -1 to quit):"<<endl;
   cin>>m;
   if (m==-1) break;
   else
       {
       cout<<"Enter beginning balance:"<<endl;
   cin>>g;

   cout<<"Enter total charges:"<<endl;
 cin>>a;
   cout<<"Enter total credits:"<<endl;
cin>>t;
b=g+a-t;
cout<<"Enter credit limit:"<<endl;
cin>>n;
cout<<"New balance is "<<fixed<<showpoint<<setprecision(2)<<b<<endl;
if(b>n)
      {

      cout<<"Account:"<<m<<endl;
  cout<<"Credit limit:"<<fixed<<showpoint<<setprecision(2)<<n<<endl;
    cout<<"Balance:"<<fixed<<showpoint<<setprecision(2)<<b<<endl;
      cout<<"Credit Limit Exceeded"<<endl;}
       }}

    return 0;
}
