//============================================================================
// Name        : Money.cpp
// Author      : Max Y.
// Version     : 0.03
// Copyright   : No Copyright
// Created on : 06.03.2017
// Description : Money
//============================================================================
#include "stdafx.h"
#include "classMoney.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int Money::setSize_H()
{
	if ((value_c == 1000) || (value_c == 5000))
	{
		SIZE_H = 69;
	}
	if ((value_c == 100) || (value_c == 10) || (value_c == 50) || (value_c == 500))
	{
		SIZE_H = 65;
	}
	if (value_c == 5)
	{
		SIZE_H = 61;
	}
	return SIZE_H;
}
int Money::setSize_W()
{
	if ((value_c == 1000) || (value_c == 5000))
	{
		SIZE_W = 157;
	}

	if ((value_c == 100) || (value_c == 10) || (value_c == 50) || (value_c == 500))
	{
		SIZE_W = 150;
	}
	if (value_c == 5)
	{
		SIZE_W = 137;
	}
	return SIZE_W;
}
string Money::setSity()
{
	if (value_c == 5000)	SITY = "���������";
	if (value_c == 1000)	SITY = "���������";
	if (value_c == 500)		SITY = "�����������";
	if (value_c == 100)		SITY = "������";
	if (value_c == 50)		SITY = "�����-���������";
	if (value_c == 10)		SITY = "����������";
	if (value_c == 5)		SITY = "��������";
	return SITY;
}
Money::Money(int value_c)
{
	this->value_c = value_c;

}
Money::Money()
{
	static int value_c = 10;
	this->value_c = value_c;
	value_c++;
}
void Money::setMONEY()
{
	cout << "������� ��������: ";
	cin >> value_c;
}
void Money::getMONEY()
{
	system("cls");
	cout << "��������  = " << value_c << endl;
}
void Money::getSize_H()
{
	setSize_H();
	cout << "������ = " << SIZE_H << endl;
}
void Money::getSize_W()
{
	setSize_W();
	cout << "������ = " << SIZE_W << endl;
}
void Money::getSity()
{
	setSity();
	system("cls");
	cout << "�� �������� ��������� " << value_c << " ���������(�) " << SITY << endl;
}
Money::~Money()
{
	//	cout << "��������� ���������"<<endl;
}
float Coins::setDiaR()
{
	if (value_c == 10) { diameter = 22.; }
	if (value_c == 5) { diameter = 25.; }
	if (value_c == 2) { diameter = 23.; }
	if (value_c == 1) { diameter = 20.5; }
	return diameter;
}
void Coins::getDiaR()
{
	setDiaR();
	system("cls");
	cout << "������� " << value_c << "���. = " << diameter << " ��" << endl;
}
float Coins::setDiaK()
{
	if (value_c == 50) { diameter = 19.5; }
	if (value_c == 10) { diameter = 17.5; }
	if (value_c == 5) { diameter = 18.5; }
	if (value_c == 1) { diameter = 15.5; }
	return diameter;
}
void Coins::getDiaK()
{
	setDiaK();
	system("cls");
	cout << "������� " << value_c << "���. = " << diameter << " ��" << endl;
}
int ChangeMoney::ChangeMoneyForTenCoins(int f)
{
	int	a = f / 10;
	return a;
}
ChangeMoney::ChangeMoney(int value)
{
	value = value;
}
bool Cont() {
	bool cont = true;
	cout << "�� ������ �����������  ���������? (1-��, 0-���):";
	cin >> cont;
	cout << endl;
	if (cont == 1)
	{
		cout << "��������� ���������" << endl;
	}
	else  if (cont == 0) { system("cls"); }
	else {
		cout << "������. ��������� ����." << endl;
	}
	return cont;
}
void Size(int value)
{
	if (value == 5000) {
		Money R5000(value);
		R5000.getMONEY();
		R5000.getSize_H();
		R5000.getSize_W();
	}
	if (value == 1000) {
		Money R1000(value);
		R1000.getMONEY();
		R1000.getSize_H();
		R1000.getSize_W();
	}
	if (value == 500) {
		Money R500(value);
		R500.getMONEY();
		R500.getSize_H();
		R500.getSize_W();
	}
	if (value == 100) {
		Money R100(value);
		R100.getMONEY();
		R100.getSize_H();
		R100.getSize_W();
	}
	if (value == 50) {
		Money R50(value);
		R50.getMONEY();
		R50.getSize_H();
		R50.getSize_W();
	}
	if (value == 10) {
		Money R10(value);
		R10.getMONEY();
		R10.getSize_H();
		R10.getSize_W();
	}
	if (value == 5) {
		Money R5(value);
		R5.getMONEY();
		R5.getSize_H();
		R5.getSize_W();
	}
}
void OutSity(int value)
{
	if (value == 5000) { Money R5000(value);	R5000.getSity(); }
	if (value == 1000) { Money R1000(value);	R1000.getSity(); }
	if (value == 500) { Money R500(value); R500.getSity(); }
	if (value == 100) { Money R100(value); R100.getSity(); }
	if (value == 50) { Money R50(value); R50.getSity(); }
	if (value == 10) { Money R10(value); R10.getSity(); }
	if (value == 5) { Money R5(value); R5.getSity(); }
	cout << endl;
}
void AvailableInput()
{
	cout << "���������: " << endl;
	cout << "������: 5, 10, 50, 100, 500, 1000 � 5000�" << endl;
	cout << "������: 1,  2, 5, 10�" << endl;
	cout << "�������: 1,  5, 10, 50���." << endl << endl;

	cout << "������ �������� ������" << endl;
	cout << "������� �������� ������" << endl;
	cout << "������� ����� ������/������/�������: " << endl;
}
int GetValue() {
	int value = -1;
	AvailableInput();
	do {

		
		cin >> value;
		while (!cin)//�������� �� �����
		{
			
			cin.clear();
			while (cin.get() != '\n');
			system("cls");
			cout << "������. ��������� ����." << endl;
			AvailableInput();
			cin >> value;
		}
		//�������� �� ���������� �����
		if ((value != 1) && (value != 2) && (value != 5) && (value != 10) && (value != 50) && (value != 100) && (value != 500) && (value != 1000) && (value != 5000))
		{
			system("cls");
			cout << "������. ��������� ����." << endl;	
			AvailableInput();
		}
		else system("cls");
	} while ((value != 1) && (value != 2) && (value != 5) && (value != 10) && (value != 50) && (value != 100) && (value != 500) && (value != 1000) && (value != 5000));
	return value;
}
int WhatNext(int value) {
	int next = -1;
	YourChoseRub(value);
	cout << "��� �� ������ �������:" << endl;
	if (value >= 5)
	{

		cout << "��� ������:" << endl;
		cout << "1) ������ ������ ������." << endl;
		cout << "2) ������ ����� ������������ �� ���." << endl;
	}
	if (value == 50) {
		cout << "��� �������:" << endl;
		cout << "3) ������ �������" << endl;
	}
	if (value == 10) {
		cout << "��� ������ ��� �������:" << endl;
		cout << "3) ������ �������" << endl;
	}
	if (value == 5) {
		cout << "��� ������ ��� �������:" << endl;
		cout << "3) ������ �������" << endl;
	}
	if (value == 2) {
		cout << "��� ������:" << endl;
		cout << "1) ������ �������" << endl;
	}
	if (value == 1) {
		cout << "��� ������ ��� �������:" << endl;
		cout << "1) ������ �������" << endl;
	}
	cout << "7) ������ ������� ��� ����� ��������� �� 10�" << endl;
	cout << "8) ������ ������ ������/������/�������." << endl;
	cout << "9) ��������� ���������" << endl;
	cout << "������� �����: ";
	cin >> next; 
	while (!cin)//�������� �� �����
	{
		cin.clear();
		while (cin.get() != '\n');
		system("cls");
		cout << "������. ��������� ����." << endl;	
		return WhatNext(value);
	}
	
	return next;
}
int Next(int value, int next)
{
	if (next == 7)
	{
		system("cls");
		if (value >= 10)
		{
			int a = ChangeMoneyForTenCoinsFunk(value);
			if (a == 0) {
				cout << "������ ��������� �� 10���." << endl;
			}
			else
			{
				cout << "����� ��������� " <<a << " ��� �� 10 ������ \n" << endl;
			}
		}
		else
		{
			cout << "������ ��������� �� 10���." << endl;
		}
	}
	else if (next == 8)//����� ���������� ����� ����
	{
		system("cls");
		return GetValue();
	}
	else if (next == 9)
	{
		system("cls");
		
	}

	else if ((next == 1) && (value > 2))//����� �������
	{
		Size(value);
	}
	else if ((next == 1) && (value <= 2))
	{
		next = 3;
	}
	else if (next == 2)//����� ������
	{
		OutSity(value);

	}
	else if (next == 3)//�����  ��������
	{
		if (value == 50) {
			OutDiaK(value);
		}
		if ((value == 10) || (value == 5) || (value == 1)) {
			bool KopOrRub2 = DKopOrRub(value);
			if (KopOrRub2 == true)
			{
				OutDiaK(value);
			}
			else
			{
				OutDiaR(value);
			}
			if (value == 2) {
				OutDiaR(value);
			}
		}

	}
	else
	{
		system("cls");
		YourChoseNext(next);
	}
	return value;
}
void OutDiaR(int value)
{
	if (value == 10) {
		Coins RC10(value);
		RC10.getDiaR();
	}
	if (value == 5) {
		Coins RC5(value);
		RC5.getDiaR();
	}
	if (value == 2) {
		Coins RC2(value);
		RC2.getDiaR();
	}
	if (value == 1) {
		Coins RC1(value);
		RC1.getDiaR();
	}
}
void OutDiaK(int value)
{
	if (value == 50) {
		Coins RCK50(value);
		RCK50.getDiaK();
	}
	if (value == 10) {
		Coins RCK10(value);
		RCK10.getDiaK();
	}
	if (value == 5) {
		Coins RCK5(value);
		RCK5.getDiaK();
	}
	if (value == 1) {
		Coins RCK1(value);
		RCK1.getDiaK();
	}
}
void YourChoseRub(int value)
{
	cout << "���� �������� ����� : " << value << endl;
}
void YourChoseNext(int next)
{
	cout << "�� ����� " << next << endl;
}
bool DKopOrRub(int value)
{
	bool KopOrRub = true;
	int KopOrRub1 = 0;
	while ((KopOrRub1 != 1) && (KopOrRub1 != 2))
	{
		cout << "�� ������ ������ ������� ���: " << endl;
		cout << "1)�������" << endl;
		cout << "2)�����" << endl;
		cin >> KopOrRub1;
		if (KopOrRub1 == 1)
		{
			KopOrRub = true;
		}
		else if  (KopOrRub1 == 2)
		{
			KopOrRub = false;
		}
		else
		{
			while (!cin)//�������� �� �����
			{
				cin.clear();
				while (cin.get() != '\n');
				system("cls");
				cout << "������. ��������� ����." << endl;
				YourChoseRub(value);
				return DKopOrRub(value);
				
			}
			//�������� �� ���������� �����
			if ((KopOrRub1 != 2) && (KopOrRub1 != 1))
			{
				system("cls");
				cout << "������. ��������� ����." << endl;
				YourChoseRub(value);
				return DKopOrRub(value);
			}
		}
	}
	return KopOrRub;
}
int ChangeMoneyForTenCoinsFunk(int value)
{
	ChangeMoney CM(value);
	int a = CM.ChangeMoneyForTenCoins(value);
	return a;
}
