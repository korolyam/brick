#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <algorithm>
int main()
{
    bool flag = false;
    setlocale(LC_ALL, "Russian");
    bool answer;
    const int n = 600;
    int numbers[n];
    int count[6] = { 0 };
    for (int i = 0; i < n; i++) 
    {
        numbers[i] = std::rand() % 6 + 1;
        count[numbers[i] - 1]++;
    }
    for (int i = 0; i < 6; i++) {
        std::cout << "Число " << (i + 1) << " Повторяется " << count[i] << " раз" << "\n";
    }
    int maxLength = 1, currentLength = 1;
    int maxNumber = numbers[0], maxStartIndex = 0, currentStartIndex = 0;
    for (int i = 1; i < n; i++) 
    {
        if (numbers[i] == numbers[i - 1]) 
        {
            currentLength++;
        }
        else 
        {
            if (currentLength > maxLength) 
            {
                maxLength = currentLength;
                maxNumber = numbers[i - 1];
                maxStartIndex = currentStartIndex;
            }
            currentLength = 1;
            currentStartIndex = i;
        }
    }
    if (currentLength > maxLength) 
    {
        maxLength = currentLength;
        maxNumber = numbers[n - 1];
        maxStartIndex = currentStartIndex;
    }
    std::cout << "\nСамая длинная цепочка повторяющихся элементов:\n";
    std::cout << "Число: " << maxNumber << "\n";
    std::cout << "Длина цепочки: " << maxLength << "\n";
    std::cout << "Индекс начала цепочки: " << maxStartIndex << "\n";
    std::cout << "\nЕщё раз? (1 - yes, 0 - no): ";
    std::cin >> answer;
    if (answer)
    {
        main();
    }
    return 0;
}
