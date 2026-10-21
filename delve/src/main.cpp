#include <iostream>
#include <string_view>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cerr << "usage: delve <command> [arguments...]\n";
        return 1;
    }

    const std::string_view command{ argv[1] };
    std::string name{};
    int age{};

    if (command == "greet") 
    {
        std::cout << "Welcome to Delve!" << "\n";
        
        std::cout << "What is your name, adventurer?" << "\n";
        std::cin >> name; // checks for non number input while reading to throw error

        std::cout << "How many winters have you seen?" << "\n";
        std::cin >> age;

        std::cout << "Well met, " << name << "!" << "\n";
        std::cout << "In ten winters you will be " << age + 10 << "." << "\n";
        std::cout << "That is " << age * 12 << " moons so far." << "\n";
    
        return 0;
    }

    std::cerr << "Unknown command: " << command << '\n';
    return 1;
}
