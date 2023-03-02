
#include<iostream>
using namespace std;

class student{
    public: 
    char name[10];
    int roll, marks[3];
    float percentage;
    char subjects[3][10];

    void insertName(){
        cout<<"Enter the student name: ";
        cin>>name;
    }
    void insertRollno(){
        cout<<"Enter the student rollno: ";
        cin>>roll;
    }
    void insertSubjects(){
        cout<<"Enter the 3 subjects:\n";
        for(int i = 0; i < 3; i++){
            cout<<"Enter the subject "<<i+1<<": ";
            cin>>subjects[i];
        }
    }
     void insertMarks(){
        cout<<"Enter the marks for each subject:\n";
        float sum = 0;
        for(int i = 0; i < 3; i++){
            cout<<"Enter the marks for "<<subjects[i]<<": ";
            cin>>marks[i];
            sum += marks[i];
        }
        percentage = (sum/300)*100;
    }
};

int main(){
    int no;
    cout<<"Enter the number of students: ";
    cin>>no;

    student *s = new student[no];

    for(int i = 0; i < no; i++) {
        cout<<"\nEnter details of student "<<i+1<<":\n";
        s[i].insertName();
        s[i].insertRollno();
        s[i].insertSubjects();
        s[i].insertMarks();
    }

    cout<<"\nDetails of all students:\n\n";
    for(int i = 0; i < no; i++) {
        cout<<"Student "<<i+1<<" details:\n";
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll No.: "<<s[i].roll<<endl;
        cout<<"Subjects:\n";
        for(int j = 0; j < 3; j++){
            cout<<s[i].subjects[j]<<endl;
        }
        cout<<"Marks:\n";
        for(int j = 0; j < 3; j++){
            cout<<s[i].subjects[j]<<": "<<s[i].marks[j]<<endl;
        }
        cout<<"Percentage: "<<s[i].percentage<<"%\n\n";
    }

    delete[] s;
    return 0;
}
