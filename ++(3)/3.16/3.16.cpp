#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <algorithm>
int main()
{
    setlocale(LC_ALL, "Russian");
    bool answer;
    const int n = 5;  
    const int m = 7;
    int array2[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            array2[i][j] = rand() % 9 + 1;
            std::cout << array2[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                std::cout << array2[i][j] << " ";
            }
            else
            {
                std::cout << "  ";
            }
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
