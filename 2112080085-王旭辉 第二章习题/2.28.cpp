/*Date:March 12th.2022
  Name:ÍõÐñ»Ô
  Email:2723964029@qq.com
  Function:output value table
  */
#include <iostream>

using namespace std;

int main()
{
    int i;
    cin >> i;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    a = i / 10000;
    b = i / 1000 % 10;
    c = i %1000 / 100;
    d = i % 100 / 10;
    e = i % 10;
    cout << a << "   " << b << "   " << c << "   " << d <<  "   " << e << endl;
    return 0;
}
