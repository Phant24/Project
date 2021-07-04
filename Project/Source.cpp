#include<iomanip> 
#include<iostream> 
#include <Windows.h> 
 

using namespace std; 


int main() 

{ 

SetConsoleCP(1251); 
SetConsoleOutputCP(1251); 

 

int typ,start; 

unsigned  int chislo1 = 0, chislo2 = 0, result = 0; 

start: 

cout << "Запустити калькулятор?" << endl; 

cout << "1 -так , 2 - ні" << endl; 

cin >> start; 

switch (start) 

{ 

case 1: 

cout << "Калькулятор запущений" << endl; 

cout << "		Калькулятор шістнадцяткової системи числення	" << endl; 

 

   cout << "Введіть перше число в шістнадцятковій системі числення(0-9,a-f)" << endl; 

cin >> hex >> chislo1; 

 

cout << "Введіть друге число  в шістнадцятковій системі числення(0-9,a-f)" << endl; 

cin >> hex >> chislo2; 

start1: 

 

cout << "Виберіть:	1 - додавання, 2 - віднімання, 3 - множення, 4 - ділення" << endl; cin >> typ; 

  

switch (typ) 

{ 

case 1: 

cout << "Додавання" << endl; 

result = chislo1 + chislo2; 

cout << hex << result << endl; 

break; 

case 2: 

cout << "Віднімання" << endl; 

result = chislo1 - chislo2; 

cout << hex << result << endl; 

break; 

 

case 3: 

cout << "Множення" << endl; 

result = chislo1 * chislo2; 

cout << hex << result << endl; 

break; 



case 4: 

cout << "Ділення" << endl; 

result = chislo1 / chislo2; 

cout << hex << result << endl; 

break; 

 

default: 

cout << "Не вірно введенно тип дії" << endl; 

cout << "Введіть ще раз" << endl; 

goto start1; 

break; 

} 

 

case 2: 

cout << "Ви вирішили не запускати калькулятор :(" << endl; 

break; 

default: 

cout<<"Введено не правильно"<<endl; 

goto start; 

break; 

} 

 

system("pause"); 

return 0; 

} 
