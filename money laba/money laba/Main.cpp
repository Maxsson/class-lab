//============================================================================
// Name        : money.cpp
// Author      : Max Y.
// Version     : 0.02
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
	int value = GetValue();
	bool cont = true;
	while (cont == true)
	{
		int next;
		next = WhatNext(value);
		value = Next(value, next);
		if ((next == 9))
		{
			cont = Exit();
		}
	}

	system("pause");
	return 0;

}

