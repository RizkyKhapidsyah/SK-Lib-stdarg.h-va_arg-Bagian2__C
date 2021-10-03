#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int fungsi(int n, ...) {
	int i, j = 1, val = 0;
	va_list p;
	va_start(p, n);

	for (; j < n; ++j) {
		i = va_arg(p, int);
		val += i;
	}

	va_end(p);
	return val;
}

int main() {
	printf("Hasilnya adalah = %d\n", fungsi(4, 1, 2, 3));
	_getch();
	return 0;
}
