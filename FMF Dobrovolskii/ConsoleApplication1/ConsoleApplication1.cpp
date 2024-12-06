#include <iostream>
#include <cstdint>
#include <limits>
#include <cstdlib>

void ThreeAvg()
{  
    for (int i = 1; i <= 3; i++)
    {
        int temp = 0;
        for (int j = 1; j <= 10; j++)
        {
            int n = rand() % 11;
            std::cout << n << " ";
            temp += n;
        }
        double avg = temp / 10.0;
        std::cout << "Среднее арифметическое " << i << "-ой последовательности = " << avg << "\n";
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