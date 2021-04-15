#include <iostream>
#include <fstream>

int main() {

    std::ofstream file;
    file.open("../datos.txt");
    std::string text;
    int counter = 0;
    std::cout << "\nType something: ";
    std::cin >> text;

    while(file << text << " " && counter < 3)
    {
        std::cout << "\nType something: ";
        std::cin >> text;
        counter++;
    }

    return 0;
}
