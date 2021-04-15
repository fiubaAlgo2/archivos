#include <iostream>
#include <fstream>

int main() {

    std::ifstream file;
    file.open("../datos.txt");
    std::string line;

    while(getline(file, line)){
        std::cout << line << std::endl;
    }

    return 0;
}
