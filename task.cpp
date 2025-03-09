// Variant 1

#include <iostream>
#include <cmath>


// Function for Excercise 1
void ex1()
{
    float x, y;
    std::cout << "Input x: ";
    std::cin >> x;
    std::cout << "Input y: ";
    std::cin >> y;

    if ((x * x + y * y < 9) && (y > 0))
    {
        std::cout << "Yes";
    }
    else if ((x * x + y * y > 9) || (y < 0))
    {
        std::cout << "No";
    }
    else 
    {
        std::cout << "On border";
    }
}

// Function for Excercise 2
void ex2()
{
    int num;
    std::cout << "Input month number: ";
    std::cin >> num;
    switch (num)
    {
        case 1:
            std::cout << "January";
            break;
        case 2:
            std::cout << "February";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6:
            std::cout << "June";
            break;
        case 7:
            std::cout << "Jule";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "December";
            break;
        default:
            std::cout << "Input error. Try again!";
    }
}

// Function for Excercise 3
void ex3While()
{
    int i = 1;
    while (i <= 21)
    {
        std::cout << i << " ";
        i += 2;
    }
    std::cout << std::endl;
}

void ex3DoWhile()
{
    int i = 1;
    do
    {
        std::cout << i << " ";
        i += 2;
    }
    while (i <= 21);
    std::cout << std::endl;
}

void ex3For()
{
    for (int i = 1; i <= 21; i += 2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// Function for Excercise 4
void ex4()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            std::cout << 5 << " ";
        }
        std::cout << std::endl;
    }
}


// Function for Excercise 5


int main()
{
    // Exercise 1.
    // ex1();

    // Exercise 2.
    // ex2();

    // Exercise 3.
    // ex3While();

    // ex3DoWhile();

    // ex3For();

    // Exercise 4.
    ex4();

    // Exercise 5.
    

    return 0;
}