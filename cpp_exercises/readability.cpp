#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>

using namespace std;

int readability(int letter, int word, int sentence);

int main(void)
{
    string text;
    cout << "Texto: ";
    getline(cin, text);

    int textLength = text.size();

    int word = 1;
    int sentence = 0;
    int letter = 0;

    for (int i = 0; i < textLength; i++)
    {
        if (isalpha(text[i]))
        {
            letter++;
        }
        if (isspace(text[i]))
        {
            word++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence++;
        }
    }
    readability(letter, word, sentence);
}

int readability(int letter, int word, int sentence)
{
    float L = ((float)letter / word) * 100;
    float S = ((float)sentence / word) * 100;

    float result = 0.0588 * L - 0.296 * S - 15.8;
    result = round(result);

    if (result <= 1)
    {
        cout << "Before Grade 1";
    }
    else if (result >= 16)
    {
        cout << "Grade 16+";
    }
    else
    {
        cout << "Grade " << result;
    }
    return 0;
}