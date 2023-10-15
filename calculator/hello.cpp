#include <iostream>
#include <getopt.h>
using namespace std;
int main(int argc, char *argv[])
{
  if (argc < 5 || argc > 7)
  {
cout<< "Чтобы выбрать действие, введите один из параметров:" << endl<< "-m — умножение всех введенных значений" << endl << "-d — деление первого операнда на все остальные"<< endl << "Чтобы продолжить запустите программу с нужным параметром и введите значения через пробел"<< endl;
return 0;
  } 
int opt, i, r = 0, x, b ,t;
	while ((opt = getopt (argc, argv, "d:m:")) != -1)
  {
  switch (opt)
  {
case 'm':			
			for(i=4; i<argc; i++)
			{
			x = strtol(argv[i], NULL, 10);
			r *= x;
			}
		cout<< "Результат: "<< r<<endl;
	break;
	
	case 'd':	
				b = 0;
				for(i=4; i<argc; i++)
				{
					t = strtol(argv[i], NULL, 10);
				b /= t
				}
			cout<< "Результат: "<< b <<endl;
break; 
  }
  }
}
