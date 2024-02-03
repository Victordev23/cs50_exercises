#include <iostream>
#include <iostream>
#include <ctype.h>
#include <cstring>

using namespace std;

int substitution(string encryptedAlphabet);

int main(void)
{
    string encryptedAlphabet;
    bool hasError = true;
    do
    {
        cout << "Your alphabet: ";
        cin >> encryptedAlphabet;

        int alphabetSize = encryptedAlphabet.size();
        hasError = false;

        for (int i = 0; i < alphabetSize; i++)
        {
            if (!isalpha(encryptedAlphabet[i]) || alphabetSize != 26)
            {
                hasError = true;
                break;
            }
        }
    } while (hasError);

    substitution(encryptedAlphabet);
}

int substitution(string encryptedAlphabet)
{
    string plainText;
    string cipherText;
    cin.ignore();

    cout << "Text: ";
    getline(cin, plainText);

    int textSize = plainText.size();

    for (int i = 0; i < textSize; i++)
    {
        if (isalpha(plainText[i]))
        {
            if (islower(plainText[i]))
            {
                int letterValue = plainText[i] - 'a';
                cipherText += tolower(encryptedAlphabet[letterValue]);
            }
            if (isupper(plainText[i]))
            {
                int letterValue = plainText[i] - 'A';
                cipherText += toupper(encryptedAlphabet[letterValue]);
            }
        }
        else
        {
            cipherText += plainText[i];
        }
    }
    cout << "Ciphertext: " << cipherText;
    return 0;
}