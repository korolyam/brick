#include <cstdint>
#include <limits>
#include <cstdlib>
#include <iostream>
#include <locale.h>
void ThreeAvg()
{
    int n;
    std::cout << "Введите число\n";
    std::cin >> n;
    if (std::cin.fail())
    {
        std::cout << "Было введено недопустимое число";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int v = 0; v < 10; v++)
            {
                if (i + j + v < n)
                {
                    std::cout << i * 100 + j * 10 + v << " ";
                }
            }
        }
    }
    std::cout << "\n";
    return;
}
int main()
{
    std::setlocale(LC_ALL, "Russian");
    do {
        ThreeAvg();
        std::cout << "\nЕщё раз? (1 - да, 0 - нет): ";
        int answer;
        std::cin >> answer;
        if (answer != 1)
        {
            break;
        }
    } while (true);
    return 0;
}