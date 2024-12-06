#include <iostream>
#include <cstdint>
#include <limits>
#include <cstdlib>

void ThreeAvg()
{
    int k = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int v = 0; v <= 9; v++)
            {
                if (i == j && j != v || j == v && i != v || i == v && j != v)
                {
                    std::cout << i * 100 + j * 10 + v << " ";
                    k++;
                }
            }
        }
    }
    std::cout << "\nКоличество - " << k;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    do 
    {
        ThreeAvg();
    } while (false);
    return 0;
}
