#pragma once
#include "Head1.h"

struct library 
{
	int kilkist = 2;
	book* books = new book[kilkist];

	void fill(book* &books, int &kil)
	{
		for (int i = 0; i < kil; i++)
		{
			cout << "\nEnter  author's name: ";
			cin >> books->author_name;
			cout << "\nEnter  book's name: ";
			cin >> books->book_name;
			cout << "\nEnter  vudavnutstvo's name: ";
			cin >> books->vudavnutstvo;
			cout << "\nEnter  the year: ";
			cin >> books->year;

			cout << endl;
		}
	};

	void print(book*& books, int& kil)
	{
		for (int i = 0; i < kil; i++)
		{
			cout << "\nauthor's name: ";
			cin >> books->author_name;
			cout << "\nbook's name: ";
			cin >> books->book_name;
			cout << "\nvudavnutstvo's name: ";
			cin >> books->vudavnutstvo;
			cout << "\nthe year: ";
			cin >> books->year;

			cout << endl;
		}
	};

};

