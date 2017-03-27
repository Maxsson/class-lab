#pragma once
/*
* classMoney.h
*
*  Created on: 06.03.2017
*      Author: student
*/
#include <iostream>
#include <cstdlib>
#include "stdafx.h"
using namespace std;
#ifndef CALSSMONEY_H_
#define CALSSMONEY_H_
class Money
{
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
	Money(int value);//конструктор (1)
	Money();//Конструктор по "дефолту"(2)

	void setMONEY();
	void getMONEY();
	void getSize_H();
	void getSize_W();
	void getSity();

	~Money();
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


bool Exit();//Продолжить/Завершить?
			//Для купюр
void Size(int value);//Размер
void OutSity(int value);//Город
void OutDiaR(int value);//Вывод диаметра для монет(руб)
void OutDiaK(int value);//Вывод диаметра для монет(коп)
int WhatNext(int value);//Следующее действие 
int Next(int value, int next);//Выполнить Это действие

							  //Общее
int GetValue();//Ввод нового  значения
void Yourchose(int value);//Вывод введенного значения
bool DKopOrRub();//Проверка диаметра для копейки или для рубля(1,5,10)
#endif /* CALSSMONEY_H_ */


