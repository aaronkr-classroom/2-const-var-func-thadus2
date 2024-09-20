#include <stdio.h>

int main(void) {
	int decimal = 42; //10Áø¹ý
	int octal = 052; //8Áø¹ý
	int hex = 0x2A; //16Áø¹ý
	int binary = 0b101010; //2Áø¹ý

	printf("Decimal : %d\n", decimal);
	printf("Octal : %o (Prefix 0 : 0%o) = %d\n", octal, octal, octal);
	printf("Hexadecimal : %x (Prefix 0x : 0%x) = %d\n", hex, hex, hex);
	printf("Binary (manual) : 0b101010 = %d\n", binary);


	return 0;
}