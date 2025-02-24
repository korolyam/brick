#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <ranges>
#include <array>
#include <functional>
#include <iomanip>
class I
{
    void program1()
    {
        std::cout << "Программа для сортировки массива из 10 случ. элементов двумя методами.\n";
        bool flag = false;
        const int n = 10;
        int array[n];
        std::cout << "Первоначальный массив\n";
        for (int i = 0; i < n; ++i)
        {
            array[i] = rand() % 10 + 1;
            std::cout << array[i] << " ";
        }
        std::cout << "\n";
        std::sort(array[0], array[n - 1]);
        std::cout << "Отсортированный массив\n";
        for (int i = 0; i < n; ++i)
        {
            array[i] = rand() % 10 + 1;
            std::cout << array[i] << " ";
        }
        std::cout << "\n";
        std::cout << "Первоначальный массив\n";
        for (int i = 0; i < n; ++i)
        {
            array[i] = rand() % 10 + 1;
            std::cout << array[i] << " ";
        }
        std::cout << "\n";
        b(array);
        std::cout << "Отсортированный массив\n";
        for (int i = 0; i < n; ++i)
        {
            array[i] = rand() % 10 + 1;
            std::cout << array[i] << " ";
        }
        std::cout << "\n";
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
    void b(int vec[])
    {
        bool swapped;
        for (int i = 0; i < sizeof(vec); ++i)
        {
            swapped = false;
            for (int j = 0; j < sizeof(vec) - i - 1; ++j)
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
};