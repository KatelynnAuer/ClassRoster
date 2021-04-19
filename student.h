#pragma once
#include "degree.h"
#include <string>
#include <iostream>
using namespace std;


class Student
{
public:
    const static int tableSize = 3;

private: 
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int* arrDaysToComplete;
    DegreeProgram dprog;

public:
    //default constructor
    Student();

    //full constructor
    Student(
        string studentID,
        string firstName,
        string lastName,
        string emailAddress,
        int age,
        int arrDaysToComplete[],
        DegreeProgram dprog
    );

    
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int* getDaysToComplete();
    DegreeProgram getDegreeProgram();

    
    void setID(string studentID);
    void setFirst(string firstName);
    void setLast(string lastName);
    void setEmail(string emailAddress);
    void setAge(int age);
    void setDaysToComplete(int arrDaysToComplete[]);
    void setDegreeProgram(DegreeProgram dprog);
    void print();

    
    ~Student();

};
