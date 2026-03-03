#include<iostream>
using namespace std;

main()
{
 float matric;
 float inter;
 float ecat; 
 float aggregate;
 cout<<"Enter your matric marks (out of 1100) :";
 cin>> matric;
 cout<<"Enter your intermediate marks (out of 555) :";
 cin>> inter;
 cout<<"Enter your ecat marks (out of 400) :";
 cin>> ecat;
 aggregate = (matric/1100*17)+(inter/555*50)+(ecat/400*33) ;
 cout<<"Your ecat aggregate is:"<<aggregate<<"%";
}
