#include <iostream>
#include <cstdint>
#include <limits>
#include <cstdlib>

void ThreeAvg()
{
    bool flag = false;
    int x, int y, temp;
    std::cout << "Введите числитель и знаменатель дроби \n";
    std::cin >> x >> y;
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
        flag = true;
    }
    for (int i = y; i > 0; --i)
    {
        if (x % i == 0 && y % i == 0 && !flag)
        {
            x /= i; y /= i;
            std::cout << x * i << "/" << y * i << "= " << x / y << " + " << x << "/" << y;
            return;
        }
        if (x % i == 0 && y % i == 0 && flag)
        {
            x /= i; y /= i;
            std::cout << y * i << "/" << x * i << "= " << y / x << " + " << y << "/" << x;
            return;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
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
