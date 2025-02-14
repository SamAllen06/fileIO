#include <iostream>
#include <fstream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string line;
	std::string word;
	std::stringstream converter;
	std::string sNum1;
	std::string sNum2;
	int num1;
	int num2;
	int sum;
	int i;

	inFile.open("data.csv");
	while(getline(inFile, line)){
		
		converter.clear();
		converter.str("");
		
		converter.str(line);

		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');
		getline(converter, word, ',');
		
		converter.clear();
		converter.str("");

		converter << sNum1 << " " << sNum2;
		converter >> num1 >> num2;
		
		sum = num1 + num2;

		for (i = 0; i < sum; i++){
			std::cout << word << " ";
		} //end for loop
		std::cout << std::endl;
	} //end while loop

	return 0;
} //end main
