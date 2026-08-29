// Making a complex pattern printing function which prints the patterns based on the input provided by the user
#include <iostream>
#include <iomanip>
#include <string>

// Defining the patterns to be printed
void Square(int side)
{
    for(int j= 0; j < side; j++)
    {
        for(int i =0; i< side; i++)
        {
            std::cout<< std::setw(3) << "*";
        }
        std::cout << "\n";
    }
    return;
}

void Triangle(int height)
{
    for(int j =1; j <=height; j++)
    {
        for(int i =0; i<j; i++)
        {
            std::cout<< std::setw(2) << "*";
        }
        std::cout <<"\n";
    }
    return;
}

void Circle(int radius)
{
    for(int j = -radius; j <= radius; j++)
    {
        for(int i = -radius; i <= radius; i++)
        {
            if( i * i + j * j <= radius*radius + radius/2 && i * i + j * j >= radius*radius - radius/2)
            {
                std::cout << "***";
            }
            else
            {
                std::cout << "   ";
            }
        }
        std::cout << "\n";
    }
    return;
}

void Rectangle(int length, int width)
{
for(int j = 0; j < length; j++)
{
    for(int i = 0; i < width; i++)
    {
        std::cout << std::setw(3) << "*";
    }
    std::cout << "\n";
}
return;
}

// The main function used for the inputs
int main()
{
bool Execute = true;
while(Execute)
{
    std::cout << "Please enter the shape (Square, Triangle, Circle, Rectangle)" << "\n";
    std::string shape;
    std::cin >> shape;
    if(shape == "Square" || shape == "square")
    {
        int side;
        do
        {
            std::cout << "Please enter the side of the square"<<"\n";
            std::cin >> side;
        }
        while(side <= 0);
        Square(side);
    }
    else if(shape == "Triangle" || shape == "triangle")
    {
        int height;
        do
        {
            std::cout << "Please enter the width of the Triangle" << "\n";
            std::cin >> height;
        }
        while(height <= 0);
        Triangle(height);
    }
    else if(shape == "Circle" || shape == "circle")
    {
        int radius;
        do
        {
            std::cout << "Please enter the radius of the circle" << "\n";
            std::cin >> radius;
        }
        while(radius <= 0);
        Circle(radius);
    }
    else if(shape == "Rectangle" || shape == "rectangle")
    {
        int length;
        int width;
        do
        {
            std::cout << "Please enter the length of the rectangle" << "\n";
            std::cin >> length;
            std::cout << "Please enter the width of the rectangle" << "\n";
            std::cin >> width;
        }
        while(length <= 0 || width <= 0);
        Rectangle(length, width);
    }
    else
    {
        std::cout << "You have not entered any designated shape" << "\n";
    }
    std::cout << "Do you want to continue the Program(Y/N)" << "\n";
    char Operator;
    std::cin >> Operator;
    if(Operator == 'Y' || Operator == 'y')
    {
     Execute = true;
    }
    else if (Operator == 'N' || Operator == 'n')
    {
     Execute = false;
    }

}

return 0;
}