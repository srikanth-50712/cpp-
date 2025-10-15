/*create a class student where rollno is non-static, 
but college name is static. show the state behaviour*/
#include<iostream>
using namespace std;

class Student {
private:
    int rollno;                    
    static string collegeName;     
public:
    Student(int r) {
        rollno = r;
    }
    static void setCollegeName(string name) {
        collegeName = name;
    }
    void display() {
        cout << "Roll No: " << rollno << ", College: " << collegeName << endl;
    }
};
string Student::collegeName = "Default College";

int main() {
    Student::setCollegeName("ADITYA UNIVERSITY");
    Student s1(101);
    Student s2(102);
    Student s3(103);
    s1.display();  
    s2.display();  
    s3.display();  

    return 0;
}
