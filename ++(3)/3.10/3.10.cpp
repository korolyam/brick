#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <string>
class I
{
    void program()
    {
        std::cout << "Программа для заполнения массива 10 случ. элементами без повтора\n";
        int a, b;
        bool flag = false;
        const int n = 10;
        int array[n];
        std::cout << "Введите нижнюю и верхнюю границы диапазона\n";
        std::cin >> a >> b;
        for (int i = 0; i < n; ++i)
        {
            while (array[i] == 0)
            {
                int k = rand() % b + a;
                for (int j = 0; j < n; ++j)
                {
                    if (array[j] == k)
                    {
                        flag = true;
                    }
                }
                if (!flag)
                {
                    array[i] = k;
                }
                flag = false;
            }
        }
        std::cout << "Получившийся массив\n";
        for (int i = 0; i < n; ++i)
        {
            std::cout << array[i] << " ";
        }
    }
    int main()
    {
        setlocale(LC_ALL, "Russian");
        bool answer;
        program();
        std::cout << "\nЕщё раз? (1 - yes, 0 - no): ";
        std::cin >> answer;
        if (answer)
        {
            main();
        }
        return 0;
    }
};
