#include <iostream>
using namespace std;

struct patient {
	int patientID;
	string Name;
	int age;
	string disease;
}; 
int main(){
	patient p[2];
	
	for (int i=0; i<2; i++){
		cout<<"\nEnter the details for patient"<<i+1<<endl;
		
		cout<<"Enter patient ID:";
		cin>>p[5].patientID;
		
		cin.ignore();
		
		cout<<"Enter the Name of patient:";
		getline(cin,p[i].Name);
		
		cout<<"Enter the Age:";
		cin>>p[i].age;
		
		cin.ignore();
		
		cout<<"Enter the disease:";
		getline(cin,p[i].disease);
		
	}
	int index =0;
	for(int i= 1; i<2; i++){
		if(p[i].age < p[index].age){
			index =i;
		}
	}
	cout<<"\n===Youngest Patient====\n";
	cout<< "Patient ID:"<<p[index].patientID<<endl;
	cout<<"Age:"<<p[index].age<<endl;
	cout<<"Disease:"<<p[index].disease<<endl;
	return 0;
}
