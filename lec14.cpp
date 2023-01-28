#include<iostream>
using namespace std;

typedef struct student
{
    int rollno;
    char grade;
    float perc;
} emp;

union prize
{
    int r1;
    float r2;
    double r3;
};

int main()
{
    struct student s1, s2;
    emp s3; // here instead of having to write the whole "struct student" in decln, we simply wrote it as emp using the typedef

    union prize p1;
    p1.r2 = 400.50;
    cout<<p1.r2<<endl;
    p1.r1 =300; //now the shared memory is taken up by r1, r2 will have some garbage value
    cout<<p1.r2<<endl; //r2 gets printed out as garbage

    //test comment
    s1 = {1, 'A', 91.5}; //elements inside list need to be in same order as in structunion def

    s3.rollno = 3;
    s3.grade = 'A';
    s3.perc = 89.6;

    cout<<"student s1 has roll no "<<s1.rollno<<", grade "<<s1.grade<<" and percentage "<<s1.perc<<endl;
    cout<<"student s3 has roll no "<<s3.rollno<<", grade "<<s3.grade<<" and percentage "<<s3.perc<<endl;

    enum meal {breakfast, lunch, dinner}; 
            //      0       1       2

    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    meal m1 = breakfast; //meal is a datatype now. you can use this datatype now accordingly.
    cout<<(m1==0)<<endl;
    cout<<(m1==1)<<endl;



    return 0;
}