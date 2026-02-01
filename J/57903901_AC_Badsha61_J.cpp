          
#include <iostream>
using namespace std;

int countWins(int a1, int a2, int b1, int b2)
{
    int suneetWins = 0;

    // Simulate all possible choices of cards
    int suneetCards[2] = {a1, a2};
    int slavicCards[2] = {b1, b2};

    // Iterate through all possible ways to play the two rounds
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int suneetRoundWins = 0, slavicRoundWins = 0;

           if (suneetCards[i] > slavicCards[j])
                suneetRoundWins++;
            else if (suneetCards[i] < slavicCards[j])
                slavicRoundWins++;

            // Round 2 (use the remaining card)
            int suneetRemaining = suneetCards[1 - i];
            int slavicRemaining = slavicCards[1 - j];

            if (suneetRemaining > slavicRemaining)
                suneetRoundWins++;
            else if (suneetRemaining < slavicRemaining)
                slavicRoundWins++;

            // Suneet wins the game if he wins more rounds than Slavic
            if (suneetRoundWins > slavicRoundWins)
                suneetWins++;
        }
    }

    return suneetWins;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << countWins(a1, a2, b1, b2) << endl;
    }

return 0;
}