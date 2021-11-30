#include<iostream>
using namespace std;
int main()
{
   unsigned long int h;
   cout<<"Enter the no. of hosts :\n";
   cin>>h;
   if(h>0 && h<=254)
   {
      cout<<"class C will be perfect";
   }
   else if(h>254 && h<=65534)
   {
    cout<<"class B will be perfect";  
   }
   else if(h>16777214)
   {
    cout<<"class A will be perfect";  
   }
 }
