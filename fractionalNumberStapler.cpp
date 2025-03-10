#include <iostream>
#include <string>

// Функция для составления числа с плавающей точкой из целой и дробной частей
double composeFloatNumber(const std::string& integerPart, const std::string& fractionalPart) {
    // Объединяем целую и дробную части с точкой в середине
    std::string fullNumber = integerPart + "." + fractionalPart;
    
    // Преобразуем строку в число с плавающей точкой
    return std::stod(fullNumber);
}

int main() {
    // Ввод целой части от пользователя
    std::string integerPart;
    std::cout << "Enter the integer part: ";
    std::cin >> integerPart;

    // Ввод дробной части от пользователя
    std::string fractionalPart;
    std::cout << "Enter the fractional part: ";
    std::cin >> fractionalPart;

    // Составляем и выводим новое число с плавающей точкой
    double result = composeFloatNumber(integerPart, fractionalPart);
    std::cout << "Resulting float number: " << result << std::endl;

    return 0;
}
