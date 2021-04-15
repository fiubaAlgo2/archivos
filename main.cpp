#include <iostream>
#include <fstream>

int main() {

    std::ifstream file;
    file.open("../datos.txt");
    std::string word;

    while(file >> word){
        std::cout << word << " ";
    }

    return 0;
}

