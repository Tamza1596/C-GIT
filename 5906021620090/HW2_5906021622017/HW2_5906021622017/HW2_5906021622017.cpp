#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void cal_com(float, float, float);

int main() {

	string name, name2;
	float salary, sale, persen;

	cout << "Enter Name : ";
	cin >> name >> name2;
	cout << "Enter Salary :";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Comission Percent : ";
	cin >> persen;

	cout << "\n----------output-----------\n";
	cout << "Your name = " << name << " " << name2;
	cal_com(salary, sale, persen);
	cout << "------------------------------\n";

}//main
void cal_com(float salary, float sale, float persen)
{
	cout << "\nTotal Revenue " << salary + (sale * (persen / 100)) << " Bath\n";
}