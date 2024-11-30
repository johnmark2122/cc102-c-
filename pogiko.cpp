#include <iostream>
#include <string>

int main() {
	
	std :: string userInput;
	
	std :: cout << "enter a line of text: ";
	std :: getline(std::cin, userInput);
	
	std :: cout << "you entered: " << userInput << std :: endl;
	
	return 0;
	
}


