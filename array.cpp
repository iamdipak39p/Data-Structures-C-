#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int width;
    char random;
};
int main()
{
    
    // Arrays
   int a[5];
   a[0] = 1;
   a[1] = 2;
   for(int i=0;i<5;i++){
       cout << a[i];
       cout <<endl;
   }
   cout<<sizeof(a)<<endl;
   
   
   //structures
   struct rectangle r = {122,322};
   cout << "the length is: "<<r.length<<endl;
   cout << "The width is: "<< r.width<<endl;
   
   r.length = 199;
   r.width = 299;
   
    cout << "the length is after changing: "<<r.length<<endl;
   cout << "The width is: after changing: "<< r.width<<endl;
   
   cout<<"The are of rectange is: "<<r.length*r.width<<endl;
   
   //padding
   rectangle r1 = {1, 2, '3'};
    rectangle r2 = {2, 5, '5'};
   cout<<sizeof(r1)<<endl;
   cout<<sizeof(r2)<<endl;
   //here the r1 or r2 should take 9 bytes(4+4+1) but it takes size of the nearest
   //data type which is called as padding.it alocates 4b but uses only 1b.
   

    return 0;
}
