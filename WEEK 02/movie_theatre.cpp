#include<iostream>
using namespace std;

main()
{
 string movie;
 float aprice,cprice,donationper;
 int asold,csold;
 float totalamount,donationamount,remainingamount;
 cout<<"Enter the name of movie:";
 cin>> movie;
 cout<<"Enter the price of adult ticket:$;
 cin>> aprice;
 cout<<"Enter the price of child ticket:$;
 cin>> cprice;
 cout<<:Enter the number of adult tickets sold:";
 cin>> asold;
 cout<<"Enter the number of child tickets sold:";
 cin>> csold;
 cout<<"Enter the percentage of earning donated to charity:";
 cin>> donationper;
 totalamount=(aprice*asold)+(cprice*csold);
 donationamount=totalamount*(donationper/100);
 remainingamount=totalamount-donationamount;
 cout<<"-----------------------------"<<endl;
 cout<<"Movie:"<<movie<<endl;
 cout<<"The total amount generated from ticket sales is :$"<<totalamount<<endl;
 cout<<"The amount donated to charity is :"<<donationper<<"$"<<donationamount<<endl;
 cout<<"The remaining amount after the donation is :$"<<remainingamount;
}
 