#include <iostream>
using namespace std;
void swap_by_value(int a, int b){

    int temp = a;
    a=b;
    b= temp;
    
}

void swap_by_address(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b= temp;
    
}
void swap_by_refrence(int &a, int &b){
    int temp = a;
    a=b;
    b= temp;
    
}

int main()
{
  int x=12;
  int y =123;
  cout<<"the original values of x:"<<x<<endl;
  cout<<"the original values of y:"<<y<<endl<<endl;
  
  //here the acutal paramters will not change since the formal paramarters makes a copy of actual and then swap those
  //it will not affect the original paramters
  cout<<"SWAP BY VALUE>>>>"<<endl;
  swap_by_value(x,y);
  cout<<"the swapped (by value) values of x:"<<x<<endl;
  cout<<"the original (by value) values of y:"<<y<<endl;
  cout<<endl;
  
  //here we are passing the address of the actual paramters i.e pointers to the paramters hence the formal parametrs stores the
  //adresses of actual paramters hence it will affect the acutal parameters(we are swapping values stored at the addersses).
  //in actual parameters we pass Adddress and in formal parameters we declare as pointers(*)
  cout<<"SWAP BY Adddress>>>>"<<endl;
  swap_by_address(&x,&y);
  cout<<"the swapped (by address) values of x:"<<x<<endl;
  cout<<"the original (by address) values of y:"<<y<<endl;
  
  
  //refrences are nothing but the aliases it doesn't take extra memory
  //here we pass the acutal paramters and in formal we take accept the refrence.
  // sinnce its just another name it will affect the original values
  cout<<"SWAP BY Refrence>>>>"<<endl;
  swap_by_refrence(x,y);
  cout<<"the swapped (by refrence) values of x:"<<x<<endl;
  cout<<"the original (by refrence) values of y:"<<y<<endl;
  

    return 0;
}
