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




bool Cont();//����������/���������?

//��� �����
void Size(int value);//������
void OutSity(int value);//�����

//��� �����
void OutDiaR(int value);//����� �������� ��� �����(���)
void OutDiaK(int value);//����� �������� ��� �����(���)
int WhatNext(int value);//��������� �������� 
int Next(int value, int next);//��������� ��� ��������

//�����
int GetValue();//���� ������  ��������
void YourChoseRub(int value);//����� ���������� �������� �����
void YourChoseNext(int next);//����� ���������� �������� ��������� �������� ��� ������
bool DKopOrRub(int value);//�������� �������� ��� ������� ��� ��� �����(1,5,10)
int ChangeMoneyForTenCoinsFunk(int value);
#endif /* CALSSMONEY_H_ */


