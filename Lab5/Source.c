#include <locale.h>

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


void task0() //(пример)
{
	setlocale(LC_ALL, "RUS");
	double Res ,Res1, Res2, Res3, Res4, Res5, Result, y = 3, x = 1;
Res1 = 0.5 * y;
Res2 = pow(x, Res1);
Res3 = sin(Res2);
Res4 = y + 8e-4;
Res5 = pow(Res4, 1 / 5.f);
Result = Res3 + Res5;
printf("Ответ:%.3f", Result);
}
void task1()
{
	setlocale(LC_ALL, "RUS");
	float gr, result;
	printf("Введите значение градусов:\n");
	scanf("%f", &gr);
	result = (gr * M_PI) / 180;
	printf("%.6f", sin(result));
}
void task2()
{
	setlocale(LC_ALL, "RUS"); //вариант 5 p=3,x=4.1,y=510.1


	float x, y, b, a, p = 3;
	printf("Введите x:\n");
	scanf("%f", &x);

	a = sqrt(3*x);
	b = 3 * pow(x, 2)+sqrt(a);
	y = pow(log(b*b), 3) + a * x;
	
		
	printf("y=%f\n",y);
	printf("a=%f b=%f", a, b);
}







