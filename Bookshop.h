#pragma once
#include "libraries.h"
#include "Book.h"
#include "Audiobook.h"

class Bookshop : public Book, Audiobook
{
public:
    Bookshop(string bookCollection[], int noOfBooksAdded);
    ~Bookshop();
    void addBook(string title);
    void addBook(string title);

private:
    string bookCollection[5];
    int noOfBooksAdded;
};