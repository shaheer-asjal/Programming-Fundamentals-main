#include<iostream>
using namespace std;

main()
{
 int charge;
 int time;
 int current;
 cout<<"Enter the value of charge:";
 cin>> charge;
 cout<<"Enter the value of time:";
 cin>> time;
 current= charge/time;
 cout<<"The value of current is:"<<current<<"A";
}