#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name ,lastname;
	int salary,sale,commission ;
	cout << "********Homework2*****\n";
	cout << "Enter Name :";
	cin >> Name >> lastname;
	cout << "Enter Salary :";
	cin >> salary;
	cout << "Enter Sale :";
	cin >> sale;
	cout << "Enter Commission Precent :";
	cin >> commission;
	cout <<"Your Name = " << Name << lastname << endl;
	cout << "Total Revenue \t =" << (sale * commission / 100)+salary << endl;
	return (0);
}