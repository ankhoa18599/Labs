#include<iostream>
#include<conio.h>
using namespace std;
class time
{
	private :
		int hours, minutes, seconds;
	public :
		time()
		{
			hours=0;
			minutes=0;
			seconds=0;
		}
		time(int h, int m, int s)
		{
   			hours = h;
   			minutes = m;
   			seconds = s;
   		}
   	void show()
   	const
   	{
   		cout<<hours<<":"<<minutes<<":"<<seconds;
   	}
   	void count(time a, time b)
   	{
   		seconds+=a.seconds + b.seconds;
   		if(seconds>59)
   		{
   			seconds=seconds-60;
   			minutes++;
   		}
   		minutes+=a.minutes + b.minutes;	
   		if(minutes>59)
   		{
   			minutes=minutes-60;
   			hours++;
   		}
   		hours+=a.hours + b.hours;
   	}
};

int main()
{
	time a(3,45,58), b(5,20,25);
	time c;
	c.count(a,b);
	c.show();
	return 0;
}
