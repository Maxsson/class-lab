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
	Money(int value);//����������� (1)
	Money();//����������� �� "�������"(2)

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


bool Exit();//����������/���������?
			//��� �����
void Size(int value);//������
void OutSity(int value);//�����
void OutDiaR(int value);//����� �������� ��� �����(���)
void OutDiaK(int value);//����� �������� ��� �����(���)
int WhatNext(int value);//��������� �������� 
int Next(int value, int next);//��������� ��� ��������

							  //�����
int GetValue();//���� ������  ��������
void Yourchose(int value);//����� ���������� ��������
bool DKopOrRub();//�������� �������� ��� ������� ��� ��� �����(1,5,10)
#endif /* CALSSMONEY_H_ */


