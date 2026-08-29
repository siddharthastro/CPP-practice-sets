// printing a square pattern 
#include <iostream>
#include <iomanip>
// writing the function and to make sure the pattern is clean every * has the width of 3 for the sake of the print
void pattern (int size)
{
    for(int j= 0; j < size; j++)
    {
        for(int i =0; i< size; i++)
        {
            std::cout<< std::setw(3) << "*";
        }
        std::cout << "\n";
    }
    return;
}
int main()
{
    int Patternsize;
    do
    {std::cout << "Please enter the size of the side of the square" << "\n";
    std::cin >> Patternsize;}
    while(Patternsize <= 0);
    std ::cout << "\n";
    // calling the function to print pattern
    pattern(Patternsize);
    return 0;
    
}