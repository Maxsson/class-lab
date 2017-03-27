/*
* Money.cpp
*
*  Created on: 06.03.2017
*      Author: student
*/
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
	if (value_c == 5000)	SITY = "Хабаровск";
	if (value_c == 1000)	SITY = "Ярославль";
	if (value_c == 500)		SITY = "Архангельск";
	if (value_c == 100)		SITY = "Москва";
	if (value_c == 50)		SITY = "Санкт-Петербург";
	if (value_c == 10)		SITY = "Красноярск";
	if (value_c == 5)		SITY = "Новгород";
	return SITY;
}
Money::Money(int value)
{
	value_c = value;
}
Money::Money()
{
	value_c = 10;
}
void Money::setMONEY()
{
	cout << "Введите ценность: ";
	cin >> value_c;
}
void Money::getMONEY()
{
	system("cls");
	cout << "Ценность  = " << value_c << endl;
}
void Money::getSize_H()
{
	setSize_H();
	cout << "Высота = " << SIZE_H << endl;
}
void Money::getSize_W()
{
	setSize_W();
	cout << "Ширина = " << SIZE_W << endl;
}
void Money::getSity()
{
	setSity();
	system("cls");
	cout << "На банкноте ценностью " << value_c << " изображен(а) " << SITY << endl;
}
Money::~Money()
{
	//	cout << "Программа закончена"<<endl;
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
	cout << "Диаметр " << value_c << "руб. = " << diameter << " мм" << endl;
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
	cout << "Диаметр " << value_c << "коп. = " << diameter << " мм" << endl;
}
bool Exit() {
	bool cont = true;
	cout << "Вы действильно хотите закончить? (1-да, 0-нет):";
	cin >> cont;
	cout << endl;
	if (cont == 0)
	{
		cout << "Программа закончена" << endl;
	}
	else system("cls");
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
	cout << "Доступные: " << endl;
	cout << "Купюры: 5, 10, 50, 100, 500, 1000 и 5000р" << endl;
	cout << "Монеты: 1,  2, 5, 10р" << endl;
	cout << "Копейки: 1,  5, 10, 50коп." << endl << endl;
}
int GetValue() {
	int value = 0;
	AvailableInput();
	do {
		cout << "Монеты частично готовы" << endl;
		cout << "Копейки частично готовы" << endl;
		cout << "Введите цифру купюры/монеты/копейки: " << endl;

		cin >> value;
		if ((value != 1) && (value != 2) && (value != 5) && (value != 10) && (value != 50) && (value != 100) && (value != 500) && (value != 1000) && (value != 5000))
		{
			system("cls");
			cout << "ОШИБКА. Повторите ввод." << endl << "Вы попытались ввести: " << value << endl << endl;
			AvailableInput();
		}
		else system("cls");
	} while ((value != 1) && (value != 2) && (value != 5) && (value != 10) && (value != 50) && (value != 100) && (value != 500) && (value != 1000) && (value != 5000));
	return value;
}
int WhatNext(int value) {
	int next;
	Yourchose(value);
	cout << "Что Вы хотите сделать:" << endl;
	if (value >= 5)
	{

		cout << "Для купюры:" << endl;
		cout << "1) Узнать размер купюры." << endl;
		cout << "2) Узнать город изображенный на ней." << endl;
	}

	if (value == 50) {
		cout << "Для копейки:" << endl;
		cout << "3) Узнать диаметр" << endl;
	}
	if (value == 10) {
		cout << "Для монеты или копейки:" << endl;
		cout << "3) Узнать диаметр" << endl;
	}
	if (value == 5) {
		cout << "Для монеты или копейки:" << endl;
		cout << "3) Узнать диаметр" << endl;
	}
	if (value == 2) {
		cout << "Для монеты:" << endl;
		cout << "1) Узнать диаметр" << endl;
	}
	if (value == 1) {
		cout << "Для монеты или копейки:" << endl;
		cout << "1) Узнать диаметр" << endl;
	}

	cout << "8) Ввести другую купюру/монету/копейку." << endl;
	cout << "9)Завершить" << endl;
	cout << "Введите цифру: ";
	cin >> next;
	return next;
}
int Next(int value, int next)
{
	if (next == 8)//Вывод доступного ввода ввод
	{
		system("cls");
		return GetValue();
	}
	if (next == 9)
	{
		system("cls");
	}

	if ((next == 1) && (value > 2))//Вывод размера
	{
		Size(value);
	}
	if ((next == 1) && (value <= 2))
	{
		next = 3;
	}
	if (next == 2)//Вывод города
	{
		OutSity(value);

	}
	if (next == 3)//Вывод  диаметра
	{
		if (value == 50) {
			OutDiaK(value);
		}
		if ((value == 10) || (value == 5) || (value == 1)) {
			bool KopOrRub2 = DKopOrRub();
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
void Yourchose(int value)
{
	cout << "Вы ввели: " << value << endl;
}
bool DKopOrRub()
{
	bool KopOrRub = true;
	int KopOrRub1 = 0;
	while ((KopOrRub1 != 1) && (KopOrRub1 != 2))
	{
		cout << "Вы хотите узнать диаметр для: " << endl;
		cout << "1)Копейки" << endl;
		cout << "2)Рубля" << endl;
		cin >> KopOrRub1;
		if (KopOrRub1 == 1)
		{
			KopOrRub = true;
		}
		if (KopOrRub1 == 2)
		{
			KopOrRub = false;
		}
		else
		{
			cout << "ОШИБКА" << endl;
			cout << "Повторите ввод" << endl;
		}
	}
	return KopOrRub;
}

