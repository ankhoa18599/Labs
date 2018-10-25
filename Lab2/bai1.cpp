#include <iostream>
#include <conio.h>
using namespace std;
struct Phone
{
	int areacode;
	int exchange;
	int number;
};

int main()
{
	Phone my,your;
	char confirm;
	my.areacode= 212;
	my.exchange=-767;
	my.number=-8900;
	do{
		cout<<"Enter the area code, the exchange and the number: ";
		cin>>your.areacode>>your.exchange>>your.number;
		cout<<"My number is :"<<"("<<my.areacode<<")"<<my.exchange<<my.number<<endl
			<<"Your number is: "<<"("<<your.areacode<<")"<<your.exchange<<"-"<<your.number;
		cout<<"\n\ny or Y to continue N to finish ";
		cin>>confirm;
	}while(confirm=='y'||confirm=='Y');
	return(0);
}
