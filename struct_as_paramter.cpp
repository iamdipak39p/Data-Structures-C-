#include <iostream>
using namespace std;
struct Rect{
    int length;
    int breadth;
    int a[4];
};

int calcualte_area(struct Rect r1){
    
    return (r1.length * r1.breadth);
}

void calcualte_area_void(struct Rect r1){
    cout<<"the area is(from function): "<< (r1.length * r1.breadth)<< endl;
   
}

void calcualte_area_by_refrence(struct Rect *r1){
   r1 -> length = 100;
   r1 -> breadth = 100;
   
}


struct Rect* return_struct_pointer(int length,int breadth){
   struct Rect *r1;
   r1 = new Rect;
   r1 -> length = length;
   r1 -> breadth = breadth;
   return r1;
   
}

void print_array_in_struct(struct Rect r3){
    cout <<"the lenth and breadth are: "<<r3.length<<" and "<<r3.breadth;
    cout<<"the array elements are:"<<endl;
    for(int i= 0;i<4;i++){
        cout<<r3.a[i]<<endl;
    }
}

int main()
{
    struct Rect r = {10,54};
    
    cout<<"================CALL BY VALUE======================"<<endl;
    int area = calcualte_area(r);
    cout <<"the area of rectangle is: "<<area<< endl;
    calcualte_area_void(r);
    
    cout<<endl<<"================CALL BY Refrence======================"<<endl;
    calcualte_area_by_refrence(&r);
    cout <<"the area of rectangle(by refrence) is: "<<r.length*r.breadth<< endl;
     
    struct Rect *s;
    s = return_struct_pointer(25,25);
    cout <<"New area of rectangle(by refrence) is: "<<s->length*s->breadth<< endl;
    
    cout<<endl<<"================CALL BY Value for Array======================"<<endl;
    struct Rect r2 = {10,54,{45,45,98,87}};
    print_array_in_struct(r2);
    return 0;
   
