#include<iostream>
using namespace std;

main()
{
 int age,moves;
 float avgduration;
 cout<<"Enter your age:";
 cin>> age;
 cout<<"Enter number of times they have moved:";
 cin>> moves;
 avgduration=age/(moves+1.0);
 cout<<"The average number of years lived in same house is :"<<avgduration;
}