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
        Fahrenheit = (Centigrade * 9 / 5) + 32;
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
        Fahrenheit = (Kelvin - 273.15) * 9 / 5 + 32;
        printf("\nTemperature in Fahrenheit = %.2f Fahrenheit\n\n", Fahrenheit, Kelvin);
    }

    if (run == 5)
    {
        printf("\nEnter Temperature in Fahrenheit\n");
        scanf("%f", &Fahrenheit);
        Centigrade = (Fahrenheit - 32) * 5 / 9;
        printf("\nTemperature in Centigrade = %.2f Centigrade\n\n", Centigrade, Fahrenheit);
    }

    if (run == 6)
    {
        printf("\nEnter Temperature in Fahrenheit\n");
        scanf("%f", &Fahrenheit);
        Kelvin = (Fahrenheit - 32) * 5 / 9 + 273.15;
        printf("\nTemperature in Kelvin = %.2f Kelvin\n\n", Kelvin, Fahrenheit);
    }

    if (run != 1 && run != 2 && run != 3 && run != 4 && run != 5 && run != 6)
    {
        printf("\nSelection is incorrect. Enter proper value.\n\n");
        goto *(Temperature());
    }
}


// New Function int AREA() Starts from Here


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

    // Conversion of Square_Kilometer starts from here.]

    if (num == 3 && num2 == 1)
    {
        printf("\nEnter value in Square_Kilometer\n\n");
        scanf("%f", &Square_Kilometer);
        Hectare = (Square_Kilometer * 100);
        printf("\nArea in Hectare = %.0f Hectare\n\n", Hectare, Square_Kilometer);
    }

    if (num == 3 && num2 == 2)
    {
        printf("\nEnter value in Square_Kilometer\n\n");
        scanf("%f", &Square_Kilometer);
        Acre = (Square_Kilometer * 247);
        printf("\nArea in Acre = %.2f Acre\n\n", Acre, Square_Kilometer);
    }

    if (num == 3 && num2 == 4)
    {
        printf("\nEnter value in Square_Kilometer\n\n");
        scanf("%f", &Square_Kilometer);
        Square_Meter = (Square_Kilometer * 1000000);
        printf("\nArea in Square_Meter = %.0f Square_Meter\n\n", Square_Meter, Square_Kilometer);
    }

    if (num == 3 && num2 == 5)
    {
        printf("\nEnter value in Square_Kilometer\n\n");
        scanf("%f", &Square_Kilometer);
        Square_Mile = (Square_Kilometer / 2.59);
        printf("\nArea in Square_Mile = %.2f Square_Mile\n\n", Square_Mile, Square_Kilometer);
    }

    if (num == 3 && num2 == 6)
    {
        printf("\nSorry Conversion of Square_Kilometer into Square_Yard is not available\n\n");
    }

    if (num == 3 && num2 == 7)
    {
        printf("\nSorry Conversion of Square_Kilometer into Square_Foot is not available\n\n");
    }

    if (num == 3 && num2 == 8)
    {
        printf("\nSorry Conversion of Square_Kilometer into Square_Inch is not available\n\n");
    }

    // Conversion of Square_Meter is start from here.

    if (num == 4 && num2 == 1)
    {
        printf("\nEnter value in Square_Meter\n\n");
        scanf("%f", &Square_Meter);
        Hectare = (Square_Meter / 10000);
        printf("\nArea in Hectare = %.1f Hectare\n\n", Hectare, Square_Meter);
    }

    if (num == 4 && num2 == 2)
    {
        printf("\nEnter value in Square_Meter\n\n");
        scanf("%f", &Square_Meter);
        Acre = (Square_Meter / 4047);
        printf("\nArea in Acre = %.2f Acre\n\n", Acre, Square_Meter);
    }

    if (num == 4 && num2 == 3)
    {
        printf("\nEnter value in Square_Meter\n\n");
        scanf("%f", &Square_Meter);
        Square_Kilometer = (Square_Meter / 1000000);
        printf("\nArea in Square_Kilometer = %.0f Square_Kilometer\n\n", Square_Kilometer, Square_Meter);
    }

    if (num == 4 && num2 == 5)
    {
        printf("\nSorry Conversion of Square_Meter into Square_Mile is not available\n\n");
    }

    if (num == 4 && num2 == 6)
    {
        printf("\nEnter value in Square_Meter\n\n");
        scanf("%f", &Square_Meter);
        Square_Yard = (Square_Meter * 1.196);
        printf("\nArea in Square_Yard = %.3f Square_Yard\n\n", Square_Yard, Square_Meter);
    }

    if (num == 4 && num2 == 7)
    {
        printf("\nEnter value in Square_Meter\n\n");
        scanf("%f", &Square_Meter);
        Square_Foot = (Square_Meter * 10.764);
        printf("\nArea in Square_Foot = %.3f Square_Foot\n\n", Square_Foot, Square_Meter);
    }

    if (num == 4 && num2 == 8)
    {
        printf("\nEnter value in Square_Meter\n\n");
        scanf("%f", &Square_Meter);
        Square_Inch = (Square_Meter * 1550);
        printf("\nArea in Square_Inch = %.0f Square_Inch\n\n", Square_Inch, Square_Meter);
    }

    // conversion of Square_Mile start from here.

    if (num == 5 && num2 == 1)
    {
        printf("\nEnter value in Square_Mile\n\n");
        scanf("%f", &Square_Mile);
        Hectare = (Square_Mile * 259);
        printf("\nArea in Hectare = %.2f Hectare\n\n", Hectare, Square_Mile);
    }

    if (num == 5 && num2 == 2)
    {
        printf("\nEnter value in Square_Mile\n\n");
        scanf("%f", &Square_Mile);
        Acre = (Square_Mile * 640);
        printf("\nArea in Acre = %.0f Acre\n\n", Acre, Square_Mile);
    }

    if (num == 5 && num2 == 3)
    {
        printf("\nEnter value in Square_Mile\n\n");
        scanf("%f", &Square_Mile);
        Square_Kilometer = (Square_Mile * 2.59);
        printf("\nArea in Square_Kilometer = %.2f Square_Kilometer\n\n", Square_Kilometer, Square_Mile);
    }

    if (num == 5 && num2 == 4)
    {
        printf("\nSorry Conversion of Square_Mile into Square_Meter is not available\n\n");
    }

    if (num == 5 && num2 == 6)
    {
        printf("\nSorry Conversion of Square_Mile into Square_Yard is not available\n\n");
    }

    if (num == 5 && num2 == 7)
    {
        printf("\nSorry Conversion of Square_Mile into Square_Foot is not available\n\n");
    }

    if (num == 5 && num2 == 8)
    {
        printf("\nSorry Conversion of Square_Mile into Square_Inch is not available\n\n");
    }

    // Conversion of Square_Yards start from here

    if (num == 6 && num2 == 1)
    {
        printf("\nEnter value in Square_Yard\n\n");
        scanf("%f", &Square_Yard);
        Hectare = (Square_Yard / 11960);
        printf("\nArea in Hectare = %.2f Hectare\n\n", Hectare, Square_Yard);
    }

    if (num == 6 && num2 == 2)
    {
        printf("\nEnter value in Square_Yard\n\n");
        scanf("%f", &Square_Yard);
        Acre = (Square_Yard / 4840);
        printf("\nArea in Acre = %.2f Acre\n\n", Acre, Square_Yard);
    }

    if (num == 6 && num2 == 3)
    {
        printf("\nSorry Conversion of Square_Yard into Square_Kilometer is not available\n\n");
    }

    if (num == 6 && num2 == 4)
    {
        printf("\nEnter value in Square_Yard\n\n");
        scanf("%f", &Square_Yard);
        Square_Meter = (Square_Yard / 1.196);
        printf("\nArea in Square_Meter = %.2f Square_Meter\n\n", Square_Meter, Square_Yard);
    }

    if (num == 6 && num2 == 5)
    {
        printf("\nSorry Conversion of Square_Yard into Square_Mile is not available\n\n");
    }

    if (num == 6 && num2 == 7)
    {
        printf("\nEnter value in Square_Yard\n\n");
        scanf("%f", &Square_Yard);
        Square_Foot = (Square_Yard * 9);
        printf("\nArea in Square_Foot = %.1f Square_Foot\n\n", Square_Foot, Square_Yard);
    }

    if (num == 6 && num2 == 8)
    {
        printf("\nEnter value in Square_Yard\n\n");
        scanf("%f", &Square_Yard);
        Square_Inch = (Square_Yard * 1296);
        printf("\nArea in Square_Inch = %.2f Square_Inch\n\n", Square_Inch, Square_Yard);
    }

    // Conversion of Square_Foot Starts from here.

    if (num == 7 && num2 == 1)
    {
        printf("\nEnter value in Square_Foot\n\n");
        scanf("%f", &Square_Foot);
        Hectare = (Square_Foot / 107639);
        printf("\nArea in Hectare = %.2f Hectare\n\n", Hectare, Square_Foot);
    }

    if (num == 7 && num2 == 2)
    {
        printf("\nEnter value in Square_Foot\n\n");
        scanf("%f", &Square_Foot);
        Acre = (Square_Foot / 43560);
        printf("\nArea in Acre = %.2f Acre\n\n", Acre, Square_Foot);
    }

    if (num == 7 && num2 == 3)
    {
      printf("\nSorry Conversion of Square_Foot into Square_Kilometer is not available\n\n");
    }

    if (num == 7 && num2 == 5)
    {
      printf("\nSorry Conversion of Square_Foot into Square_Mile is not available\n\n");
    }

    if (num == 7 && num2 == 4)
    {
        printf("\nEnter value in Square_Foot\n\n");
        scanf("%f", &Square_Foot);
        Square_Meter = (Square_Foot / 10.764);
        printf("\nArea in Square_Meter = %.2f Square_Meter\n\n", Square_Meter, Square_Foot);
    }

    if (num == 7 && num2 == 6)
    {
        printf("\nEnter value in Square_Foot\n\n");
        scanf("%f", &Square_Foot);
        Square_Yard = (Square_Foot / 9);
        printf("\nArea in Square_Yard = %.2f Square_Yard\n\n", Square_Yard, Square_Foot);
    }

    if (num == 7 && num2 == 8)
    {
        printf("\nEnter value in Square_Foot\n\n");
        scanf("%f", &Square_Foot);
        Square_Inch = (Square_Foot * 144);
        printf("\nArea in Square_Inch = %.1f Square_Inch\n\n", Square_Inch, Square_Foot);
    }

    // Conversion of Square_Inch starts from here.

    if (num == 8 && num2 == 1)
    {
        printf("\nSorry Conversion of Square_Inch into Hectare is not available\n\n");
    }

    if (num == 8 && num2 == 2)
    {
        printf("\nSorry Conversion of Square_Inch into Acre is not available\n\n");
    }

    if (num == 8 && num2 == 3)
    {
        printf("\nSorry Conversion of Square_Inch into Square_Kilometer is not available\n\n");
    }

    if (num == 8 && num2 == 5)
    {
        printf("\nSorry Conversion of Square_Inch into Square_Mile is not available\n\n");
    }

    if (num == 8 && num2 == 4)
    {
        printf("\nEnter value in Square_Inch\n\n");
        scanf("%f", &Square_Inch);
        Square_Meter = (Square_Inch / 1550);
        printf("\nArea in Square_Meter = %.2f Square_Meter\n\n", Square_Meter, Square_Foot);
    }

    if (num == 8 && num2 == 6)
    {
        printf("\nEnter value in Square_Inch\n\n");
        scanf("%f", &Square_Inch);
        Square_Yard = (Square_Inch / 1296);
        printf("\nArea in Square_Yard = %.2f Square_Yard\n\n", Square_Yard, Square_Foot);
    }

    if (num == 8 && num2 == 7)
    {
        printf("\nEnter value in Square_Inch\n\n");
        scanf("%f", &Square_Inch);
        Square_Foot = (Square_Inch / 144);
        printf("\nArea in Square_Foot = %.2f Square_Foot\n\n", Square_Foot, Square_Foot);
    }

    
    if (num != 1 && num != 2 && num != 3 && num != 4 && num != 5 && num != 6 && num != 7 && num != 8 || num2 != 1 &&
        num2 != 2 && num2 != 3 && num2 != 4 && num2 != 5 && num2 != 6 && num2 != 7 && num2 != 8)
    {
        printf("\nSelection is incorrect. Enter proper value.\n\n");
        goto*(AREA());
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
    case 'T':
        Temperature();
        break;

    case 'A':
        AREA();
        break;

    default:
        printf("\nSelection is wrong. Please enter proper Value.\n\n");
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