/*Filename:T4_26
 Name:王旭辉
  Email:2723964029@qq.com
Function:判断回文数
Date:Mar.18.2022
*/
#include <iostream>
using namespace std;

int main() {
	int num, yes= 1;
	cin >> num;
	if(num / 10000 != num % 10) {
		yes = 0;
	} else if (num / 1000 % 10 != num / 10 % 10) {
		yes= 0;
	}
	cout << num;
	if(yes) {
		cout << " 是回文" << endl;
	} else {
		cout << " 不是回文" << endl;
	}
	return 0;
}
