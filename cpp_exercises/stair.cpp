#include <iostream>
using namespace std;

int makingStair();

int main()
{
    makingStair();
}

int makingStair()
{
    int stairHeight;
    do
    {
        cout << "Digite o tamanho desejado para a escada: ";
        cin >> stairHeight;
    } while (stairHeight < 1);

    for (int i = 0; i < stairHeight; i++)
    {

         for (int k = 0; k < stairHeight - i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}