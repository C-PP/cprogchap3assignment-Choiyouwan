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
//��ġ�� 2.54cm�̴�. ��ġ�� ������ �޾Ƽ� cm�� �ٲٴ� ���α׷��� �ۼ�����.*/

	void function(double height)
	{

		double value;

		value = height;
		printf("height = %.2f inch\n", value);
		value = height * 2.54;
		printf("If you convert your height to centimeter, it is %.2f cm", value); // �Ҽ��� ���ڸ� ���
	}
