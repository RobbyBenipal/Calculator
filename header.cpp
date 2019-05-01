#include "header.h"

/*
=================================================================================
Function Name: DisplayMenu()
Description: This function prints out a menu for the user to choose from. 
=================================================================================
*/
void DisplayMenu()
{
    cout << "Please choose from the following menu." << endl << endl;
    cout << "**************************************" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Turn off Calculator" << endl;
    cout << "**************************************" << endl << endl;
}

/*
=================================================================================
Function Name: Addition()
Description: This function adds two numbers together
=================================================================================
*/
int Addition(int x, int y)
{
    int sum;

    sum = x+y;

    cout << "The sum of your numbers is: " << sum << "." << endl << endl;

    return sum;
}

/*
=================================================================================
Function Name: Subtraction()
Description: This function subtracts two numbers together
=================================================================================
*/
int Subtraction(int x, int y)
{
    int result;

    result = x-y;

    cout << "The result of your numbers is: " << result << "." << endl << endl;

    return result;
}

/*
=================================================================================
Function Name: Multiplication()
Description: This function multiply two numbers together
=================================================================================
*/
int Multiplication(int x, int y)
{
    int product;

    product = x*y;

    cout << "The product of your numbers is: " << product << "." << endl << endl;

    return product;
}

/*
=================================================================================
Function Name: Division()
Description: This function divides two numbers together
=================================================================================
*/
int Division(int x, int y)
{
    int result;

    if(y==0)
    {
        cout << "You can not divide by 0" << endl;
        exit(1);
    }
    else
    {
        result = x/y;
    }

    cout << "The quotient of your numbers is: " << result << "." << endl << endl;

    return result;
}