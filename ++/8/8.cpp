#include <iostream>
#include <cmath>
void program1()
{
    std::cout << "Программа для нахождения точки входа элемента в массив и его количества повторений.\n";
    bool flag = false;
    const int n = 10;
    int array[n];
    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % 10 + 1;
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j >= 0; --j)
        {
            if (array[i] == array[j] && i != j)
            {
                flag = true;
            }
        }
        if (!flag)
        {
            int k = 0;
            for (int j = 0; j < n; ++j)
            {
                if (array[j] == array[i])
                {
                    k++;
                }
            }
            std::cout << array[i] << " " << k << " " << i << "\n";
        }
        flag = false;
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
