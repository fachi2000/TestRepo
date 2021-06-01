#pragma once
#include <string>

using namespace std;

class Book {
private:
	string title;
	string author;
	float price;

public:

	Book(string title, string author, float price);

	string getBookTitle() {
		return title;
	}

	string getBookAuthor() {
		return author;
	}

	float getBookPrice() {
		return price;
	}
};