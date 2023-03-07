#include <iostream>

int main(int argc, char *argv[])
{
	int number[10];
	// ! The number array has been declared but not intialized a variable. So it is storing junk data
	// std::cout << number[3] << std::endl;
	// for (size_t i = 0; i < 10; i++)
	// {
	// 	std::cout << "number [ " << i << " ] : " << number[i] << std::endl;
	// }

	// ! Assigning values for index 0 and 1

	// number[0] = 10;
	// number[1] = 20;

	// for (size_t i = 0; i < 10; i++)
	// {
	// 	std::cout << "number [ " << i << " ] : " << number[i] << std::endl;
	// }

	// ! Looping through the array and assigning the value at each index the index * 10
	// for (size_t i = 0; i < 10; i++)
	// {
	// 	number[i] = i * 10;
	// 	std::cout << "number [ " << i << " ] : " << number[i] << std::endl;
	// }

	// ! Declare and initialize at the same time
	// double scores[5] = {12.4, 12.5, 44.2, 34.2, 11.7};
	// for (size_t i = 0; i < 5; i++)
	// {
	// 	std::cout << "number [ " << i << " ] : " << scores[i] << std::endl;
	// }

	// ! Omit the size of the array
	// int nums[] = {10, 20, 30, 40, 50};

	// ! Will print this with a range based loop
	// for (auto num : nums)
	// {
	// 	std::cout << num << std::endl;
	// }

	// ! Getting the sum of all the item in the array
	// int nums[] = {10, 20, 30, 40, 50};
	// int sum = 0;
	// for (auto num : nums)
	// {
	// 	sum += num;
	// 	std::cout << "Sum is currently: " << sum << std::endl;
	// }
	// std::cout << "Finally 'SUM' is: " << sum << std::endl;

	// ! Using the std::size() to get the size of the array
	// int nums[] = {10, 20, 30, 40, 50};
	// std::cout << std::size(nums) << std::endl;
	// for (size_t i = 0; i < std::size(nums); i++)
	// {
	// 	std::cout << "number [ " << i << " ] : " << nums[i] << std::endl;
	// }

	// ! Array of Characters
	// char message[5]{'H', 'E', 'L', 'L', 'O'};
	// // Print out the array using a loop
	// for (auto msg : message)
	// {
	// 	std::cout << msg;
	// }
	// std::cout << std::endl;

	// // ! Change a character in an array
	// message[1] = 'A';
	// for (char msg : message)
	// {
	// 	std::cout << msg;
	// }

	// ! Array of Characters cont'd
	// char message2[]{'h', 'e', 'l', 'l', 'o', '\0'}; // We are adding the null terminator at the end of the array
	// // the null terminator will be added to length of the array
	// std::cout << "message2: " << std::size(message2) << std::endl;

	// ! String Literal
	char message3[]{"Hello my name is Ifeanyi how are you my friend"};
	std::cout << "Message3: " << std::size(message3) << std::endl;
}