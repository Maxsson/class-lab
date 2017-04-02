//============================================================================
// Name        : Main.cpp
// Author      : Max Y.
// Version     : 0.03
// Copyright   : No Copyright
// Description : Money
//============================================================================
#include "stdafx.h"
#include "classMoney.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int value = -1;
	while (value == -1) {
		value = GetValue();
	}
	bool cont = false;
	while (cont == false)
	{
		int next;
		next = WhatNext(value);
		value = Next(value, next);
		if ( (next == 9))
		{
			cont = Cont();
		}
	}

	system("pause");
	return 0;

}
