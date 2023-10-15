#include <iostream>
#include <getopt.h>

using namespace std;

int main(int argc, char *argv[])
{

	{ if (argc < 5 || argc > 7)
    {
        cout<< endl<< "Чтобы выбрать действие, нужно ввести один из параметров:" << endl<< "-s — cуммирование всех введенных значений" << endl << "-m — Вычитание из первого операнда всех остальных"<< endl << "Для того чтобы продолжить запустите программу еще раз с нужным параметром, введите значения через пробел"<<"Количество операндов от 5 до 7"<< endl;
        return 0;
    }        

	int opt, i, r = 0, x, b ,t;
	while ((opt = getopt (argc, argv, "m:s:")) != -1)
        {
            switch (opt)
            {
                case 's':
        			for(i = 0; i<argc; i++)
        			{
            				cout<< i << ": "<< argv[i] << endl;
        			}			
        			for(i=2; i<argc; i++)
        			{
            			x = strtol(argv[i], NULL, 10);
            			r=r + x;
        			}
        		cout<< "Результат: "<< r<<endl;
               	break;
               	
               	case 'm':
    				for(i = 0; i<argc; i++)
   			 		{
        				cout<< i << ": "<< argv[i] << endl;
    				}	
    				b = 0;
    				for(i=2; i<argc; i++)
    				{
       					x = strtol(argv[i], NULL, 10);
          				t = strtol(argv[2], NULL, 10);
        				r=r + x;
        				b=t*2 - r;
    				}
    			cout<< "Результат: "<< b <<endl;
                break;       
            }
        }
    }
}

