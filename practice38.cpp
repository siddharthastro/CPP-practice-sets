// writing a value returning function with no parameters 
# include <iostream>
//writing the value returning function
int getData()
{
    int number;
    do
    {
        std::cout << "Please provide a positive number" << "\n";
        std::cin >> number;
    }
    while(number < 0);
    return number;
}
//writing the main function
int main()
{
    std::cout << "The rightmost number finding program initiating ......" << "\n";
    int gamma = getData();
    std::cout << "The rightmost digit is : " << gamma % 10 << "\n";
    return 0;
}