#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int Celsius[] = {-20,0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300};
	int Fahrenheit;

	printf("Celsius\tFahrenheit\n");
	for (int i = 0; i < 17; i++) {
		Fahrenheit = ((Celsius[i] * 9) / 5) + 32;
		printf("    %3d\t       %3d\n", Celsius[i],Fahrenheit);


	}


	return 0;
}