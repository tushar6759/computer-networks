/*
Program 5: Write a program to display the class of the IP Address entered by the user.
Sample Input: 
Enter the IP Address in Dotted Decimal Notation: 193.90.74.125
Enter the first octet: 193
Enter the second octet: 90
Enter the third octet: 74
Enter the fourth octet: 125
Sample Output: It is Class B address
A -> 0-127
B -> 128-191
C -> 192-223
D -> 224-239
E -> 240-255 
*/

 #include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,temp;
	cout<<"enter the ip address in dotted decimal notation: \n";
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
     cout<<"class A";
  }
  else if(c>=128 && c<=191)
  {
     cout<<"class B";
  }
  else if(c>=192 && c<=223)
  {
     cout<<"class C";
  }
  else if(c>=224 && c<=239)
  {
     cout<<"class D";
  }
  else if(c>=240 && c<=255)
  {
     cout<<"class E";
  }


}
