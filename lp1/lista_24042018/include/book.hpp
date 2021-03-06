#ifndef _BOOK_
#define _BOOK_

#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	private:
		string title;
		string author;
		int numberPages;

	public:	
		Book();
		~Book();
		Book(string name, string author, int numberPages);
		friend ostream& operator<< (ostream &o, Book const &book);
		string getTitle();
		void setTitle(string title);
};

#endif
