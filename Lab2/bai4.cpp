#include<iostream> 
#include<conio.h> 
using namespace std; 

struct Phanso 
{
	int tuso;
	int mauso; 
};

Phanso cong(Phanso f1, Phanso f2);
Phanso tru(Phanso f1, Phanso f2);
Phanso nhan(Phanso f1, Phanso f2);
Phanso chia(Phanso f1, Phanso f2);

  
int main() 
{
	int tuso1,mauso1,tuso2,mauso2;
	char pheptoan,confirm; 
	do{
		do{
			cout<<"Nhap phan so thu nhat tu so va mau so (mauso !=0): "; 
			cin>>tuso1>>mauso1;
		}while(mauso1==0);
		cout<<"Nhap phep toan: "; cin>>pheptoan;
		do{
			cout<<"Nhap phan so thu nhat tu so va mau so (mauso !=0): "; 
			cin>>tuso2>>mauso2;
		}while(mauso2==0);
		Phanso f1={tuso1, mauso1};
		Phanso f2 ={tuso2, mauso2};
		Phanso ketqua;
		switch(pheptoan)
		{
			case '+' : {
				ketqua = cong(f1, f2);
				cout<<"Ket qua phep cong la:";
				if(ketqua.mauso==0) cout<< " Phan so khong ton tai";
				else if(ketqua.tuso==0) cout<< "0";
				else cout<< ketqua.tuso<<"/"<<ketqua.mauso; 
				break;
			}
			case '-' :{
				ketqua = tru(f1, f2);
				cout<<"Ket qua phep tru la:";
				if(ketqua.mauso==0) cout<< " Phan so khong ton tai";
				else if(ketqua.tuso==0) cout<< "0";
				else cout<< ketqua.tuso<<"/"<<ketqua.mauso; 
			}
			case '*' :{
				ketqua = nhan(f1, f2);
				cout<<"Ket qua phep nhan la:";
				if(ketqua.mauso==0) cout<< " Phan so khong ton tai";
				else if(ketqua.tuso==0) cout<< "0";
				else cout<< ketqua.tuso<<"/"<<ketqua.mauso; 
			} 
			case '/' :{
				ketqua = chia(f1, f2);
				cout<<"Ket qua phep chia la:";
				if(ketqua.mauso==0) cout<< " Phan so khong ton tai";
				else if(ketqua.tuso==0) cout<< "0";
				else cout<< ketqua.tuso<<"/"<<ketqua.mauso; 
				break;
			}
			defaut: cout<<"Khong ton tai phep toan"; break;
		}
	cout<<"\nNhan y hoac Y de tiep tuc N de ket thuc ";
	cin>>confirm;
	}while(confirm=='y'||confirm=='Y');
	return 0; 
} 
  

Phanso cong(Phanso f1, Phanso f2) 
{ 
    Phanso ketqua={(f1.tuso * f2.mauso) + (f2.tuso * f1.mauso), f1.mauso * f2.mauso}; 
    return ketqua; 
  
}

Phanso tru(Phanso f1, Phanso f2) 
{ 
    Phanso ketqua={(f1.tuso * f2.mauso) - (f2.tuso * f1.mauso), f1.mauso * f2.mauso}; 
    return ketqua; 
  
}

Phanso nhan(Phanso f1, Phanso f2) 
{ 
    Phanso ketqua={(f1.tuso * f2.tuso), f1.mauso * f2.mauso}; 
    return ketqua; 
  
}

Phanso chia(Phanso f1, Phanso f2) 
{ 
    Phanso ketqua={(f1.tuso * f2.mauso), f1.mauso * f2.tuso};
    return ketqua; 
  
}

