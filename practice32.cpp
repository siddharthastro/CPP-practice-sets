#include <iostream>
#include <cctype>
int main()
{
    char ch;
    int count = 0;
    while(std::cin >> std::noskipws>> ch)
    {
        if (isalpha(ch))
        {
            count++;
        }
        ch = toupper(ch);
        std::cout << ch;
    }
    std::cout << "The total number of alphabetic characters is:" << count;
    return 0;
}