#pragma once
#include "libraries.h"

class Book
{
public:
    string getTitle();
    void setTitle(string tit);

    string getAuthorName();
    void setAuthorName(string aut);

    Book(string Title, string authorName);

    virtual void printDescription();

protected:
    string Title;
    string authorName;
};