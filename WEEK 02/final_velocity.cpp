#include<iostream>
using namespace std;

main()
{
 int ini;
 int acc;
 int time;
 int fin;
 cout<<"Enter the initial velocity(m/s):";
 cin>> ini;
 cout<<"Enter acceleration(ms^-2):";
 cin>> acc;
 cout<<"Enter time(s):";
 cin>> time;
 fin=(acc*time)+ini;
 cout<<"The final velocity(m/s) is:"<<fin;
}

