#include<iostream>
using namespace std;

main()
{
 float vprice,fprice;
 int vweight,fweight;
 float totalcoin,totalrupee;
 cout<<"Enter the price of vegetable per kg(in coins)";
 cin>> vprice;
 cout<<"Enter the price of fruit per kg(in coins)";
 cin>> fprice;
 cout<<"Enter the total kilograms of vegetables:";
 cin>> vweight;
 cout<<"Enter the total kilograms of fruits:";
 cin>> fweight;
 totalcoin=(vprice*vweight)+(fprice*fweight);
 totalrupee=totalcoin/1.94;
 cout<<"The total earning in rupees is:"<<totalrupee<<"Rs";
}