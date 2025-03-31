#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <algorithm>
int main()
{
    setlocale(LC_ALL, "Russian");
    bool answer;
    int trial = 0;
    bool magic;
    int u = 0;
    do
    {
        bool flag = true;
        int array1[9];
        int c = 0;
        u = 0;
        int o = 0;
        const int n = 3;
        magic = true;
        int array2[n][n];
        ++trial;
        while (u < 9)
        {
            int k = rand() % 9 + 1;
            for (int j = 0; j <= u; ++j)
            {
                if (array1[j] == k)
                {
                    flag = false;
                }
            }
            if (flag)
            {
                array1[u] = k;
                ++u;
            }
            flag = true;
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                array2[i][j] = array1[c];
                ++c;
                std::cout << array2[i][j] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
        int sum0 = 0;
        int sumr = 0;
        int sumc = 0;
        int sumd = 0;
        int sumsd = 0;
        for (int i = 0; i < n; ++i)
        {
            sum0 += array2[0][i];
            sumd += array2[i][i];
            sumsd += array2[i][n - 1 - i];
        }
        if (sum0 != sumd || sum0 != sumsd)
        {
            magic = false;
        }
        if (magic)
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    sumr += array2[i][j];
                    sumc += array2[j][i];
                }
                if (sum0 != sumr || sum0 != sumc)
                {
                    magic = false;
                }
                sumr = 0;
                sumc = 0;
            }
        }
        if (magic)
        {
            std::cout << "Это магический квадрат\n";
        }
        for (int i = 0; i < 9; ++i)
        {
            array1[i] = 0;
            array2[i / 3][i] = 0;
        }
    } while (!magic);
    std::cout << "С " << trial << " попытки";
    std::cout << "\nЕщё раз? (1 - yes, 0 - no): ";
    std::cin >> answer;
    if (answer)
    {
        main();
    }
    return 0;
}

