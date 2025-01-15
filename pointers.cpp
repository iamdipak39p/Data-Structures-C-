*******************************************************************************/
#include <iostream>
#include<iostream>
#include<stdlib.h>

struct strct{
    int a;
    int b;
};

using namespace std;
int main()
{
  int a= 10;
 //declare pointer using *
 int *p;
 //initialize using &
  p =&a; //it pointer to the address of a 
 
 //access
 cout<<"the address of a is: "<<p<<endl;
 cout<<"the value at a is: "<<*p<<endl;
 
 //whenever you declare variable it will take memory in stack if you want to allocate in 
 //heap use mallock function in c 
 int *r;
 r = (int *)malloc(5*sizeof(int));
 r[0]=23;
 r[2] = 99;
 r[1] =11;
 
 for(int i=0;i<5;i++){
     cout<<"the values using mallock :"<<r[i]<<endl;
 }
 
 //pointer  to an array
 int A[5] = {1,2,3,4,5};
 int *q;
 q=A;   //dont use & since A itself is starting address of A i.e. A[0]
 
 for(int i=0; i<5;i++){
     cout<<q[i]<<endl;
   
 }
 
 //create memory in heap in c++
 int *s;
  s = new int[5];
 cout<<"enter 5 values";
  for(int i=0; i<5;i++){
     cin >> s[i];
   
 }
 
  for(int i=0; i<5;i++){
     cout<<"The values are:"<<s[i]<<endl;
   
 }
 
 
//   alway remove the memory if you dynamically alocate memory in heap using delete else 
// it will lead to memory leakage
delete [] s;

//whatver the data type pointer takes same amount of memory;
//data type (int, char, float, double, or struct) associated with a pointer refers to
//the type of the variable it points to, not the pointer itself.
int *p1;
char *p2;
float *p3;
double *p4;
struct strct *p5;

cout<<"the size is :"<<sizeof(p1);
cout<<"the size is :"<<sizeof(p2);
cout<<"the size is :"<<sizeof(p3);
cout<<"the size is :"<<sizeof(p4);
cout<<"the size is :"<<sizeof(p5);

    return 0;
}
