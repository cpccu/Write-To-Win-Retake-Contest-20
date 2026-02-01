/*
input rating;

1600 ≤ rating ≤ 1899
1600 ≤ rating ≤ 1899
1600 <= rating <= 1899
1400 ≤ rating ≤ 1599
rating ≤ 1399

Test input: 1299
Output: Division 4
*/

#include <iostream>

int main()
{
    int t, rating;

    std::cin >> t;

    while (t--)
    {

        std::cin >> rating;

        if (rating >= 1900)
        {
            std::cout << "Division 1" << std::endl;
        }
        else if (rating >= 1600 && rating <= 1899)
        {
            std::cout << "Division 2" << std::endl;
        }
        else if (rating >= 1400 && rating <= 1599)
        {
            std::cout << "Division 3" << std::endl;
        }
        else if (rating <= 1399)
        {
            std::cout << "Division 4" << std::endl;
        }
    }

    return 0;
}