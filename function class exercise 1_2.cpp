#include <iostream>
using namespace std;
//137187 - Asher Yisrael Kutswa

//The Function Declaration for Division
double myTriangle(double base, double height){
	double area;
	area=base * height * 0.5;
	return area;
}

//Main Function starts here

int main(){
	double b, h, a;
	char response;
	do{
		cout<<"Welcome to the Triangle Area Calculator using a Function! \n"<<endl;
		cout<<"Kindly input the base : \n\n";
		cin>>b;
		cout<<"\n";
		cout<<"Kindly input the height : \n\n";
		cin>>h;
		cout<<"\n";
		a = myTriangle (b,h);
		cout<<"The area of the Triangle by is : "<<a<<"\n";
		cout<<"Do you desire to continue ? (Y/N)";
		cout<<"\n";
		cin>>response;
	}while(response=='Y');
	return 0;
}
