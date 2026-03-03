#include<iostream>
using namespace std;

main()
{
 int square,width,height,wallarea,number;
 cout<<"Enter the number of square metres you can paint:";
 cin>> square;
 cout<<"Enter the width of a single wall in metres:";
 cin>> width;
 cout<<"Enter the height of a single wall in metres:";
 cin>> height;
 wallarea=width*height;
 number=square/wallarea;
 cout<<"The number of walls you can paint are :"<<number;
}