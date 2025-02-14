#include <iostream>
#include <fstream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string line;
	std::stringstream converter;
	std::string sNum1;
	std::string sNum2;
	int num1;
	int num2;

	inFile.open("data.csv");
	while(getline(inFile, line, ',')){
		std::cout << line << std::endl;
		
		converter.clear();
		converter.str("");
		
		converter.str(line);

		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');
		getline(converter, string, ',');

		converter.clear();
		converter.str(""); //do i need this?

		std::stringstream << sNum1 << " " << sNum2 //do I need << std::endl?
		std::stringstream >> num1 << num2
		
	} //end while loop

	return 0;
} //end main
