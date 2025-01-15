#include <iostream>
#include<iostream>

using namespace std;
int main()
{
  //refrences are the aliases/another name for a variabl
  //declare using & and  must be initalized once declared
  //used in paramter passing
  
  int a= 10;
   int &b = a;
  
  cout<<"the value of a is:"<<b<<endl;
  
  b = 40;
  
   cout<<"the value of a is:"<<a<<endl;
}
