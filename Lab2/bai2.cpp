#include <iostream>
#include<math.h>
using namespace std;

void tinhLai(float &tiengui, int &namgui, float &laisuat);

int main()
{
	float tiengui;
	int namgui;
	float laisuat;
	tinhLai(tiengui,namgui,laisuat);
	return 0;
}
void tinhLai(float &tiengui, int &namgui, float &laisuat)
{
	do 
	{
		cout<<"Nhap so tien gui:"; cin>>tiengui;
		if(tiengui<=0)
		{
			cout<<"So tien gui phai lon hon 0! Vui long nhap lai!"<<endl;
		}
	}while(tiengui<=0);
	
	do 
	{
		cout<<"Nhap so nam gui:"; cin>>namgui;
		if(namgui<=0)
		{
			cout<<"So nam gui phai lon hon 0! Vui long nhap lai!\n";
		}
	}while(namgui<=0);
	
	do 
	{
		cout<<"Nhap lai suat moi nam:"; cin>>laisuat;
		if(namgui<=0)
		{
			cout<<"Lai suat phai lon hon 0! Vui long nhap lai!\n";
		}
	}while(namgui<=0);
	
	float tongtien=0;
	tongtien=tiengui*pow((1+(laisuat*1.0/100)),namgui);
	cout<<"Tong tien thu duoc sau "<< namgui << "la: "<<tongtien<<endl;
}


