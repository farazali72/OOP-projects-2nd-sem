
#include <iostream>
#include <string>
using namespace std;

struct Result {
	float midterm;
	float finalterm;
	float total;
	char grade;
};
struct Student{
	int rollnumber;
	string name;
	string department;
	Result r1;
};

int main(){
	const int SIZE = 3;
	
	Student s1[SIZE];
	
	for (int i = 0; i<SIZE; i++){
		cout<<"==Enter Details for student"<<i+1<<"=="<<endl;
		
		cout<<"Enter your Roll Number :";
		cin>> s1[i].rollnumber;
		cin.ignore();
		
		cout<<"Enter your Name :";
		getline(cin,s1[i].name);
		
		cout<<"Enter your department :";
		getline(cin,s1[i].department);
		
		cout<<"Enter your midTerm marks :";
		cin>>s1[i].r1.midterm;
		
		cout<<"Enter your FinalTerm marks :";
		cin>>s1[i].r1.finalterm;
		s1[i].r1.total = s1[i].r1.midterm + s1[i].r1.finalterm;
		
		float total = s1[i].r1.total;
		if(total>= 80){
			s1[i].r1.grade = 'A';
		}
		else if(total >= 60){
			s1[i].r1.grade = 'B';
		}
		else if(total>= 40){
			s1[i].r1.grade = 'C';
		}
		else{
			s1[i].r1.grade = 'F';
		}
		cout << endl;
		}
	cout<<endl;
	cout<<"                   Student Academic Records           "<<endl;
	cout<<"======================================================"<<endl;
	cout<<"Roll Number\n Name\n department\n mids\n Finals\n Total\nGrade "<<endl;
	for(int i=0; i<SIZE; i++){
		cout <<s1[i].rollnumber<<"\t"<<s1[i].name<<"\t"<<s1[i].department<<"\t"<<s1[i].r1.midterm<<"\t"<<s1[i].r1.finalterm<<"\t"<<s1[i].r1.total<<"\t"<<s1[i].r1.grade<<endl;
	}
	return 0;
}
