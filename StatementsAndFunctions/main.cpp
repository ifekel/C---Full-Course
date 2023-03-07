#include <iostream>

int addNumbers(int firstNum, int secondNum) {
    int result = firstNum + secondNum;
    return result;
}

int multiplyNumbers(int num1, int num2) {
    int product = num1 * num2;
    return product;
}

int main() {

    int first_number = 30;
    int second_number = 20;

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(first_number, second_number);
    std::cout << "Sum: " << sum << std::endl;

    int product = multiplyNumbers(first_number, second_number);
    std::cout << "Product: " << product << std::endl;

    int name;
    std::cin >> name;
    
    std::cout << "Name: " << name << std::endl;
    return 0;
}
