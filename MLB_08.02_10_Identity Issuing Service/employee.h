#include<iostream>
#include<string>
#include<ctime>
using namespace std;


class employee
{
private:
	int Employee_ID;
	string Employee_Fname;
	string Employee_Lname;
	string Dob;

public:
	employee();
	employee(int id,string fname,string lname,string dob);
	void Display_Employee_Details();
	void Display_salary();




};
