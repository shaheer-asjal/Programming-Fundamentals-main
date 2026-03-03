#include<iostream>
using namespace std;

main()
{
 int minute;
 int frame;
 int total;
 cout<<"Enter the number of minutes:";
 cin>> minute;
 cout<<"Enter the frames per second:";
 cin>> frame;
 total=frame*60*minute;
 cout<<"The total number of frames are:"<<total;
}
