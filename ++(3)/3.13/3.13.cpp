#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <algorithm>
void bubble(int vec[])
{
    bool swapped;
    for (int i = 0; i < 10; ++i)
    {
        swapped = false;
        for (int j = 0; j < 10 - i - 1; ++j)
        {
            if (vec[j] > vec[j + 1])
            {
                std::swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
int main()
{
    bool flag;
    int e = 0;
    int j = 0;
    int u = 0;
    int c = 0;
    int k = 22;
    setlocale(LC_ALL, "Russian");
    bool answer;
    const int n = 10;
    int array1[n];
    int array2[n];
    int Rarray[20];
    std::cout << "1-ый массив\n";
    for (int i = 0; i < n; ++i)
    {
      array1[i] = rand() % 30 + 1;
      std::cout << array1[i] << " ";
    }
    std::cout << "\n";
    std::cout << "2-ой массив\n";
    for (int i = 0; i < n; ++i)
    {
        array2[i] = rand() % 30 + 1;
        std::cout << array2[i] << " ";
    }
    std::cout << "\n";
    bubble(array1);
    bubble(array2);
    while(u < n || j < n)
    {
        flag = true;
            if (array1[u] < array2[j] && array1[u] != k && u < n)
            {
                k = array1[u];
                Rarray[c] = k;
                ++u;
                ++c;
                flag = false;
            }
            if (array2[j] < array1[u] && array2[j] != k && j < n)
            {
                k = array2[j];
                Rarray[c] = k;
                ++j;
                ++c;
                flag = false;
            }
            if (array1[u] <= array2[j] && u < n && flag)
            {
                ++u;
                continue;
            }
            if (array2[j] <= array1[u] && j < n && flag)
            {
                ++j;
                continue;
            }
            if (u >= n)
            {
                u = 9;
                array1[u] = INT_MAX;
            }
            if (j >= n)
            {
                j = 9;
                array2[j] = INT_MAX;
            }
            ++e;
            if (e > 100)
            {
                break;
            }
    }
    std::cout << "Результирующий массив\n";
    for (int i = 0; i < c; ++i)
    {
        std::cout << Rarray[i] << " ";
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

