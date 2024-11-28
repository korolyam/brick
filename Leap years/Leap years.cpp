#include <iostream>
#include <cmath>
void program1()
{
    std::cout << "Программа для определения является ли год високосным (для годов с 1600 до 2100)\n";
    int year;
    std::cout << "Год?\n";
    std::cin >> year;
    if (std::cin.fail())
    {
        std::cout << "Было введено недопустимое число";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    else
    {
        if (year < 1600 && year > 2100)
        {
            std::cout << "Год не входит в диапазон\n";
            return;
        }
        else
        {
            if (year % 4 == 0)
            {
                if (year % 100 == 0 && year % 400 != 0)
                {
                    std::cout << "Год не високосный\n";
                    return;
                }
                std::cout << "Год високосный\n";
                return;
            }
            std::cout << "Год не високосный\n";
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
