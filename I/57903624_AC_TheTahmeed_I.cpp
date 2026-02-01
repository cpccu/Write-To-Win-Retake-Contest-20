#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;

        vector<int> arrayA(n), arrayB(n);
        for (int i = 0; i < n; ++i)
            cin >> arrayA[i];
        for (int i = 0; i < n; ++i)
            cin >> arrayB[i];

        map<int, int> maxCountA, maxCountB;
        int maxStreak = 0;

        int currentStreak = 1;
        for (int i = 1; i < n; ++i)
        {
            if (arrayA[i] == arrayA[i - 1])
            {
                currentStreak++;
            }
            else
            {
                maxCountA[arrayA[i - 1]] = max(maxCountA[arrayA[i - 1]], currentStreak);
                maxStreak = max(maxStreak, maxCountA[arrayA[i - 1]]);
                currentStreak = 1;
            }
        }
        maxCountA[arrayA[n - 1]] = max(maxCountA[arrayA[n - 1]], currentStreak);
        maxStreak = max(maxStreak, maxCountA[arrayA[n - 1]]);

        currentStreak = 1;
        for (int i = 1; i < n; ++i)
        {
            if (arrayB[i] == arrayB[i - 1])
            {
                currentStreak++;
            }
            else
            {
                maxCountB[arrayB[i - 1]] = max(maxCountB[arrayB[i - 1]], currentStreak);
                maxStreak = max(maxStreak, maxCountB[arrayB[i - 1]]);
                maxStreak = max(maxStreak, maxCountA[arrayB[i - 1]] + maxCountB[arrayB[i - 1]]);
                currentStreak = 1;
            }
        }
        maxCountB[arrayB[n - 1]] = max(maxCountB[arrayB[n - 1]], currentStreak);
        maxStreak = max(maxStreak, maxCountB[arrayB[n - 1]]);
        maxStreak = max(maxStreak, maxCountA[arrayB[n - 1]] + maxCountB[arrayB[n - 1]]);

        cout << maxStreak << "\n";
    }

    return 0;
}
