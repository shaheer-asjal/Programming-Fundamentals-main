#include<iostream>
using namespace std;

main()
{
 int side;
 int angle;
 cout<<"Enter the number of sides of polygon:";
 cin>> side;
 angle=(side-2)*180;
 cout<<"The sum of all interior angles of your polygon is :"<<angle<<"degrees";
}