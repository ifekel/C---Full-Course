#include <iostream>

int main(int argc, char *argv[])
{
	int num = 10;

	int value = num ? 5 : 10;

	std::cout << "The value is: " << value << std::endl;
}