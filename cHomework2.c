#include <stdio.h>
void function(double height);
/* ANSI/ISO C function prototyping */

int main(void) {
	double height;  

	printf("please enter your height in inch(ex 12.2)\n");
	printf("I will convert your height to inches.\n");
	                     
	scanf_s("%lf", &height);      
	printf("I will summon the butler function.\n");
	function(height);
	
	return 0;
}
//인치당 2.54cm이다. 인치로 신장을 받아서 cm로 바꾸는 프로그램을 작성하자.*/

	void function(double height)
	{

		double value;

		value = height;
		printf("height = %.2f inch\n", value);
		value = height * 2.54;
		printf("If you convert your height to centimeter, it is %.2f cm", value); // 소숫점 두자리 출력
	}
