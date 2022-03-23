#include "Header.h"

void dynamic::algoritm(int* x, int n) {             // �������� �������. ���������������� x - ������� n - ������ �������
    int tmp;
    for (int i = 0; i < n; i++) {                   // ���� ���������� ������� �� 1 �� n
        for (int k = i; k >= 0; k--) {              // ���������� �������   �� n �� 1 
            if (k == 0 or k == i - 1) {             // ���� ������� ������� ������� ��� ��������� �� ��������� ���������
                x[k] = 1;
            }
            else {                                  // ����� ��������� ������� ������� ������ ����� ���������� ��������� ������� x[k] = x[k] + x[k - 1]
                x[k] = x[k] + x[k-1];
            }
        }
        show(x, i);                                 // ����� �������
        std::cout << std::endl;
    }
}

void dynamic::show(int *x,int n) {                  // ����� ������� � �������
    for (int i = 0; i < n; i++)
    {
        std::cout << x[i] << " ";
    }
}