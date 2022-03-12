/*Date:March 12th.2022
  Name:Õı–Òª‘
  Email:2723964029@qq.com
  Function:º∆À„BMI
  */

#include <iostream>

using namespace std;

int main()
{double a,b,c;
cout<<"please input your weight(kg):"<<endl;
cin>>a;
cout<<"please input your height(m):"<<endl;
cin>>b;
c=a/(b*b);
cout<<"your BMI value is:"<<c<<endl;

    cout << "BMI values " << endl;
    cout<<"underweight: less than 18.5;"<<endl;
    cout<<"normal: between 18.5 and 24.9"<<endl;
    cout<<"overweight: between 25 and 29.9"<<endl;
    cout<<"obese: 30 or greater"<<endl;
    return 0;
}
