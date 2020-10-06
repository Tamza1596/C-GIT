#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void ListStudent(int score[],string name[],int std);
char Calgrade(int score);
int main()
{
	string name[50];
	int std=0,score[50];

	cout<<"Input Number of student : ";
	cin>>std;

	for(int i=0;i<std;i++){
		cout<<"Enter name  ["<<i+1<<"] : ";
		cin>>name[i];
		cout<<"Enter score ["<<i+1<<"] : ";
		cin>>score[i];	
		cout<<endl;
	}//for
	ListStudent(score,name,std);
	
}//main
void ListStudent(int score[],string name[],int std)
{
	for(int i=0;i<std;i++){
		cout<<"student name  : "<<name[i]<<setw(20)<<setfill(' ');
		cout<<"student score : "<<score[i]<<setw(20)<<setfill(' ');
		cout<<"Your grade is :";
		cout<<Calgrade(score[i]);
		cout<<endl;
	}//forshow
}//liststd
char Calgrade(int score)
{
	char grade;
	if(score>=80) grade='A';
	else if(score>=70) grade='B';
	else if(score>=60) grade='C';
	else if(score>=50) grade='D';
	else grade='F';
	return grade;
}//cal
