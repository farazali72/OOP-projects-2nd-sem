#include <iostream>
using namespace std;

void AddWeight(int weight){
	weight = weight+5;
	
	cout<<"Weight inside function"<<weight <<"kg"<<endl;;
}

int main(){
	int weight;
	
	cout<<"Enter patient weight:";
	cin>>weight;
	
	AddWeight(weight);
	cout<<"Weight in main after the function call:"<<weight<<endl;
	return 0;
}	
