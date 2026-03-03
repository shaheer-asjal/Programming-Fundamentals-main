#include<iostream>
using namespace std;

main()
{
 string name;
 float weight,days;
 cout<<"Enter your name:";
 cin>> name;
 cout<<"Enter the target weight in kilograms to lose:";
 cin>> weight;
 days=weight*15;
 cout<<name<<"will need"<<days<<"days to lose weight as by doctor's recomendation";
}