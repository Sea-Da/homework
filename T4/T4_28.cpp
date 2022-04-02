/*Filename:T4_28
   Name:王旭辉
  Email:2723964029@qq.com
Function:星号棋盘图案
Date:Mar.18.2022
*/
#include <iostream>
using namespace std;

int main() {
	for(int i = 0; i < 8; i++) {
		if(i % 2 != 0)
			cout << ' ';
		for(int j = 0; j < 8; j++)
			cout << "* ";
			cout<<endl;

	}
	return 0;
}
