#include <iostream>
#include <string>

int main()
{
     Printing stuff to the console
    std::cout << "Hello world" << std::endl;

    std::cout << "The number is :" << 12 << std::endl;
    int num = {21};
    std::cout << "The second number is :" << num << std::endl;
    Error
    std::cerr << "std::cerr  output : Something went wrong " << std::endl;

    // log message
    std::clog << "std::clog output : This is a log message" << std::endl;

    Reading data in
    int age;
    std::string full_name;
    std::cout << "Please type your full Name  :" << std::endl;
    std::getLine(std::cin ,full_name);
    std::cout << "Type in your age :" << std::endl;
    std::cin >> age;
    std::cout << "Hello" << full_name << "you are" <<  age << "years old " << std::endl;
    std::string name;
    std::cout << "Please type your last name :" << std::endl;
    std::cout << "Please type in your Last name and age, separated by spaces  :" << std::endl;
    std::cin >> name >> age; // Input age and name
    std::cout << "Hello  " << name << "  You are " << age << "  Years old " << std::endl;
    std::cout << "Write again your name :" << std::endl;
    std::cin >> name;
    std::cout << "Please type your age :" << std::endl;
    std::cin >> num;
    std::cout << "Hello  " << name << " Your are " << num << " years old" << std::endl;
    
    std::cout << " Hello C++20" << std::endl;
    int age{21};
    std::cout << "This is the actual number  " << age << std::endl;
    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something is happened" << std::endl;
    
    int age1;
    std::string name;

    std::cout << "Please type your name and age" << std::endl;

    // std::cin >> name;
    // std::cin >> age1;
    std::cin >> name >> age1;
    std::cout << "Hello  " << name << " You are " << age1 << " years old " << std::endl;
    // Data with species    
    std::string ful_name;
    int age3;

    std::cout <<" Please type your full Name and age" << std::endl;
    std::getline(std::cin, ful_name);
    std::cin >> age3;
    std::cout << "Hello  " << ful_name << " You are " << age3 << " years old " << std::endl;

    return 0;
}