#include<iostream>
using namespace std;

main()
{
 int win;
 int loss;
 int draw;
 int totalpoint;
 cout<<"Enter number of wins:";
 cin>> win;
 cout<<"Enter number of losses:";
 cin>> loss;
 cout<<"Enter number of draws:";
 cin>> draw;
 totalpoint=(win*3)+(loss*0)+(draw*1);
 cout<<"Pakistan has obtained "<<totalpoint<<" points in Asia Cup";
 }