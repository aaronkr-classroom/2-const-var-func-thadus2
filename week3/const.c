#include <stdio.h>

int main(void) {
	const float VERSION_NUMBER = 2.3;
	const int DAYS_IN_WEEK = 7; 
	const float PI = 3.14159f;  
	const double GRAVITY = 9.80665;

	const char LETTER_A = 'A';
	const char NEW_LINE = '\n';
	const char TAB = '\t';

	const char* GREETING = "Hello World!~";

	printf("������ ��� : %c", NEW_LINE);
	printf("�������� �� : %d%c", DAYS_IN_WEEK, NEW_LINE);
	printf("�� ������ ���� : 12inch * %.5f%c", PI, NEW_LINE);
	printf("�߷� : %.5f m/s^2%c", GRAVITY, NEW_LINE);

	printf("%c%c%c%c%c", LETTER_A, TAB, LETTER_A, TAB, LETTER_A);

	printf("%s%c", GREETING, NEW_LINE);

	return 0;
}