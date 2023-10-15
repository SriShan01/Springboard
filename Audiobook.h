#pragma once
#include "libraries.h"
#include "Book.h"

class Audiobook : public Book
{
public:
    string getVoice();
    void setVoice(string voi);

    Audiobook(string Title, string authorName, string voice);
    void printDescription();

protected:
    string voice;
};