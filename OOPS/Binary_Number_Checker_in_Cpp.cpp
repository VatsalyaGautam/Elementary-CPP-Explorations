#include <iostream>
#include <string>
class binary
{
    std::string s;

public:
    void read(void);
    void chk(void);
};
void binary::read()
{
    std::cout << "Enter a binary number" << std::endl;
    std::cin >> s;
}

void binary::chk()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            std::cout << "Not Binary" << std::endl;
            exit(0);
        }
        
    }
}

int main()
{
    binary number;
    for (int j = 0; j < 5; j++)
    {
        number.read();
        number.chk();
    }

    return 0;
}
