/*Date:March.18th.2022
 Name:王旭辉
  Email:2723964029@qq.com

  Function:找最大数
  */




#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int a,b,c,d,e,counter=1,number,largest=-10000;
while(counter<=10)
{cin>>number;
if(number>=largest)
       largest=number;
counter++;


}
cout<<"largest is :"<<largest;


    return 0;
}
