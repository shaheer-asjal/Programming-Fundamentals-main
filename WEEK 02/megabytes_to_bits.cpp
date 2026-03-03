#include<iostream>
using namespace std;

main()
{
 int megabyte;
 int bit;
 cout<<"Enter the size in megabytes (MB) :";
 cin>> megabyte;
 bit=megabyte*1024*1024*8;
 cout<<"Your size in bits is:"<<bit<<"bits";
}