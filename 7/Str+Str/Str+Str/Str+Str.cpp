// Str+Str.cpp
// 13.05.17
// Yunochkin Maxim

//7.Перегрузка стандартных операторов 
//Перегружу только один оператор. Оператор "+".

//Программе на вход подается два любых слова(строки) не более, чем 256 символов.
//На выходе выводится слово состоящее из максимальной длины обоих слово причем,
//На нечетных местах стоят символы первого слова.
//А на четных - второго слова.
//Если какое-либо слово не имеет чет/нечет символа (одно из слов больше длины), то выводятся остатки символов другого слова.

#include "stdafx.h"
#include <iostream>
using namespace std;

class str_str
{
private:
	int size;
	char str[256];
public:
	//Конструктор 1 
	str_str(char s[256], int len){
	size = len;
	int ia;
	for (ia = 0; ia < size; ia++){
		str[ia] = s[ia];
	}
	}
	//Конструктор 2
	str_str() { size = 0; };
	
	void show()
	{
		int ia;
		static int count = 1;		
		cout << "Строка " << count << ": ";
		for (ia = 0; ia < size; ia++) {
			cout << str[ia];
		}
		count++;
		cout << "\nСимволов: " << size << endl;		
	}



	//Перегрузка оператора +
	str_str operator+(const str_str &R) {
		str_str result;
		int len = size > R.size ? size : R.size;
		int ia;
		//Для корректного вывода нового слова 
		result.size = len;
		//Образование слова с учетом длины обоих слов. 
			for (ia = 0; ia < len; ia = ia + 2)
			{
				//1 слово имеет ia букву И 2 второе имеет ia+1 букву
				if ((ia <= size-1) && (ia + 1  <= R.size-1)){
					result.str[ia] = str[ia];
					result.str[ia + 1] = R.str[ia + 1];
				}
				//1)Если второе слово не имеет ia букву
				//2)Перевоходный момент, когда первое слово имеет ia букву, а второе ia+1 не имеет
				else if ((ia > R.size - 1) || ((ia <= size - 1) && (ia + 1  > R.size -1 ))){
					result.str[ia] = str[ia];
					result.str[ia + 1] = str[ia+1];
				}				
				//Если первое слово не имеет ia букву
				else if (ia > size - 1) {
					result.str[ia] = R.str[ia];
					result.str[ia + 1] = R.str[ia + 1];
				}				
		}
			return result;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	char stri1[256];
	char stri2[256];	
	
	cout << "Введите 1 строку: ";
	cin.getline(stri1, 256);	
	cout << "Введите 2 строку: ";
	cin.getline(stri2, 256);
	
	int size1 = strlen(stri1);
	int size2 = strlen(stri2);
	str_str obj1(stri1, size1);
	str_str obj2(stri2, size2);
	//Использование перегрузки
	str_str obj3 = obj1 + obj2;

	obj1.show();
	obj2.show();
	obj3.show();
	
	cin.get();
    return 0;
}

