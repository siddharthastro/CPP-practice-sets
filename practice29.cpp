// finding the smallest and largest number in the data provided using manual insertion 
#include <iostream>
#include <limits>

int main()
{
    int size, number, smallest, largest;
    smallest = std::numeric_limits<int>::max();
    largest = std::numeric_limits<int>::min();
    do
    {
        std::cout << "Enter the size of the list (non negative)" << "\n";
        std::cin >> size;
    }while (size <=0);
    
    for(int i = 1; i <= size; i++ )
    {
        std::cout << "Please enter the number" << "\n";
        std::cin >> number;
        if (number < smallest)
        {
            smallest = number;
        }
        if (number > largest)
        {
            largest = number;
        }
    }
    std::cout << "Largest number in the series: " << largest << "\n";
    std::cout << "Smallest number in the series: " << smallest << "\n";
    return 0;
}