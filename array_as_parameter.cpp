#include <iostream>
using namespace std;

void array_as_parameter(int *A, int n){
    A[0] =99;
    A[3] =98;
    
};
 
int * return_array(int n){
    int *a;
     a  = new int[n];
     int j = 99;
        
   for(int i=0;i<n;i++){
      a[i] = j + i;
   }
   return a;
     
 };
 
 int * both_in_one_function(int *A,int n){
     for(int i=0;i<n;i++){
        A[i] = i;
        
     }
     return A;
 }
     
 
int main()
{
   int A[5] = {1,5,7,8,9};
   
   for(int i=0;i<5;i++){
       cout<<i<<"the value is: "<<A[i]<<endl;
   }
   // arrays are always passed by address not by values
   array_as_parameter(A,5);
    for(int i=0;i<5;i++){
       cout<<i<<"the value after changed is: "<<A[i]<<endl;
   }
   
   //call return_array
   int *b;
   int size =100;
    b = return_array(size);
    for(int i=0;i<size;i++){
       cout<<"return value:"<<b[i]<<endl;
   }
   
   //both
   cout<<endl<<"new secrtion"<<endl;
   int d[5] = {45,98,87,65,32};
   int *c;
   
   c = both_in_one_function(d,5);
   for(int i=0;i<5;i++){
       cout<<"return value:"<<c[i]<<endl;
   }
    return 0;
}
