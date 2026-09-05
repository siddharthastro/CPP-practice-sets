#include <iostream>
# include <cstdlib>
# include <ctime>

int function1()
{
// This function is a standalone function for a rock paper scissors decision making unit 
srand((time(0)));
int alpha = rand();
int beta = alpha%3 + 1;
return beta;
}

void design(int beta)
{
    if(beta == 1)
    {
     std::cout << R"EOF(
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
)EOF" << '\n';
std::cout << "Computer chose Stone" << "\n";
    }
    else if (beta == 2)
    {
        std::cout << R"EOF(
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
)EOF" << '\n';
std::cout << "Computer chose Paper" << "\n";
    }
    else if (beta == 3)
    {
        std::cout << R"EOF(
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
)EOF" << '\n';
std::cout << "Computer chose Scissors" << "\n";
    }
}

int main()
{
    std::cout << "Please enter your input" << "\n";
    std::cout << "1 = Stone" << "\n";
    std::cout << "2 = Paper" << "\n";
    std::cout << "3 = Scissors" << "\n";
    int input;
    do
    {
    std::cin >> input;
    }while (input != 1 && input != 2 && input != 3);
    
    int computer_choice = function1();
    design(computer_choice);

    if( computer_choice == 1 && input == 2)
    {
        std::cout << "You Won" << "\n";
    }
    else if( computer_choice == 2 && input == 3)
    {
        std::cout << "You Won" << "\n";
    }
    else if( computer_choice == 1 && input == 1)
    {
        std::cout << "Tie" << "\n";
    }
    else if( computer_choice == 2 && input == 2)
    {
        std::cout << "Tie" << "\n";
    }
    else if( computer_choice == 3 && input == 3)
    {
        std::cout << "Tie" << "\n";
    }
    else if( computer_choice == 3 && input == 1)
    {
        std::cout << "You Won" << "\n";
    }
    else if( computer_choice == 1 && input == 3)
    {
        std::cout << "You Lost" << "\n";
    }
    else if( computer_choice == 2 && input == 1)
    {
        std::cout << "You Lost" << "\n";
    }
    else if( computer_choice == 3 && input == 2)
    {
        std::cout << "You Lost" << "\n";
    }
}
