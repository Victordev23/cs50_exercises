#include <iostream>
using namespace std;

int makingStair(int stairHeight);

int main()
{
    int stairHeight;
    do
    {
        cout << "Digite o tamanho desejado para a piramide: ";
        cin >> stairHeight;
    } while (stairHeight < 1);

    makingStair(stairHeight);

    return 0;
}

int makingStair(int stairHeight)
{
    for (int i = 0; i < stairHeight; i++)
    {
        for (int k = 0; k < stairHeight - i - 1; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "#";
        }

        cout << "  ";

        for (int j = 0; j < i + 1; j++)
        {
            cout << "#";
        }

        cout << "\n";
    }

    return 0;
}