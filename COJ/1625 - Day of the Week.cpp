
#include <iostream>

using namespace std;


int main(){
	int a, m, d, y, day, year, month_num, T;
	string month;
	string months[12]={"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
	string days[7] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};

	cin >> T;
	while(T>0){
		cin >> year >> month >> day;
		for(month_num=0;month_num<12;month_num++)
			if(month == months[month_num])
				break;
		month_num++;
		
		a = (14-month_num)/12;
		y = year-a;
		m = month_num+(12*a)-2;
		d = (day+y+y/4-y/100+y/400+(31*m)/12)%7;
		
		cout << days[d] << endl;
		T--;
	}
}