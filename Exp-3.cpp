
#include<iostream>
using namespace std;
struct operation {
    public:
    int a,b;
    void input(){
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
    void sum(){
        cout<<"Addition:-\n"<<a+b;
    }
    void subtraction(){
        cout<<"Subtraction:-\n"<<a-b;
    }
    void divide(){
        cout<<"Division:-\n"<<a/b;
    }
    void multiplication(){
        cout<<"Multiplication:-\n"<<a*b;
    }
    void modulus(){
        cout<<"Modulus:-\n"<<a%b;
    }


}s;

int main(){
    int choice;
    cout<<"Enter the operation you want to do:\n";
    cout<<"1: Sum\t2: Subtraction\t3: Divide\t4: Multiplication\t5: Modulus  ";
    cin>>choice;
    switch(choice){
        case 1:{
            s.input();
            s.sum();
            break;
        }
         case 2:{
            s.input();
            s.subtraction();
            break;
        }
        case 3:{
            s.input();
            s.divide();
            break;
        }
        case 4:{
            s.input();
            s.multiplication();
            break;
        }
        case 5:{
            s.input();
            s.modulus();
            break;
        }
    }
}