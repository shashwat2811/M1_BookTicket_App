#include "calculator.h"

int main ()

{
    int clustop_choice, choice;
    char next_action = ' ';

    menu_display();
    scanf("%d", &clustop_choice);

    switch (clustop_choice)
    {

    case 1:
        system("cls");
        printf("\n Basic Math Operations\n");
        printf("Enter 1 for Additon\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\nEnter 5 for Power\n");
        printf("Enter 6 for Square Root\nEnter 7 for Factorial\nEnter 8 for Sine\nEnter 9 for Cosine\nEnter 10 for Tangent\n");
        printf("Enter your choice  ");scanf("%d", &choice);
        if (choice == 1) add();
            else if (choice == 2) sub();
            else if (choice == 3) mult();
            else if (choice == 4) di();
            else if (choice == 5) po();
            else if (choice == 6) sq();
            else if (choice == 7) facto();
            else if (choice == 8) sini();
            else if (choice == 9) cosi();
            else if (choice == 10) tani();
        printf("\n\nPress c to continue, q to Quit   ");
        scanf("%s", &next_action);
        if (next_action == 'c'|| next_action == 'C') main ();
        else exit(0);

    case 2:
        system("cls");
        printf("\n Base Conversion\n");
        printf("Enter 1 for Binary to Decimal Conversion\nEnter 2 for Octal to Decimal Conversion\nEnter 3 for Hexadecimal to Decimal Conversion\n");
        printf("Enter 4 for Decimal to Binary Conversion\nEnter 5 for Decimal to Octal Conversion\nEnter 6 for Decimal to Hexadecimal Conversion\n");
        printf("Enter your choice  ");scanf("%d", &choice);
        if (choice == 1) BinToDec();
            else if (choice == 2) OctalToDec();
            else if (choice == 3) HexaToDec();
            else if (choice == 4) DecToBin();
            else if (choice == 5) DecToOctal();
            else if (choice == 6) DecToHex();
        printf("\n\nPress c to continue, q to Quit   ");
        scanf("%s", &next_action);
        if (next_action == 'c'|| next_action == 'C') main ();
        else exit(0);

    case 3:
        system("cls");
        printf("\n Mathematical Operation on Binary Numbers\n");
        printf("\n Enter which complement you wish to find \nEnter 1 for One's Complement\nEnter 2 for Two's Complement ");
        scanf("%d", &choice);
        if (choice == 1) onescomplement ();
            else if (choice == 2) twoscomplement();
        printf("\n\nPress c to continue, q to Quit   ");
        scanf("%s", &next_action);
        if (next_action == 'c'|| next_action == 'C') main ();
        else exit(0);

    case 4:
        system("cls");
        printf("\n Binary to Gray Code Conversion\n");
        printf("\n Enter 1 for Binary to Gray Conversion\nEnter 2 for Gray to Binary Conversion\n");
        printf("Enter your choice  ");
        scanf("%d", &choice);
            if (choice ==1) BinToGray();
            else if (choice ==2) GrayToBin();
            else printf("Wrong Choice\n");
        printf("\n\nPress c to continue, q to Quit   ");
        scanf("%s", &next_action);
        if (next_action == 'c'|| next_action == 'C') main ();
        else exit(0);

    case 5:
        system("cls");
        printf("\n Truth Tabkes of Logic Gates\n");
        printf("\n \nEnter 1 to print the truth table of AND Gate\nEnter 2 to print truth table of OR Gate\nEnter 3 to print truth table of NOT Gate\n");
        printf("Enter your choice  ");
        scanf("%d", &choice);
        if (choice==1) printANDtable();
        else if (choice==2) printORtable();
        else if (choice==3) printNOTtable();
        else printf("Wrong Choice");
        printf("\n\nPress c to continue, q to Quit   ");
        scanf("%s", &next_action);
        if (next_action == 'c'|| next_action == 'C') main ();
        else exit(0);

    case 6:
        exit(0);
    }
    return 0;
}