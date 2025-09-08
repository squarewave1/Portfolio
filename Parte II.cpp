//Jobally Forde Robins96753
//Adrian Garcia- 109595
//Roberto Bonilla- 113243
//Felix Rivera Rodríguez- 52743
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;
void checkVariable(char*, int, int, int, int);
void checkAssingment(char*, char*, char*, char*, char*, int, int, int, int);
void checkArithmetic();

int main()
{
    char end[] = "END.", print[] = "PRINT", if_[] = "IF", read[] = "READ", eq[] = ".EQ.", add[] = ".ADD.", mul[] = ".MUL.", sub[] = ".SUB.", div[] = ".DIV.", or_[] = ".OR.", and_[] = ".AND.", xor_[] = ".XOR.", then[] = "THEN", rem[] = "REM";
    char input[100];
    char input2[100];
    int number = 1, number2 = 1;
    int exit = 1;

    while (exit)
    {
        cout << "Enter: ";
        cin.getline(input, 100);
        int size = strlen(input);

        for (int i = 0; i < size; i++)
        {
            input[i] = toupper(input[i]);
        }
        int found = 0, found2 = 0, choise = 1;


        for (int i = 0; i < size; i++)
        {
            if (input[i] == '=')
            {
                found = 1;
            }
        }

        if (found)
        {
            checkAssingment(input, add, mul, sub, div, size, choise, number, number2);
        }
        else
        {
            //Para entrar REM
            if (input[0] == rem[0] && input[1] == rem[1] && input[2] == rem[2])
            {
                cout << "Comment Statement";
            }

            //.XOR.
            else if (xor_[0] == input[0] && xor_[1] == input[1] && xor_[2] == input[2] && xor_[3] == input[3] && xor_[4] == input[4])
            {
                cout << "Invalid Syntax";
            }

            //Para entrar THEN
            else if (input[0] == then[0] && input[1] == then[1] && input[2] == then[2] && input[3] == then[3])
            {
                cout << "THEN Statement";
            }

            //Para entrar .EQ.
            else if (eq[0] == input[0] && eq[1] == input[1] && eq[2] == input[2] && eq[3] == input[3])
            {
                cout << "Relational Operator";
            }

            //Para entrar .OR.
            else if (or_[0] == input[0] && or_[1] == input[1] && or_[2] == input[2] && or_[3] == input[3])
            {
                cout << "Logical Operator";
            }

            //Para entrar .AND.
            else if (and_[0] == input[0] && and_[1] == input[1] && and_[2] == input[2] && and_[3] == input[3] && and_[4] == input[4])
            {
                cout << "Arithmetic Operator";
            }

            //Para entral .ADD.
            else if (add[0] == input[0] && add[1] == input[1] && add[2] == input[2] && add[3] == input[3] && add[4] == input[4])
            {
                cout << "Arithmetic Operator";
            }

            //Para entrar END.
            else if (input[0] == end[0] && input[1] == end[1] && input[2] == end[2] && input[3] == end[3])
            {
                exit = 0;
            }

            //Para entrar IF
            else if (input[0] == if_[0] && input[1] == if_[1])
            {
                cout << "IF Statement";
            }

            //Para entrar READ
            else if (input[0] == read[0] && input[1] == read[1] && input[2] == read[2] && input[3] == read[3])
            {
                for (int i = 0; i < size; i++)
                {
                    if (isspace(input[i]))
                    {
                        choise = 0;
                    }
                }
                if (choise)
                {
                    cout << "READ Statement";
                }
                else
                {
                    checkVariable(input, size, choise, number, number2);
                }

            }

            //Para entrar PRINT
            else if (input[0] == print[0] && input[1] == print[1] && input[2] == print[2] && input[3] == print[3] && input[4] == print[4])
            {
                for (int i = 0; i < size; i++)
                {
                    input2[i]== input[i];
                }
            }

            //Para entrar Varible y Numeros
            else
            {
                for (int i = 0; i < size; i++)
                {
                    if (isdigit(input[i]))
                    {
                        choise = 0;
                    }
                }
                checkVariable(input, size, choise, number, number2);
            }

        }
    }
    
    for (int i = 0; i < ; i++)
    {
        cout << input[i];
    }
    return 0;
}
//==============================================================================================================================================================================================================================================================================================================================================================================================>

//functions:

void checkVariable(char* input, int size, int choise, int number, int number2)
{
    if (1)
    {
        //int
        if (*input == 'A' || *input == 'B' || *input == 'C' || *input == 'D' || *input == 'E' || *input == 'F')
        {

            for (int i = 0; i < size; i++)
            {
                if (ispunct(input[i]))
                {
                    number = 0;
                }
            }
            switch (number)
            {
            case 0: cout << "Invalid ";
                break;
            case 1:
                if (choise)
                {
                    cout << "Variable int";
                }
                else
                {
                    cout << "Invalid variable";
                }
            }
        }

        //real
        else if (*input == 'G' || *input == 'H' || *input == 'I' || *input == 'J' || *input == 'K' || *input == 'L' || *input == 'M' || *input == 'N')
        {

            for (int i = 0; i < size; i++)
            {
                if (ispunct(input[i]))
                {
                    number = 0;
                }
            }
            switch (number)
            {
            case 0: cout << "Invalid syntax";
                break;
            case 1:
                if (choise)
                {
                    cout << "Variable real";
                }
                else
                {
                    cout << "Invalid variable";
                }
            }
        }

        //string
        else if (*input == 'O' || *input == 'P' || *input == 'Q' || *input == 'R' || *input == 'S' || *input == 'T' || *input == 'U' || *input == 'V' || *input == 'W' || *input == 'X' || *input == 'Y' || *input == 'Z')
        {

            for (int i = 0; i < size; i++)
            {
                if (ispunct(input[i]))
                {
                    number = 0;
                }
            }
            switch (number)
            {
            case 0: cout << "Invalid syntax";
                break;
            case 1:
                if (choise)
                {
                    cout << "Variable string";
                }
                else
                {
                    cout << "Invalid variable";
                }
            }
        }
        else
        {

            if (*input == '0' || *input == '1' || *input == '2' || *input == '3' || *input == '4' || *input == '5' || *input == '6' || *input == '7' || *input == '8' || *input == '9' || *input == '-')
            {
                int check = 1;
                number = 1;
                number2 = 1;
                for (int i = 0; i < size; i++)
                {
                    if (isalpha(input[i]))
                    {
                        check = 0;
                    }

                }
                switch (check)
                {
                case 0: cout << "Invalid syntax";
                    break;
                case 1:
                    for (int i = 0; i < size; i++)
                    {
                        if (input[i] == '.')
                        {
                            number = i;
                        }
                        if (isspace(input[i]))
                        {
                            number2 = i;
                        }
                    }
                    if (input[number] == '.')
                    {
                        cout << "Real Number";
                    }
                    else if (input[number2] == ' ')
                    {
                        cout << "Invalid syntax";
                    }
                    else
                    {
                        cout << "Number";
                    }
                    break;
                }
            }
            else
            {
                for (int i = 0; i < size; i++)
                {
                    if (ispunct(input[i]))
                    {
                        number = i;
                    }
                }
                if (input[number] == '.')
                {
                    cout << "Invalid syntax";
                }
            }
        }
    }
}

//functon2:
void checkAssingment(char* input, char* add, char* mul, char* sub, char* div, int size, int choise, int number, int number2)
{
    number = 0;

        //int
    if (*input == 'A' || *input == 'B' || *input == 'C' || *input == 'D' || *input == 'E' || *input == 'F')
    {
        if (isdigit(input[1]))
        {
            number = 1;
        }
        if (isdigit(input[0]))
        {
            number = 1;
        }
        switch (number)
        {
        case 0:
            number = 1;
            for (int i = 0; i < size; i++)
            {
                if (input[i] == '"')
                {
                    number = 0;
                }
            }
            if (number)
            {
                
            }
            else
            {
                cout<<"Invalid not an integer"<<endl;
            }
            break;
        case 1: cout << "Invalid variable" << endl;
            break;
        }

    }

    //real
    else if (*input == 'G' || *input == 'H' || *input == 'I' || *input == 'J' || *input == 'K' || *input == 'L' || *input == 'M' || *input == 'N')
    {
        if (isdigit(input[1]))
        {
            number = 1;
        }
        if (isdigit(input[0]))
        {
            number = 1;
        }
        switch (number)
        {
        case 0:
            number = 1;
            for (int i = 0; i < size; i++)
            {
                if (input[i] == '"')
                {
                    number = 0;
                }
            }
            if (number)
            {
                cout << "Assigment real number" << endl;
            }
            else
            {
                cout << "Invalid not an reeal number" << endl;
            }
            break;
        case 1: cout << "Invalid variable" << endl;
            break;
        }

    }

    //string
    else if (*input == 'O' || *input == 'P' || *input == 'Q' || *input == 'R' || *input == 'S' || *input == 'T' || *input == 'U' || *input == 'V' || *input == 'W' || *input == 'X' || *input == 'Y' || *input == 'Z')
    {
        if (isdigit(input[1]))
        {
            number = 1;
        }
        if (isdigit(input[0]))
        {
            number = 1;
        }
        switch (number)
        {
        case 0:
            cout << "Assigment string" << endl;
            break;
        case 1: cout << "Invalid variable" << endl;
            break;
        }
    }
}

void checkArithmetic()
{
    cout << "Arithmetic Operation" << endl;
}
