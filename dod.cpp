// dod.cpp
//	файл реалізації функції

#include "dod.h"
#include "var.h"	// підключили зовнішні оголошення змінних 

using namespace nsVar;

void nsDod::dod() {
	double R = ((2. * n - 1) / (2. * n + 1))/ (x * x);
	a *= R;		// доданок домножується на коефіцієнт рекурентності
}
