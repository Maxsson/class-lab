// Str+Str.cpp
// 13.05.17
// Yunochkin Maxim

//7.���������� ����������� ���������� 
//��������� ������ ���� ��������. �������� "+".

//��������� �� ���� �������� ��� ����� �����(������) �� �����, ��� 256 ��������.
//�� ������ ��������� ����� ��������� �� ������������ ����� ����� ����� ������,
//�� �������� ������ ����� ������� ������� �����.
//� �� ������ - ������� �����.
//���� �����-���� ����� �� ����� ���/����� ������� (���� �� ���� ������ �����), �� ��������� ������� �������� ������� �����.

#include "stdafx.h"
#include <iostream>
using namespace std;

class str_str
{
private:
	int size;
	char str[256];
public:
	//����������� 1 
	str_str(char s[256], int len){
	size = len;
	int ia;
	for (ia = 0; ia < size; ia++){
		str[ia] = s[ia];
	}
	}
	//����������� 2
	str_str() { size = 0; };
	
	void show()
	{
		int ia;
		static int count = 1;		
		cout << "������ " << count << ": ";
		for (ia = 0; ia < size; ia++) {
			cout << str[ia];
		}
		count++;
		cout << "\n��������: " << size << endl;		
	}



	//���������� ��������� +
	str_str operator+(const str_str &R) {
		str_str result;
		int len = size > R.size ? size : R.size;
		int ia;
		//��� ����������� ������ ������ ����� 
		result.size = len;
		//����������� ����� � ������ ����� ����� ����. 
			for (ia = 0; ia < len; ia = ia + 2)
			{
				//1 ����� ����� ia ����� � 2 ������ ����� ia+1 �����
				if ((ia <= size-1) && (ia + 1  <= R.size-1)){
					result.str[ia] = str[ia];
					result.str[ia + 1] = R.str[ia + 1];
				}
				//1)���� ������ ����� �� ����� ia �����
				//2)������������ ������, ����� ������ ����� ����� ia �����, � ������ ia+1 �� �����
				else if ((ia > R.size - 1) || ((ia <= size - 1) && (ia + 1  > R.size -1 ))){
					result.str[ia] = str[ia];
					result.str[ia + 1] = str[ia+1];
				}				
				//���� ������ ����� �� ����� ia �����
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
	
	cout << "������� 1 ������: ";
	cin.getline(stri1, 256);	
	cout << "������� 2 ������: ";
	cin.getline(stri2, 256);
	
	int size1 = strlen(stri1);
	int size2 = strlen(stri2);
	str_str obj1(stri1, size1);
	str_str obj2(stri2, size2);
	//������������� ����������
	str_str obj3 = obj1 + obj2;

	obj1.show();
	obj2.show();
	obj3.show();
	
	cin.get();
    return 0;
}

