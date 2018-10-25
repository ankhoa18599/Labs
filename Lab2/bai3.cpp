#include <iostream>
#include<math.h>
using namespace std;

void tinhtoan(int &so1, char &pheptoan, int &so2);

int main()
{

	int so1;
	int so2;
	char pheptoan,confirm;
	do{
	tinhtoan(so1,pheptoan,so2);
	cout<<"\nNhan y hoac Y de tiep tuc N de ket thuc ";
	cin>>confirm;
	}while(confirm=='y'||confirm=='Y');
	return 0;
}

void tinhtoan(int &so1, char &pheptoan, int &so2)
{
	cout<<"Nhap so thu nhat: "; cin>>so1;
	cout<<"Nhap phep toan: "; cin>>pheptoan;
	cout<<"Nhap so thu hai: "; cin>>so2;
	
	switch(pheptoan)
	{
		case '+' : cout<<so1<<" + " <<so2<<" = "<<so1+so2; break;
		case '-' : cout<<so1<<" - " <<so2<<" = "<<so1-so2; break;
		case '*' : cout<<so1<<" * " <<so2<<" = "<<so1*so2; break;
		case '/' : cout<<so1<<" : " <<so2<<" = "<<float(so1)/float(so2); break;
		defaut: cout<<"Khong ton tai phep toan"; break;
	}
}
