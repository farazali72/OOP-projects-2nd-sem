#include <iostream>
using namespace std;

struct product {
	int productID;
	string productName;
	float productPrice;
}; 
int main(){
	product p[5];
	
	for(int i=0; i<5; i++){
		cout<<"Enter the detail for product"<<i+1<<endl;
		
		cout<<"product ID:";
		cin>>p[i].productID;
		cin.ignore();
		
		cout<<"Product Name: ";
		getline(cin,p[i].productName);
		
		cout<<"Product Price:";
		cin>>p[i].productPrice;
	}
	int index = 0;
	for (int i=1;i<5; i++){
		if(p[i].productPrice < p[index].productPrice){
			index =i;
		}
	}
	cout<<"\n Cheapest products \n";
	cout<<"product ID: "<<p[index].productID<<endl;
	cout<<"product Name: "<<p[index].productName<<endl;
	cout<<"product Price: Rs. "<<p[index].productPrice<<endl;
	return 0;	
}
