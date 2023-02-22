
#include<iostream>
using namespace std;
class complexNumber{
     public:
     int real,img;
     void setValue(){
          cin>>real;
          cin>>img;
     };
     void sum(complexNumber c1, complexNumber c2){
          real = c1.real+c2.real;
          img = c1.img + c2.img;
     };
     void subtraction(complexNumber c1, complexNumber c2){
          real = c1.real-c2.real;
          img = c1.img - c2.img;
     };
     void divide(complexNumber c1, complexNumber c2){
          real = c1.real/c2.real;
          img = c1.img / c2.img;
     };
     void multiplication(complexNumber c1, complexNumber c2){
          real = c1.real*c2.real;
          img = c1.img * c2.img;
     };
     void display(){
          cout<<"The sum is "<<real<<" + i"<<img;
     }
};

int main(){
     int choice;
     complexNumber c1,c2,c3;
     cout<<"Enter the real and imaginary part of first complex number: ";
     c1.setValue();
     cout<<"Enter the real and imaginary part of second complex number: ";
     c2.setValue();
     cout<<"Enter the operation you want to do:\n";
    cout<<"1: Sum\t2: Subtraction\t3: Divide\t4: Multiplication  ";
    cin>>choice;
    switch(choice){
        case 1:{
            c3.sum(c1,c2);
            c3.display();
            break;
        }
         case 2:{
            c3.subtraction(c1,c2);
            c3.display();
            break;
        }
        case 3:{
            c3.divide(c1,c2);
            c3.display();
            break;
        }
        case 4:{
            c3.multiplication(c1,c2);
            c3.display();
            break;
        }
    }

}