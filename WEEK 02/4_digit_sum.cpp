#include<iostream>
using namespace std;

main()
{
 int number;
 cout<<"Enter a 4-digit number:";
 cin number;
 int d1=num%10;
 num=num/10;
 int d2=num%10;
 num=num/10;
 int d3=num%10;
 num=num/10;
 int d4=num%10;
 int sum=d1+d2+d3+d4;
 cout<<"The sum of individual digits="<<sum<<endl;
}