//Вызов функций.

#include "Header.h"

int main(int argc, char** argv)
{
	IntNumParser num1; // Числовой парсер1
	
	IntNumParser num2; // Числовой парсер2
	
	StrParser name; //Строковый парсер1
	
	OpParser op1; // парсер1
	OpParser op2;
	
	// Шаблон: name num op num op
	
	CombiParser combil(5, &name, &num1, &op1, &num2, &op2);
	
	//cout (combil.parser(cin) ? "Template match" : "Template not match") << endl;
	
	return 0;
}