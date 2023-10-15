#include "Book.h"

string Book::getTitle()
{
    return Title;
}

void Book::setTitle(string tit)
{
    Title = tit;
}

string Book::getAuthorName()
{
    return authorName;
}

void Book::setAuthorName(string aut)
{
    authorName = aut;
}

Book::Book(string Title, string authorName) : Title(Title), authorName(authorName)
{
}

void Book::printDescription()
{
    cout << "Title: " << Title << endl;
    cout << "authorName: " << authorName << endl;
}