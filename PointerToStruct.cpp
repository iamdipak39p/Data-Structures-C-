#include <stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

struct Rect{

    int length;
    int breadth;
    
};

int main()
{
   struct Rect r = {10,23};
   cout<<"the legth is : "<<r.length<<endl;
   cout<<"the breadth is: "<<r.breadth<<endl;
   
   
   //using pointer
   struct Rect *p;
   p = &r;
   cout<<"the length using pointer is: "<< p -> length<<endl;
   cout<<"the breadth using pointer is: "<< p -> breadth<<endl;
   
   
   
     // Allocate memory dynamically
     Rect *q = new struct Rect;
     q -> length = 400;
     q -> breadth = 500;
     
     cout <<"the length is: "<<q -> length<<endl;
     cout <<"the breadth is: "<<q -> breadth<<endl;
    
    // Don't forget to free the dynamically allocated memory
    delete q;


    return 0;
}
