#include <iostream>
#include <cmath>
void program1()
{
    std::cout << "Программа для конвертации бит в байты, килобайты, мегабайты и гигабайты\n";
    long long bit;
    std::cout << "Сколько бит?\n";
    std::cin >> bit;
    if (std::cin.fail())
    {
        std::cout << "Было введено недопустимое число";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    else
    {
        if (bit >= 0)
        { 
        if (bit >= LLONG_MAX)
        {
            std::cout << "Число слишком большое\n";
            return;
        }
        else
        {
            int g = bit / 8589934592;
            if (g > 0)
                bit = bit % 8589934592;
            int m = bit / 8388608;
            if (m > 0)
                bit = bit % 8388608;
            int k = bit / 8192;
            if (k > 0)
                bit = bit % 8192;
            int b = bit / 8;
            if (b > 0)
                bit = bit % 8;
            std::cout << "Информационный вес составляет " << g << " гигабайтов, " << m << " мегабайтов, " << k << " килобайтов, " << b << " байтов и " << bit << " битов.\n";
            return;
        }
        }
        else
        {
            std::cout << "Некоректное число бит.";
            return;
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
