# include <ctime>
# include <iostream>
# include <cstdlib>
int main()
{
    int low = 5;
    int high = 15;
    int trylimint = 5;
    int guess;

    srand(time(0));
    int temp = rand();
    int num = temp%11 + 5;

    int counter = 1;
    bool found = false;
    while(counter <= trylimint && !found)
    {
        do
        {
            std::cout << "Please enter your guess (5 to 15) : " << "\n";
            std::cin >> guess;
        }while(guess < 5 || guess > 15);

        if(guess == num)
        {
            found = true;
        }
        else if(guess > num)
        {
            std::cout << "Your guess is too high!" << "\n";
        }
        else if(guess < num)
        {
            std::cout << "Your guess is too low" << "\n";
        }
        counter++;
    }
    
    if(found)
    {
        std::cout << "Congratulations you found the number!! "<<"\n";
        std::cout << "The number was : " << num << "\n";
        std::cout << "Your total number of tries was : " << counter << "\n";
    }
    else 
    {
        std::cout << "Sorry you didn't find the number!! "<<"\n";
        std::cout << "The number was : " << num << "\n";
    }
    return 0;
}