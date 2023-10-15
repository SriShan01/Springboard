
#include "Book.h"
#include "Bookshop.h"
#include "Audiobook.h"

int main()
{
    string a_title, a_author, a_voice;
    string b_title, b_author;


    cout << "Please type audio book title, author, voice: " << endl;
    cin >> a_title;
    cin >> a_author;
    cin >> a_voice;

    cout << "Please type  book title, author, voice: " << endl;
    cin >> b_title;
    cin >> b_author;

    Audiobook a1(a_title, a_author, a_voice);
    Book b1(b_title, b_author);

    Bookshop *bs1 = static_cast<Bookshop *>(malloc(sizeof(Bookshop)));

    cout << "Create books are: " << a1.printDescription() << endl;

    return 0;
}