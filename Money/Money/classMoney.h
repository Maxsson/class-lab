#pragma once
//============================================================================
// Name        : classMoney.h
// Author      : Max Y.
// Version     : 0.03
// Copyright   : No Copyright
// Created on  : 06.03.2017
// Description : Money
//============================================================================
#include <iostream>
#include <cstdlib>

using namespace std;
#ifndef CALSSMONEY_H_
#define CALSSMONEY_H_
class ChangeMoney;
class Money
{
	friend class ChangeMoney;
protected:
	int value_c;
private:
	int SIZE_H;
	int SIZE_W;
	string SITY;

	int setSize_H();
	int setSize_W();
	string setSity();
public:
	Money(int value);
	Money();
	void setMONEY();
	void getMONEY();
	void getSize_H();
	void getSize_W();
	void getSity();
	~Money();
};
class ChangeMoney
{
	
public:
	int value;
	int ChangeMoneyForTenCoins(int f);
	ChangeMoney(int value);

};
 
class Coins :public Money
{
private:
	int value;
	float diameter;
	float setDiaR();
	float setDiaK();
public:
	Coins(int value) : Money(value) {};
	void getDiaR();
	void getDiaK();
};




bool Cont();//Продолжить/Завершить?

//Для купюр
void Size(int value);//Размер
void OutSity(int value);//Город

//Для монет
void OutDiaR(int value);//Вывод диаметра для монет(руб)
void OutDiaK(int value);//Вывод диаметра для монет(коп)
int WhatNext(int value);//Следующее действие 
int Next(int value, int next);//Выполнить Это действие

//Общее
int GetValue();//Ввод нового  значения
void YourChoseRub(int value);//Вывод введенного значения рубля
void YourChoseNext(int next);//Вывод введенного значения следущего действия при ошибке
bool DKopOrRub(int value);//Проверка диаметра для копейки или для рубля(1,5,10)
int ChangeMoneyForTenCoinsFunk(int value);
#endif /* CALSSMONEY_H_ */


