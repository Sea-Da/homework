/*Date:March 12th.2022
  Name:王旭辉
  Email:2723964029@qq.com
  Function:输出数值表
  */

#include <iostream>

using namespace std;

int main()
{
    int n=10, i;

    cout << "Number	Square	Cube	" << endl;
    for (i = 1; i <= n; i++)
        cout << i << "\t" << i * i << "\t" << i * i * i << "\t" << endl;

    return 0;
}
