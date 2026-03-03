#include<iostream>
using namespace std;

main()
{
 float bagsize,bagcost,area;
 float costperpound,costpersquarefoot;
 cout<<"Enter the size of fertilizer bag in pounds:";
 cin>> bagsize;
 couy<<"Enter the cost of the bag:$";
 cin>> bagcost;
 cout<<"Enter the area in square feet that can be covered by the baag:";
 cin>> area;
 costperpound=bagcost/bagsize;
 costpersquarefoot=bagcost/area;
 cout<<"The cost of fertilizer per pound is:$"<<costperpound<<endl;
 cout<<"The cost of fertilizing per square foot is :$"<<costpersquarefoot;
}

 