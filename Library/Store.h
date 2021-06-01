#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Book.h"

using namespace std;


class Store {
private:
	string storeName;
	vector<Book> storeBooks;

public:
	Store(string storeName, vector<Book> storeBooks);

	vector<Book> getStoreBooks() {
	return storeBooks;
	}

	void displayStoreBooks() {
		cout << "Store books: " << endl;
		for (Book book : storeBooks) {
			cout << book.getBookTitle() << " by " << book.getBookAuthor() << " for " << book.getBookPrice() << "€" << endl;
		}
	}

	void addBook(Book b) {
		storeBooks.push_back(b);
	}

	void removeBook(Book b) {
		for (size_t i = 0; i < storeBooks.size(); i++){
			if (storeBooks[i].getBookTitle == b.getBookTitle) {
				storeBooks.erase(storeBooks.begin() + i);
			}
		}
	}
};