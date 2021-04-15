#include <iostream>
#include <fstream>
#include <unistd.h>

std::string get_current_dir() {
    char buff[FILENAME_MAX];
    getcwd( buff, FILENAME_MAX );
    std::string current_working_dir(buff);
    return current_working_dir;
}

int main()
{
    std::ifstream archivo;
    archivo.open("datos.txt");

    if(!archivo)
    {
        std::cout << "No se pudo abrir el archivo" << std::endl;
        std::cout << get_current_dir() << std::endl;
    }

    else {
        std::cout << "Archivo abierto correctamente" << std::endl;
    }


    return 0;
}