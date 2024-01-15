#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int scrabble(int points[], string word);

int main()
{
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    string word1, word2;

    cout << "Word 1: ";
    cin >> word1;

    cout << "word 2: ";
    cin >> word2;

    int score1 = scrabble(points, word1);
    int score2 = scrabble(points, word2);

    if (score1 > score2)
    {
        cout << "Player 1 wins!";
    }
    else if (score2 > score1)
    {
        cout << "Player 2 wins!";
    }
    else
    {
        cout << "tie";
    }
}

int scrabble(int points[], string word)
{
    int score = 0;

    int wordLenght = word.size();

    for (int i = 0; i < wordLenght; i++)
    {
        int letterValue = toupper(word[i]);
        if (letterValue >= 65 && letterValue <= 90)
        {
            score += points[letterValue - 'A'];
        }
    }
    return score;
}