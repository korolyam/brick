#include <cstdint>
#include <limits>
#include <cstdlib>
#include <iostream>
#include <locale.h>
void ThreeAvg()
{
    int n, temp, i = 0;
    int dig[10]{ 9,8,7,6,5,4,3,2,1,0 };
    std::cout << "Введите число\n";
    std::cin >> n;
    if (std::cin.fail())
    {
        std::cout << "Было введено недопустимое число";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    do
    {
        if ((pow(10, i + 1) < n))
        {
            temp = i > 0 ? fmod(n / pow(10, i), 10) : fmod(n, 10);
        }
        else
        {
            temp = n / pow(10, i);
                dig[9 - temp] = -10;
                break;
        }
        dig[9 - temp] = -10;
            ++i;
    }
    while (true);
    for (int j = 0; j < 10; j++)
    {
        if (dig[j] != -10)
        {
            std::cout << dig[j] << " ";
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