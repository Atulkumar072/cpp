#include<iostream>
using namespace std;
struct student {
    char name[20];
    int id;
    char dob[10];
    char branch[20];
}s;
int main(){
    int n;
    cout<<"Enter the number of  student ";
    cin>>n;
   student s[n];
    for(int i =0; i<n; i++){
        cout<<"Enter the student name "<<i+1<<endl;
        cin>>s[i].name;
        cout<<"Enter student id "<<endl;
        cin>>s[i].id;
        cout<<"Enter the student dob "<<endl;
        cin>>s[i].dob;
        cout<<"Enter the student Branch.  "<<endl;
        cin>>s[i].branch;
    }
    for(int i= 0; i < n; i++){
        cout<<"This is student no."<<i+1<<endl;
        cout<<"The student name is "<<s[i].name<<endl;
        cout<<"The student dob is "<<s[i].dob<<endl;
        cout<<"The student id is "<<s[i].id<<endl;
        cout<<"The student Branch is "<<s[i].branch<<endl;
        cout<<".............................................."<<endl;
    }
}