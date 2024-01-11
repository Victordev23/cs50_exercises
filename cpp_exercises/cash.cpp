#include <iostream>
using namespace std;

int changeOwed(int change);

int main()
{
    int change;
    do
    {
        cout << "insira o valor do troco em centavos: ";
        cin >> change;
    } while (change < 1);

    changeOwed(change);

    return 0;
}

int changeOwed(int change)
{
    int quarter = change / 25;
    change %= 25;

    int dime = change / 10;
    change %= 10;

    int nickel = change / 5;
    change %= 5;

    int penny = change;

    int total = quarter + dime + nickel + penny;

    cout << "você precisará de: "<<total << " moedas para o troco";

    return 0;
}