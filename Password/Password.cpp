#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\nBecause the code did not check that there would be '\\0' at the end of the password. When the user enters a password that the size of it is 16 , there will be an overflow and the program will print Congratulations by changing the incorrect variable to false.Therefore, when doing this, the system is bypassed.In addition, you can see that when the user enters the correct password, the program will change the variable incorrect to false and then the program will print Congratulations\n";

	return 0;
}
