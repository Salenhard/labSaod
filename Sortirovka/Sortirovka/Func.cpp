#include"Func.h"

void sort::fillMassRand(double* a, int n) {						// ���������� ������� ���������� �������
	srand(time(0));
	// ��������� ������ ���������� ������� [-50;50]
	for (int i = 0; i < n; i++) {
		a[i] = rand()%200-100;
	}
}

void sort::fillMassIn(double* a, int n) {					// ���������� ������� ������
	// ��������� ������ �������
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void sort::printMass(double* a, int n) {					// ����� ������� �� �����
	// ����� ������� �� �����
	for (int i = 0; i < n; i++) {
		if ((i + 1) % 10 == 0)
			cout <<setw(4)<< a[i] << endl;
		else
			cout << setw(4) << a[i];
	}
	cout << endl;
}

void sort::fPrintMas(double* a, int n, ofstream& f){			// ����� ������� � ����
		// ����� �������  � ����
	for (int i = 0; i < n; i++) {
		if ((i + 1) % 10 == 0)
			f << setw(4) << a[i] << endl;
		else
			f << setw(4) << a[i];
	}
	f << endl;
}

void sort::copyMass(double* a, double* b, int n){			// �������� ������ 1 � ������ 2
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
}

void sort::swap(int i, int j, double* a) {				// ����������� �������� ���������
	double temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void sort::bubble(double* a, int n) {				// ���������� ���������
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(j, j + 1, a);
			}
		}
	}
}

void sort::choice(double* a, int n) {				// ���������� �������
	int smi;
	for (int i = 0; i < n-1;i++) {
		smi = i;
		for (int j = i+1; j < n;j++) {
			if (a[j]<a[smi]) 
				smi = j;
		}
		swap(i, smi, a);
	}
}

void sort::inserts(double* a, int n){				// ���������� ���������
	double temp;
	int i, j;
	for (i = 1; i < n; i++) {
		j = i;
		temp = a[i];
		while (j > 0 && temp < a[j - 1]) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = temp;
	}

}

void sort::fast(double* a, int first, int last){					// ���������� �������
		int mid;
		int f = first, l = last;
		mid = a[(f + l) / 2]; //���������� �������� ��������
		do
		{
			while (a[f] < mid) f++;
			while (a[l] > mid) l--;
			if (f <= l) //������������ ���������
			{
				swap(f,l,a);
				f++;
				l--;
			}
		} while (f < l);
		if (first < l) fast(a, first, l);
		if (f < last) fast(a, f, last);
}

void sort::shell(double* a, int n) {								// ���������� �����
		int d = n/2;		// ���������� �� ������������ ����������, ����� ��������� ���.
		int i, j;
		while (d > 0)
		{
			for ( i = 0; i < n - d; i++)
			{
				j = i;
				while (j >= 0 && a[j] > a[j + d])
				{
					swap(j,j+d,a);		// ������ �������� �������
					j--;
				}
			}
			d = d / 2;
		}
}