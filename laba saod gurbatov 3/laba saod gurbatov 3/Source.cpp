#include "Header.h"

unsigned int logic::cycle(unsigned int& a, unsigned int b) {                   // ����
    for (int i = 0; i < b; i++)
        a = a + 1;
    return a;
}
unsigned int logic::recurs(unsigned int a, unsigned int b) {                   // ��������
    if (b == 0)
        return a;
    else
        return recurs(a, b - 1) + 1;
}