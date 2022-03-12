/*Date:March 12th.2022
  Name:王旭辉
  Email:2723964029@qq.com
  Function:比大小
  */
#include <iostream>

using namespace std;

int main()
{
    cout << "please input two number:" << endl;
int  a,b;

    cin>>a>>b;
    if(a>b)
    cout<<a<<"is large";
    else if(a==b)
        cout<<"These numbers are equal.";
        else
        cout<<b<<"is large";
    return 0;
}
