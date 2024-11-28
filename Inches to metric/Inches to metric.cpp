#include <iostream>
#include <cmath>
void program1()
{
    std::cout << "Программа для конвертации дюймов в миллиметры, сантиметры и метры\n";
    long long inch;
    std::cout << "Сколько дюймов?\n";
    std::cin >> inch;
    if (std::cin.fail())
    {
        std::cout << "Было введено недопустимое число";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    else
    {
        if (inch >= 0)
        {
            if (inch * 25.4 >= LLONG_MAX)
            {
                std::cout << "Число слишком большое\n";
                return;
            }
            else
            {
                inch *= 25.4;
                long long meter = inch / 1000;
                if (meter > 0)
                   inch = inch % 1000;
                long long s = inch / 10;
                if (s > 0)
                    inch = inch % 10;
                std::cout << "Длина составляет " << meter << " метров, " << s << " сантиметров и " << inch << " миллиметров.\n";
                return;
            }
        }
        else
        {
            std::cout << "Некоректное число дюймов.\n";
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
