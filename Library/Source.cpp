#include <iostream>
#include <string>
#include "Book.h"
#include "User.h"

using namespace std;

int main() {

	vector<Book> storeBooks;

	User user1("Fachi", 20, 100.00);

	Book book1("Hola", "Adios", 19.00);

	Store store1("StoreBook", storeBooks);

	store1.addBook(book1);

	store1.displayStoreBooks();

	user1.displayUserBooks();

	user1.buy_book(store1, book1);
	
	store1.displayStoreBooks();

	user1.displayUserBooks();


	system("pause");

}