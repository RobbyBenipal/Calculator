/*
===============================================================
Name:           Robby Benipal
Date:           August 10, 2016
Description:    This program will act as a fully functional 
                calculator
===============================================================
*/

#include <iostream>

using namespace std;

void DisplayMenu();
int Addition(int x, int y);
int Subtraction(int x, int y);
int Multiplication(int x, int y);
int Division(int x, int y);

int main()
{
    int UserOption;
    int Num1, Num2;
    cout << "\nWelcome to your personal calculator!" << endl << endl;

    while(1)
    {
        DisplayMenu();
        cin >> UserOption;

        switch(UserOption) // Switch cases are created to manipulate each option from the menu
        {
            case 1: // case for adding 2 numbers
                cout << "Please enter the 2 numbers you would like to add:" << endl;
                cin  >> Num1 >> Num2;
                Addition(Num1, Num2);
                break;

            case 2: // case for subtracting 2 numbers
                cout << "Please enter the 2 numbers you would like to subtract:" << endl;
                cin  >> Num1 >> Num2;
                Subtraction(Num1, Num2);
                break;
        
            case 3: // case for multiplying 2 numbers
                cout << "Please enter the 2 numbers you would like to multiply:" << endl;
                cin  >> Num1 >> Num2;
                Multiplication(Num1, Num2);
                break;
        
            case 4: // case created to print the list of values.
                cout << "Please enter the 2 numbers you would like to divide:" << endl;
                cin  >> Num1 >> Num2;
                Division(Num1, Num2);
                break;
        
            case 5: // case created to exit the program. 
                cout << "Turning off your Calculator..." << endl << endl; 
                exit(1); // Exits out of the program 
                break;

            default: // Default case for anything other than what is on the menu 
                cout << "You have chosen an invalid option. Please try again." << endl << endl; 
        }
    }
    return 0;
}

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

    cout << "The sum of your numbers is " << sum << "." << endl << endl;

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

    cout << "The result of your numbers is " << result << "." << endl << endl;

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

    cout << "The product of your numbers is " << product << "." << endl << endl;

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
        cout << "ERROR: You can not divide by 0" << endl;
        exit(1);
    }
    else
    {
        result = x/y;
    }

    cout << "The result of your numbers is " << result << "." << endl << endl;

    return result;
}