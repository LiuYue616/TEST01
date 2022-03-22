#pragma once
#include<iostream>
#include<string>
using namespace std;
class Library
{
public:
	string Name;
	string ISBN;
	int Number;
	string Author;
	string Press;
	string PublishTime;
	int Edition;
	double Price;
	int Amount;

	Library(string name, string isbn, int number, string author, string press, string publishTime, int edition, double price, int amount)
	{
		Name = name;
		ISBN = isbn;
		Number = number;
		Author = author;
		Press = press;
		PublishTime = publishTime;
		Edition = edition;
		Price = price;
		Amount = amount;
	}
};