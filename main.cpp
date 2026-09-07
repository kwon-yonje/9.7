#include <iostream>

int main()
{
    int numofstudents{30}; 
    std::cout << "Enter num of students: ";
    std::cin >> numofstudents;
    std::cout << numofstudents << std::endl;
    // std::cout << sizeof(numofstudents) << std::endl;
    // std::cout << typeid(numofstudents).name() << std::endl;
    // std::cout << typeid(static_cast<double>(numofstudents)).name() << std::endl;

    return 0;
}