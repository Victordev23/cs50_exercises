#include <iostream>
#include <cmath>

using namespace std;

bool validateCard(long long cardNumber);
int isValidCard(long long cardNumber);

int main()
{
    long long cardNumber;
    do
    {
        cout << "digite somente os números do seu cartão: ";
        cin >> cardNumber;
    } while (cardNumber <= 0);

    if (validateCard(cardNumber))
    {
        isValidCard(cardNumber);
    }
    else
    {
        cout << "INVÁLIDO";
    }
}

bool validateCard(long long cardNumber)
{

    int sum = 0;
    bool isSecondNumber = false;

    while (cardNumber != 0)
    {
        int digit = cardNumber % 10;

        if (isSecondNumber)
        {
            digit *= 2;
            sum += digit / 10 + digit % 10;
        }
        else
        {
            sum += digit;
        }

        isSecondNumber = !isSecondNumber;
        cardNumber /= 10;
    }

    if (sum % 10 != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int isValidCard(long long cardNumber)
{
    long long size = trunc(log10(cardNumber)) + 1;
    int firstDigit;
    while (cardNumber != 0)
    {
        firstDigit = cardNumber % 10;
        cardNumber = cardNumber / 10;
    }

    if (size == 15 && firstDigit == 3)
    {
        cout << "VÁLIDO\n";
        cout << "AMEX\n";
    }
    else if (size == 16 && firstDigit == 5)
    {
        cout << "VÁLIDO\n";
        cout << "MASTERCARD\n";
    }
    else if (size == 13 || size == 16 && firstDigit == 4)
    {
        cout << "VÁLIDO\n";
        cout << "VISA\n";
    }
    else
    {
        cout << "INVÁLIDO\n";
    }
    return 0;
}

/*examples of valid cards:

Mastercard: 5555555555554444,
            5105105105105100

Visa: 4012888888881881,
      4222222222222

Amex: 378282246310005,
      378734493671000
*/