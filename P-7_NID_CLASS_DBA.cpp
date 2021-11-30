#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,temp;
   cout<<"Enter the ip address in dotted decimal notation:\n";
   cin>>s;
   int i=0;
  while(s[i]!='.')
  {
    temp=temp+s[i];
    i++;
  }
  int c=stoi(temp);
  if(c>=0 && c<=127)
  {
     cout<<"class A\n";
     cout<<"Network ID:\n";
     cout<<temp+".000.000.000\n";
     cout<<"Directed Broadcast Address: \n";
     cout<<temp+".255.255.255";
 
 }
  else if(c>=128 && c<=191)
  {
     cout<<"class B\n";
     cout<<"Network ID:\n";
     i++;
     temp+=".";
     while(s[i]!='.')
     {
      temp=temp+s[i];
      i++;
     }
     cout<<temp+".000.000\n";
     cout<<"Directed Broadcast Address: \n";
     cout<<temp+".255.255";

  }
  else if(c>=192 && c<=223)
  {
     cout<<"class C";
     cout<<"Network ID:\n";
     i++;
      temp+=".";
     while(s[i]!='.')
     {
      temp=temp+s[i];
      i++;
     }
     i++;
      temp+=".";
     while(s[i]!='.')
     {
      temp=temp+s[i];
      i++;
     }
     cout<<temp+".000\n";
     cout<<"Directed Broadcast Address: \n";
     cout<<temp+".255";
  }
  else if(c>=224 && c<=239)
  {
     cout<<"class D";
     cout<<"No Network ID\n";
     cout<<"NO directed broadcast address:\n";
  }
  else if(c>=240 && c<=255)
  {
     cout<<"class E";
      cout<<"No Network ID\n";
     cout<<"NO directed broadcast address:\n";
  }



}
