#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
	cout << fixed << setprecision(2);
	cout << "Celsius????Fahrenheit??? | Fahrenheit???????Celsius" << endl;
	double cel = 40.0;
	double fal = 120.0;
	for (int i = 0; i < 10; i++) {
		cout << cel << "\t" << celsius_to_fah(cel) << "\t" << "|";
		cout << "\t" << fal << "\t" << fahrenheit_to_cels(fal);
		cout << endl;
		cel -= 1.0;
		fal -= 10;
	}
	return 0;
}