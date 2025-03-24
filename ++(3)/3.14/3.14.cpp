#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <algorithm>
int main()
{
    bool flag = false;
    setlocale(LC_ALL, "Russian");
    bool answer;
    const int n = 10;
    int array1[n];
    std::cout << "Массив\n";
    for (int i = 0; i < n; ++i)
    {
        array1[i] = rand() % 30 + 1;
        std::cout << array1[i] << " ";
    }
    std::cout << "\n";
    do
    {
        flag = false;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (array1[i] == array1[j])
                {
                    flag = true;
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (array1[i] == array1[j])
                {
                    array1[i] *= i;
                    break;
                }
            }
        }
    } 
    while (flag);
    std::cout << "Результирующий массив\n";
    for (int i = 0; i < n; ++i)
    {
        std::cout << array1[i] << " ";
    }
    std::cout << "\n";
    std::cout << "\nЕщё раз? (1 - yes, 0 - no): ";
    std::cin >> answer;
    if (answer)
    {
        main();
    }
    return 0;
}
