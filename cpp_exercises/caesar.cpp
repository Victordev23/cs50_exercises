#include <iostream>
#include <ctype.h>
#include <string>
#include <cstring>

using namespace std;

char upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char lower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int CaesarCipher(int key, string text);

int main(void)
{
    int key;
    string text;

    cout << "Only text: ";
    getline(cin, text);

    do
    {
        cout << "key[1-26]: ";
        cin >> key;
    } while (key <= 0 || key > 26);

    CaesarCipher(key, text);
}

int CaesarCipher(int key, string text)
{
    string code;
    int textLength = text.size();

    for (int i = 0; i < textLength; i++)
    {
        int value = text[i];

        if (isupper(value))
        {
            int upperLetter = ((value - 65) + key) % 26;

            code += upper[upperLetter];
        }

        if (islower(value))
        {
            int lowerLetter = ((value - 97) + key) % 26;

            code += lower[lowerLetter];
        }

        if (isspace(value))
        {
            code += " ";
        }
    }

    cout << "Ciphertext: " << code;

    return 0;
}