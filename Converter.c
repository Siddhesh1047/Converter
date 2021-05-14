#include <stdio.h>
#include <conio.h>

int Temperature()
{
    float run, Kelvin, Fahrenheit, Centigrade;

    printf("\nSelect from below parameters to start conversion\n\n");
    printf(" 1 = Centigrade --> Kelvin \t 3 = Kelvin --> Centigrade\t5 = Fahrenheit --> Centigrade\n");
    printf(" 2 = Centigrade --> Fahrenheit \t 4 = Kelvin --> Fahrenheit\t6 = Fahrenheit --> Kelvin\n\n");
    printf("Enter value here\n");
    scanf("%f", &run);

    if (run == 1)
    {
        printf("Enter Temperature in Centigrade\n");
        scanf("%f", &Centigrade);
        Kelvin = (Centigrade + 273.15);
        printf("Temperature in Kelvin = %.2f Kelvin\n", Kelvin, Centigrade);
    }

    if (run == 2)
    {
        printf("\nEnter Temperature in Centigrade\n");
        scanf("%f", &Centigrade);
        Fahrenheit = (Centigrade * 9/5) + 32;
        printf("\nTemperature in Fahrenheit = %.2f Fahrenheit\n\n", Fahrenheit, Centigrade);
    }
    
    if (run == 3)
    {
        printf("\nEnter Temperature in Kelvin\n");
        scanf("%f", &Kelvin);
        Centigrade = (Kelvin - 273.15);
        printf("\nTemperature in Centigrade = %.2f Centigrade\n\n", Centigrade, Kelvin);
    }
    
    if (run == 4)
    {
        printf("\nEnter Temperature in Kelvin\n");
        scanf("%f", &Kelvin);
        Fahrenheit = (Kelvin - 273.15) * 9/5 + 32;
        printf("\nTemperature in Fahrenheit = %.2f Fahrenheit\n\n", Fahrenheit, Kelvin);
    }

    if (run == 5)
    {
        printf("\nEnter Temperature in Fahrenheit\n");
        scanf("%f", &Fahrenheit);
        Centigrade = (Fahrenheit - 32) * 5/9;
        printf("\nTemperature in Centigrade = %.2f Centigrade\n\n", Centigrade, Fahrenheit);
    }

    if (run == 6)
    {
        printf("\nEnter Temperature in Fahrenheit\n");
        scanf("%f", &Fahrenheit);
        Kelvin = (Fahrenheit - 32) * 5/9 + 273.15;
        printf("\nTemperature in Kelvin = %.2f Kelvin\n\n", Kelvin, Fahrenheit);
    }

    if (run != 1 && run != 2 && run != 3 && run != 4 && run != 5 && run != 6)
    {
        printf("\nSelection is incorrect. Enter proper value.\n\n");
        goto*(Temperature());
    }
    
}

int AREA()
{
    float num, num2, Hectare, Acre, Square_Kilometer, Square_Meter, Square_Mile, Square_Yard, Square_Foot, Square_Inch;
    printf("\nSelect from below parameters to start conversion\n\n");
    printf(" 1 = Hectare,   2 = Acre,   3 = Square_Kilometer,   4 = Square_Meter,   5 = Square_Mile,   6 = Square_Yard,   7 = Square_Foot,   8 = Square_Inch\n\n");
    printf("Enter code here\n\n");
    scanf("%f", &num);
    printf("convert into\n");
    scanf("%f", &num2);

    // Conversion of Hectare starts from here.

    if (num == 1 && num2 == 2)
    {
        printf("\nEnter value in Hectare\n\n");
        scanf("%f", &Hectare);
        Acre = (Hectare * 2.471);
        printf("\nArea in Acre = %.3f Acre\n\n", Acre, Hectare);
    }
    
    if (num == 1 && num2 == 3)
    {
        printf("\nEnter value in Hectare\n\n");
        scanf("%f", &Hectare);
        Square_Kilometer = (Hectare / 100);
        printf("\nArea in Square_Kilometer = %.1f Square_Kilometer\n\n", Square_Kilometer, Hectare);
    }
    
    if (num == 1 && num2 == 4)
    {
        printf("\nEnter value in Hectare\n\n");
        scanf("%f", &Hectare);
        Square_Meter = (Hectare * 10000);
        printf("\nArea in Square_Meter = %.0f Square_Meter\n\n", Square_Meter, Hectare);
    }
    
   
    if (num == 1 && num2 == 5)
    {
        printf("\nEnter value in Hectare\n\n");
        scanf("%f", &Hectare);
        Square_Mile = (Hectare / 259);
        printf("\nArea in Square_Mile = %.3f Square_Mile  ( Answer value is Approximate )\n\n", Square_Mile, Hectare);
    }

    if (num == 1 && num2 == 6)
    {
        printf("\nEnter value in Hectare\n\n");
        scanf("%f", &Hectare);
        Square_Yard = (Hectare * 11960);
        printf("\nArea in Square_Yard = %.0f Square_Yard ( Answer value is approximate )\n\n", Square_Yard, Hectare);
    }

    if (num == 1 && num2 == 7)
    {
        printf("\nEnter value in Hectare\n\n");
        scanf("%f", &Hectare);
        Square_Foot = (Hectare * 107639);
        printf("\nArea in Square_Foot = %.0f Square_Foot ( Answer value is approximate )\n\n", Square_Foot, Hectare);
    }

    if (num == 1 && num2 == 8)
    {
       printf("\nSorry! Conversion of Hectare into Square_Inch is not available.\n\n");
    }

    // Conversion of Acre start from here.

    if (num == 2 && num2 == 1)
    {
        printf("\nEnter value in Acre\n\n");
        scanf("%f", &Acre);
        Hectare = (Acre / 2.471);
        printf("\nArea in Hectare = %.3f Hectare\n\n", Hectare, Acre);
    }
    
    if (num == 2 && num2 == 3)
    {
        printf("\nEnter value in Acre\n\n");
        scanf("%f", &Acre);
        Square_Kilometer = (Acre / 247);
        printf("\nArea in Square_Kilometer = %.3f Square_Kilometer ( Answer Value is approximate )\n\n", Square_Kilometer, Acre);
    }
 
    if (num == 2 && num2 == 4)
    {
        printf("\nEnter value in Acre\n\n");
        scanf("%f", &Acre);
        Square_Meter = (Acre * 4047);
        printf("\nArea in Square_Meter = %.1f Square_Meter\n\n", Square_Meter, Acre);
    }

    if (num == 2 && num2 == 5)
    {
        printf("\nEnter value in Acre\n\n");
        scanf("%f", &Acre);
        Square_Mile = (Acre / 640);
        printf("\nArea in Square_Mile = %.3f Square_Mile\n\n", Square_Mile, Acre);
    }
 
    if (num == 2 && num2 == 6)
    {
        printf("\nEnter value in Acre\n\n");
        scanf("%f", &Acre);
        Square_Yard = (Acre * 4840);
        printf("\nArea in Square_Yard = %.0f Square_Yard\n\n", Square_Yard, Acre);
    }

    if (num == 2 && num2 == 7)
    {
        printf("\nEnter value in Acre\n\n");
        scanf("%f", &Acre);
        Square_Foot = (Acre * 43560);
        printf("\nArea in Square_Foot = %.0f Square_Foot\n\n", Square_Foot, Acre);
    }

    if (num == 2 && num2 == 8)
    {
       printf("\nSorry! Conversion of Acre into Square_Inch is not available.\n\n");
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    char num;
    printf("\n");
    printf("\t\t\t\t\t\t\tWelcome to All IN ONE CONVERTER\n\n");
    printf("Select from below what you want to convert.\n\n");
    printf(" A = AREA\tD = DISTANCE\t  T = TEMPERATURE\tV = VOLUME\n\n");
    printf("Enter code here\n\n");
    scanf("%c", &num);

    switch (num)
    {
    case 'T': Temperature();
              break;

    case 'A': AREA();
              break;
              

    default:
        printf("Selection is wrong. Please enter proper Value.\n");
    }

    return 0;
}

/*if (num == 4)
    {
        printf("enter weight in kilogram\n");
        scanf("%f", &kilograms);
        pound = (kilograms * 2.205);
        printf("weight in pounds = %.2f pound\n", pound, kilograms);
    }
     {
        printf("enter weight in kilogram\n");
        scanf("%f", &kilogram);
        gram = (kilogram * 1000);
        printf("weight in gram = %0.f gram\n", gram, kilogram);
    }
    if (num == 2)
    {
        printf("enter distance in centemeter\n");
        scanf("%f", &centemeter);
        inch = (centemeter / 2.54);
        printf("distance in inches = %2.f inch\n", inch, centemeter);
    }
    if (num == 3)
    {
        printf("enter volume in litre\n");
        scanf("%f", &litre);
        mililitre = (litre * 1000);
        printf("volume in mililitre = %0.f mililitre\n", mililitre, litre);
    }*/