#include <iostream>
#include<fstream>
#include<string>
#include<stdio.h>
using namespace std;

char grade(int score);
int main(){
     int option,staffInput;
     int studentInput=0;
     string stEdit, findStudent,findStaff,line, Stu_del, Staff_del;
     ofstream stud;
      stud.open ("Students.txt");
     ofstream staff;
     staff.open("Staff.txt");


class Staff{
public:
    string surName,otherName,position,date_ofBirth;
    int age =0;
    char sex;
    int staff_ID = 0;
};

class Student{
public:
  string SurName,OtherName,dateOfBirth;
  int Age =0, stu_ID=0,course_score = 0;
  char Sex;
  string ID, courses;
  char student_grade;

};

Student student;
Staff staf;
    cout<<"Welcome to the School Management System"<<endl;

    cout<<"Please select your option"<<endl;

    cout<<"1.Student "<<"2.Staff"<<endl;
    cin>>option;

    if(option == 1)
    {  cout<<endl;
       cout<<"Welcome to the Student's page"<<endl;
       cout<<endl;
       cout<<"Select your option"<<endl;
       cout<<endl;

     while (studentInput!=5){
    cout<<"1.Add Student ";
    cout<<"2.Edit Student Records";
    cout<<"3.Delete Student Records"<<endl;
    cout<<"4.Print Academic Record" <<endl;
    cin>>studentInput;

    if (studentInput == 1)
    {
    cout<<"Enter StudentID"<<endl;
    cin>>student.stu_ID;
    cout<<"Enter Surname"<<endl;
    cin>>student.SurName;
    cout<<"Enter Other names"<< endl;
    cin>>student.OtherName;
    cout<<"Enter age"<<endl;
    cin>>student.Age;
    cout<<"M/F"<<endl;
    cin>>student.Sex;
    cout<<"Enter Date of Birth(DD \MM \YY)"<<endl;
    cin>>student.dateOfBirth;
    cout<<"Enter the courses of student"<<endl;
    cin>>student.courses;
    cout<<"Enter Score of the courses"<<endl;
    cin>>student.course_score;
     stud<<student.stu_ID<<" \t "<<student.SurName<<" \t " <<student.OtherName<<" \t "<<student.Age<<" \t "<<student.Sex<<" \t "<<student.dateOfBirth<<" \t "<<student.courses<<endl;
    cout<<endl;}

    else if(studentInput==2)
 {
    cout<<"Enter name of student whose data you want to update "<<endl;
    cin>>findStudent;

    ifstream myfile2; //for reading records
   myfile2.open("Students.txt");

    ofstream NewStu;
    NewStu.open("NewSt.txt");
    while (getline(myfile2, line))
    {
      if (line != findStudent)
        NewStu << line << endl;
    }
    myfile2.close();
    NewStu.close();
    remove("Students.txt");
    rename("NewSt.txt", "Students.txt");

    //Now add new Record to file
    cout<<"enter Surname"<<endl;
    cin>>student.SurName;

    cout<<"Enter other Name"<<endl;
    cin>>student.OtherName;

    ofstream stud;
    stud.open("Students.txt", ios::app | ios::out);
    stud<<student.SurName;
    stud<<student.OtherName;
}
   else if(studentInput==3)
 {
    cout<<"Enter name of Student's data you want to delete "<<endl;
    cin>>Stu_del;

    ifstream del; //for reading records
   del.open("Students.txt");

    ofstream StuDel;
    StuDel.open("DelStudent.txt");
    while (getline(del, line))
    {
      if (line != Stu_del)
        StuDel << line << endl;
    }
    del.close();
    StuDel.close();
    remove("Students.txt");
    rename("DelStudent.txt", "Students.txt");

    cout<<"Student Record deleted"<<endl;
    }
     }
    }
    else if(option == 2){
      cout<<"Welcome to the Staff's page"<<endl;
      cout<<endl;
      cout<<"Select your option"<<endl;
      cout<<endl;

      cout<<"1.Add Staff ";
      cout<<"2.Edit Staff Records";
      cout<<"3.Delete Staff Records"<<endl;
      cin>>staffInput;

    if (staffInput==1)
    {
    cout<<"Enter staff's Name"<<endl;
    cin>>staf.surName;
    cout<<"Enter Other names"<< endl;
    cin>>staf.otherName;
    cout<<"Enter age"<<endl;
    cin>>staf.age;
    cout<<"M/F"<<endl;
    cin>>staf.sex;
    cout<<"Enter Date of Birth(DD \MM \YY)"<<endl;
    cin>>staf.date_ofBirth;

     staff<<staf.surName<<" \t " <<staf.otherName<<" \t "<<staf.age<<" \t "<<staf.sex<<" \t "<<staf.date_ofBirth<<endl;
    cout<<endl;}
    }

     else if(staffInput==2)
 {
    cout<<"Enter name of staff's data you want to update "<<endl;
    cin>>findStaff;

    ifstream myfile; //for reading records
   myfile.open("Staff.txt");

    ofstream NewStf;
    NewStf.open("NewStff.txt");
    while (getline(myfile, line))
    {
      if (line != findStaff)
        NewStf << line << endl;
    }
    myfile.close();
    NewStf.close();
    remove("Staff.txt");
    rename("NewStff.txt", "Staff.txt");

    //Now add new Record to file
    cout<<"enter Surname"<<endl;
    cin>>staf.surName;

    cout<<"Enter other Name"<<endl;
    cin>>staf.otherName;

    ofstream stud;
    stud.open("Students.txt", ios::app | ios::out);
    stud<<staf.surName;
    stud<<staf.otherName;
}

   else if(staffInput==3)
 {
    cout<<"Enter Name of staff's data you want to delete "<<endl;
    cin>>Staff_del;

   ifstream delete; //for reading records
   delete.open("Staff.txt");

    ofstream StffDel;
    StffDel.open("DelStaff.txt");
    while (getline(delete, line))
    {
      if (line != Staff_del)
        StffDel << line << endl;
    }
    delete.close();
    StffDel.close();
    remove("Staff.txt");
    rename("DelStaff.txt", "Staff.txt");

    cout<<"Staff Record deleted"<<endl;
    }
    return 0;
}

char grade(int score)
{
    char grade;
    if (score > 80)
        grade = 'A';
    else if(score >= 70 && score <80)
        grade = 'B';
    else if(score >= 60 && score <70)
        grade = 'C';
    else if(score >= 50 && score <60)
        grade = 'D';
    else if(score >= 40 && score <50)
        grade = 'E';
    else if(score >= 75 && score <80)
        grade = 'F';
        return grade;
}
