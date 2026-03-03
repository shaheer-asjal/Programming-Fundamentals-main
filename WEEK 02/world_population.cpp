#include<iostream>
using namespace std;

main()
{
 int current;
 int monthly;
 int total;
 cout<<"Enter the current world population:";
 cin>>current; 
 cout<<"Enter the monthly birth rate:";
 cin>> monthly;
 total=(monthly*12*30)+current;
 cout<<"Population in three decades will be:"<<total;
}