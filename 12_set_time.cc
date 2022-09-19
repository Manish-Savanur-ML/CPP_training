#include<iostream>
using namespace std;

//function to set date and time
void setDateTime(int date, int month, int year,int hour, int min, int sec)
{
	//buffer to format command
	char buff[35];
	//formatting command with the given parameters
	sprintf(buff,"sudo date -s \"%02d/%02d/%04d %02d:%02d:%02d\"",month,date,year,hour,min,sec);
	//execute formatted command using system()
	cout << buff;
	//system((const char *)buff);
	system(buff);
}

//main funcion
int main()
{
	//calling function by passing date and time
	setDateTime(12,9 , 2022,17, 44,0);
	cout<<endl;
	return 0;
}
