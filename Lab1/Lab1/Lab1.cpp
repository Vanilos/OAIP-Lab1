#include <stdio.h> // Убираем надобность в стдшках
#include <math.h> // подключаем действия в математике
#define PI 3.14159265358979 // вводим всем извечтную константу
float x, otv; // инициализируем
int celotv; // инициализируем
int main() // начинаем основную функцию (действительно, зачем нам подпрограмма?)
{
	scanf_s("%f", &x); // вводим лучшее значениее
	otv = (17 % 5 + 3 * 18) * 16 * (x - PI) / (x + PI * 8) * 6;
	celotv = otv; // делаем неопределившуюся точку

	printf("Drobniy otv = %f \n", otv); // выводим дробный ответ
	printf("Celiy celotv = %d \n", celotv); // выводим ответ
	printf("Drobniy otv posle pererabotki = %d \n", (int) otv); // выводим определившуюся точку
	return 0;
}

