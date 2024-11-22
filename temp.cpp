#include <iostream>

using namespace std;

int main() {
	int temp;
	
	cout << "Enter Temperature : ";
	cin >> temp;
	if ( temp < 32) {
		cout << "Bring a heavy jacket.";
		}	 else if  ( temp >= 32 && temp  <= 50){
			cout << "Bring a light jacket.";
		}	else {
			cout << "Bring any jacket";
		}
	
	
	
	
	return 0;
}

