
#include <iostream>

int main()
{
    double ba, bb, bc, ga, gb;
    setlocale(LC_ALL, "Russian");
    std::cout << "Программа для вычисления пройдёт ли кирпич (3 измерения) через прямоугольное отверстие (2 измерения)\n";
    std::cout << "Введите длину, ширину и длину кирпича соответственно\n";
    std::cin >> ba;
    std::cin >> bb;
    std::cin >> bc;
    std::cout << "Введите длину и ширину отверстия соответственно\n";
    std::cin >> ga;
    std::cin >> gb;
    if (ba * bb <= ga * gb || ba * bc <= ga * gb || bb * bc <= ga * gb)
    {
        std::cout << "Пройдёт\n";
    }
    else
    {
        std::cout << "Не пройдёт\n";
    }
    std::cout << "Повторить (1 - да, 0 - нет)\n";
    std::cin >> ba;
    if (ba == 1)
    {
        main();
    }
    return 0;
}

