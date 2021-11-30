#include <iostream>
using namespace std;
//137187 - Asher Yisrael Kutswa

//The Function Declaration for Division
double division(double a, double b){
	return a/b;
}

//Main Function starts here

int main(){
	double x, y;
	int z;
	do{
		cout<<"Welcome to the Division Calculator using a Function! \n"<<endl;
		cout<<"Kindly input two numbers : \n\n";
		cin>>x;
		cin>>y;
		cout<<"\n";
		z = division (x,y);
		cout<<x<<" divided by "<<y<<" is "<<z<<"\n"<<endl;
	}while(x!=0 && y!=0);
	return 0;
}
