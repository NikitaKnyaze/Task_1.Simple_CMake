#include <iostream>
#include <windows.h>

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "������� ���: ";
	std::string name;
	std::cin >> name;
	std::cout << "������������, " << name <<"!\n";

	return 0;
}