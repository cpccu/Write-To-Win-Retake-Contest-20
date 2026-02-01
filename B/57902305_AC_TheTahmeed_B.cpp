
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> citizens(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> citizens[i];
    }

    int max = *std::max_element(citizens.begin(), citizens.end());
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += max - citizens[i];
    }

    std::cout << sum << std::endl;

    return 0;
}