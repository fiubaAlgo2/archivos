#include <iostream>
#include <fstream>

/*
 *  ios_base::beg -> Principio del stream
    ios_base::cur -> Posicion actual del stream
    ios_base::end -> Final del stream
 */
int main() {

    std::fstream file;
    file.open("../datos.txt");
    file.seekp(3, std::ios::cur);
    file << "Hello";

    return 0;
}
