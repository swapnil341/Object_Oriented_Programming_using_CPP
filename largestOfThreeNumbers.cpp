#include <iostream>
int main()
{
    int number1, number2, number3;
    std::cout << "Largest Of Three Numbers" << std::endl;
    std::cout << "1st Number: ";
    std::cin >> number1;
    std::cout << "2nd Number: ";
    std::cin >> number2;
    std::cout << "3rd Number: ";
    std::cin >> number3;
    if (number1 > number2 && number1 > number3)
        std::cout << number1 << " is Largest";
    else if (number2 > number1 && number2 > number3)
        std::cout << number2 << " is Largest";
    else
        std::cout << number3 << " is Largest";
    return 0;
}