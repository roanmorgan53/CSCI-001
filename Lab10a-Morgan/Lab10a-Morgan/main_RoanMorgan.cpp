//Roan Morgan
//Lab 10a: Ski Conditions 
//10.14.22
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Day {
private:
	double snowHeight = 0.0;
	int temperature = 0;
	int day = 01, month = 01, year = 2000;
	string dayName;
	
public:
	double getSnowHeight();
	void setSnowHeight(int arg);
	double getTemp();
	void setTemp(double arg);
	double getDay();
	double getMonth();
	double getYear();
	string getName();
	void setName(string arg);
	void setDate(int argDay, int argMonth, int argYear);
};

int main(void) {
	
	//project description
	cout << "Lab 10a: Ski Conditions\n\n";

	int day, month, year, temp;
	double tempHeight;

	vector<Day> week;

	Day sunday, monday, tuesday, wednesday, thursday, friday, saturday;

	cout << "Fill out the info provided: " << endl;

	sunday.setName("Sunday");
	week.push_back(sunday);

	monday.setName("Monday");
	week.push_back(monday);

	tuesday.setName("Tuesday");
	week.push_back(tuesday);

	wednesday.setName("Wednesday");
	week.push_back(wednesday);

	thursday.setName("Thursday");
	week.push_back(thursday);

	friday.setName("Friday");
	week.push_back(friday);

	saturday.setName("Saturday");
	week.push_back(saturday);

	for (int i = 0; i < week.size(); i++) {
		cout << week[i].getName() << endl;

		if (i == 0) {
			cout << "Input the Month as a digit (ex: 5 = may): ";
			cin >> month;
			cout << "Input the Day as a digit: ";
			cin >> day;
			cout << "Input the year (ex: 1999): ";
			cin >> year;
		}

		cout << "Input the Snow Height (inches): ";
		cin >> tempHeight;
		week[i].setSnowHeight(tempHeight);
		cout << "Input the Temperature (F): ";
		cin >> temp;
		week[i].setTemp(temp);
		cout << endl;
		week[i].setDate(day, month, year);
	}

	for (int i = 0; i < week.size(); i++) {
		cout << week[i].getName() << endl;
		cout << week[i].getMonth() << "/" << week[i].getDay()+i << "/" << week[i].getYear() << endl;
		cout << "Snow Height (in): " << week[i].getSnowHeight() << endl;
		cout << "Temperature (F): " << week[i].getTemp() << endl << endl;
	}
	
	return(0);
}

double Day::getSnowHeight()
{
	return snowHeight;
}

void Day::setSnowHeight(int arg)
{
	snowHeight = arg;
}

double Day::getTemp()
{
	return temperature;
}

void Day::setTemp(double arg)
{
	temperature = arg;
}

double Day::getDay()
{
	return day;
}

double Day::getMonth()
{
	return month;
}

double Day::getYear()
{
	return year;
}

string  Day::getName()
{
	return dayName;
}

void Day::setName(string arg)
{
	dayName = arg;
}

void Day::setDate(int argDay, int argMonth, int argYear)
{
	day = argDay;
	month = argMonth;
	year = argYear;
}
