#include<iostream>
using namespace std;

main()
{
 int voltage;
 int current;
 int power;
 cout<<"Enter the value of voltage(in volts):";
 cin>> voltage;
 cout<<"Enter the value of current(in amperes):";
 cin>> current;
 power=voltage*current;
 cout<<"The value of power in watts is:"<<power<<"W";
}