#pragma once
#include<iostream>
#include<string>
using namespace std;
class Reader
{
public:
	string Name;
	int Age;
	string Sex;
	int Number;
	string Address;
	int  Amount;


	Reader(string name, int age, string sex, int number, string address, int  amount)
	{
		Name = name;
		Age = age;
		Sex = sex;
		Number = number;
		Address = address;
		Amount = amount;
	}

};