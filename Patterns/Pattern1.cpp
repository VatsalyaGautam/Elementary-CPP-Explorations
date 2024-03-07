#include <iostream>
int main()
{
    int t;
    std::cout << "Testcase:" << std::endl;
    std::cin >> t;
    while (t--)
    {
        int i, j, n;
        std::cin >> n;
        for (i = 1; i <= n; i++)
        {

            for (j = 1; j <= i; j++)
            {
                std::cout << "*"
                          << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
