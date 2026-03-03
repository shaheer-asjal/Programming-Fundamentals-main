#include<iostream>
using namespace std;

main()
{
 float imp;
 int ply; 
 float chance;
 cout<<"Enter the imposter count:";
 cin>> imp;
 cout<<"Enter the player count:";
 cin>> ply;
 chance=(imp/ply)*100;
 cout<<"Chance of being an imposter is:"<<chance<<"%";
}
