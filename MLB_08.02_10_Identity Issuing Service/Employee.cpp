// Employee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "employee.h"
using namespace std;

employee::employee()
{
   cout << "Employee Details :- "<< endl;
}

employee::employee(int id, string fname, string lname, string dob)
{
	Employee_ID = id;
	Employee_Fname = fname;
	Employee_Lname = lname;
	Dob = dob;
}

void employee::Display_Employee_Details()
{
  cout << "Employee_ID :- "<< Employee_ID  << endl;
  cout << "Employee_Fname :- "<< Employee_Fname  << endl;
  cout << "Employee_Lname :- "<< Employee_Lname  << endl;
  cout << "Dob :- "<< Dob << endl;
}

void employee::Display_salary()
{
}
