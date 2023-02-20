#include <iostream>

using namespace std;

int main (){
	float celcius, reamur, kelvin, fahrenhait;
	
	cin >> celcius;
	reamur = celcius * 0.8;
	kelvin = celcius + 273;
	fahrenhait = (celcius*1.8) + 32;
	
	cout << "Celcius: " << celcius << endl;
	cout << "Reamur: " << reamur << endl;
	cout << "Fahrenhait: " << fahrenhait << endl;
	cout << "Kelvin: " << kelvin << endl;
	
	return 0;
}
	
