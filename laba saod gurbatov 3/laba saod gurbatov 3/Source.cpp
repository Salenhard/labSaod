#include "Header.h"
#include <fstream>

unsigned int logic::cycle(unsigned int a, unsigned int b) {                   // цикл
    for (int i = 0; i < b; i++)
        a = a + 1;
    return a;
}
unsigned int logic::recurs(unsigned int a, unsigned int b) {                   // рекурсия
    if (b == 0)
        return a;
    else
        return recurs(a, b - 1) + 1;
}

void logic::f_out(unsigned int a, unsigned int b){
    std::ofstream f;
    f.open("MyFile.txt");
    f << "Cycle: " << cycle(a, b) << std::endl;
    f << "Recurs: " << recurs(a, b) << std::endl;
    f.close();
}