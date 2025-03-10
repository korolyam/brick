#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>
#include <array>
#include <functional>
#include <iomanip>
#include <string>
#include <algorithm>
class I
{
    void program1()
    {
        int min = INT32_MAX;
        int max = INT32_MIN;
        bool flag = false;
        const int n = 10;
        int array[n];
        std::cout << "Первоначальный массив\n";
        for (int i = 0; i < n; ++i)
        {
            array[i] = rand() % 10 + 1;
            std::cout << array[i] << " ";
            if (array[i] < min)
            {
                min = array[i];
            }
            if (array[i] > max)
            {
                max = array[i];
            }
        }
        std::cout << "Элементы в интервале между минимальным и максимальным, не входящие в массив\n";
        for (int i = min+1; i < max; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (array[j] == i)
                {
                    flag = true;
                }
            }
            if (!flag)
            {
                std::cout << i << " ";
            }
        }
    }
    int main()
    {
        setlocale(LC_ALL, "Russian");
        bool answer;
        program1();
        std::cout << "\nЕщё раз? (1 - yes, 0 - no): ";
        std::cin >> answer;

        if (answer)
        {
            main();
        }
        return 0;
    }
};
