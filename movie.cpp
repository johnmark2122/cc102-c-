#include <iostream>

using namespace std;

int main () {
	int age;
	float money;
	string parent;
	
	cout << "Enter age: ";
	cin >> age;
	if (age < 13){
		cout << "With parent? ";
		cin >> parent;
		if (parent == "yes"){
			cout << "G,PG" << endl;
		} else 
			cout << "G" << endl;
		}if (age >= 13 && age <= 16){
			cout << "With parent?";
			cin >> parent;
		}if (parent == "yes"){
			cout << "G,PG,R" << endl;
		}else {
			cout << "G,PG" << endl;
		}if (age > 16){
			cout << "G,PG,R" << endl;
		}
		cout << "Enter money: ";
		cin >> money;
		if (money <= 7.50){
			cout << "Matinee";
		}else if (money >= 7.50){
			cout << "Evening";
		}
		
		
			
	
	
	
	
	return 0;
	
}