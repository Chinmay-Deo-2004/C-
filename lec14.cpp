#include<iostream>
using namespace std;

typedef struct student
{
    int rollno;
    char grade;
    float perc;
} emp;

int main()
{
    struct student s1, s2;
    emp s3; // here instead of having to write the whole "struct student" in decln, we simply wrote it as emp using the typedef

    s1.rollno = 1;
    s1.grade = 'A';
    s1.perc = 91.5;

    s3.rollno = 3;
    s3.grade = 'A';
    s3.perc = 89.6;

    cout<<"student s1 has roll no "<<s1.rollno<<", grade "<<s1.grade<<" and percentage "<<s1.perc<<endl;
    cout<<"student s3 has roll no "<<s3.rollno<<", grade "<<s3.grade<<" and percentage "<<s3.perc<<endl;


    return 0;
}