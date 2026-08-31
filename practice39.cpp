#include <iostream>
int getscore();
char findgrade(int score);
void printgrade(int score, char grade);

int main()
{
    int score;
    char grade;

    score = getscore();
    grade = findgrade(score);
    printgrade(score, grade);
    return 0;

}

int getscore()
{
    int score;
    do
    {
    std::cout << "Please enter the score from 0 - 100" << "\n";
    std::cin >> score;
    }
    while(score < 0 || score > 100);
    return score;
}

char findgrade(int score)
{
    char grade;
    if(score >= 90)
    {
        grade = 'A';
    }
    else if(score >= 80)
    {
        grade = 'B';
    }
    else if(score >= 70)
    {
        grade = 'C';
    }
    else if(score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    return grade;
}

void printgrade(int score, char grade)
{
    std::cout << "Result of the test" << "\n";
    std::cout << "You scored " << score << " out of 100" << "\n";
    std::cout << "Your Grade is: "<< grade << "\n";
    return;
}