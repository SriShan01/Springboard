#include "Audiobook.h"

string Audiobook::getVoice()
{
    return voice;
}

void Audiobook::setVoice(string voi)
{
    voice = voi;
}

Audiobook::Audiobook(string Title, string authorName, string voice) : Book(Title, authorName), voice(voice)
{
}

void Audiobook::printDescription()
{
    cout << "voiceActor: " << voice << endl;
}