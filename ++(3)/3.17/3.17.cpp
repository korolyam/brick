#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <algorithm>
int main()
{
    setlocale(LC_ALL, "Russian");
    bool answer;
    const int n = 6;
    int array2[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            array2[i][j] = 0;
            if (i == j)
            {
                array2[i][j] = i + 1;
            }
            if (i == n - 1 - j)
            {
                array2[i][j] = j + 1;
            }
            std::cout << array2[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\nЕщё раз? (1 - yes, 0 - no): ";
    std::cin >> answer;
    if (answer)
    {
        main();
    }
    return 0;
}

