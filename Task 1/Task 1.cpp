#include <iostream>
#include <string>

std::string Fullname;
char Initial;
int Age;
int Phonenumber;
std::string Dateofbirth; //format dd/mm/yyyy


int main()
{
	//Get Fullname
	std::cout << "Enter your full name: \n";
	std::getline(std::cin, Fullname);

	//Get Inital
	std::cout << "Enter your initial: \n";
	std::cin >> Initial;

	//Get Age
	std::cout << "Enter your age: \n";
	std::cin >> Age;


	//Get Phonenumber
	std::cout << "Enter your phone number: \n";
	std::cin >> Phonenumber;


	//Get DateofBirth
	std::cout << "Using the format dd/mm/yyyy \n";
	std::cout << "Enter your date of birth: \n";
	std::cin >> Dateofbirth;

	//Print to console
	std::defaultfloat;
	std::cout << "--------------------------------\n";
	std::cout << "| Name       |" << Fullname << "\n";
	std::cout << "| Initial    |" << Initial << "\n";
	std::cout << "| Age        |" << Age << "\n";
	std::cout << "| Phone num  |" << Phonenumber << "\n";
	std::cout << "| Birthday   |" << Dateofbirth << "\n";
	std::cout << "--------------------------------\n";
}

