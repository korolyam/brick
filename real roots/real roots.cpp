#include <iostream>
#include <cmath>

void program0()
{
    double a, b, c, d, x1, x2;
    std::cout << "Программа для нахождения корней квадратного уравнения вида f(ax^2+bx+c) = 0\n";
    std::cout << "Введите коэффиценты a,b и c через пробел\n";
    std::cin >> a >> b >> c;
        if (a == 0)
        {
            std::cout << "Уравнение не квадратное";
            return;
        }
        else
        {
            d = pow(b, 2) - 4 * a * c;
            if (d < 0)
            {
                std::cout << "Нет действительный корней\n";
                return;
            }
            else
            {
                x1 = (-b - sqrt(d)) / (2 * a);
                x2 = (-b + sqrt(d)) / (2 * a);
            }
        }
        std::cout << "Первый корень уравнения = " << x1 << "\n Значение функции в этой точке = " << a * pow(x1, 2) + b * x1 + c << "\n";
        std::cout << "Второй корень уравнения = " << x2 << "\n Значение функции в этой точке = " << a * pow(x2, 2) + b * x2 + c << "\n";
        return;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    bool answer;

    program0();

    std::cout << "\nЕщё раз? (1 - yes, 0 - no): ";
    std::cin >> answer;

    if (answer)
    {
        main();
    }
    return 0;
}
