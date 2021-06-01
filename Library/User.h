#pragma once
#include <string>
#include <vector>
#include "Book.h"
#include "Store.h"

using namespace std;



class User {
private:
	string name;
	int age;
	float balance;
	vector<Book> userBooks;

public:
	User(string name, int age, float balance);

	string getUsername() {
		return name;
	}

	int getAge() {
		return age;
	}

	vector<Book> getUserBooks() {
		return userBooks;
	}

	void buy_book(Store s, Book b) {
		for (size_t i = 0; i < s.getStoreBooks().size(); i++) {
			if (s.getStoreBooks()[i].getBookTitle() == b.getBookTitle() && balance>=b.getBookPrice()) {
				userBooks.push_back(b);
				s.removeBook(b);
			}
			else {
				cout << "Book not found or insufficient balance" << endl;
			}
		}
		
	}

	void displayUserBooks() {
		cout << "User books: " << endl;
		for (size_t i = 0; i < userBooks.size(); i++) {
			cout << i + 1 << ". " << userBooks[i].getBookTitle() << " by " << userBooks[i].getBookAuthor() << endl;
		}
	}
};
