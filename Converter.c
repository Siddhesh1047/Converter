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
/*
int AREA()
{
    
    printf("Select from below\n");
    printf(" 1 = Kilogram --> gram\n 2 = centemeter --> inch\n 3 = litre --> mililitre\n 4 = kilogram --> pound\n 5 = centigrade --> kelvin\n");
    scanf("%f", &num);
    if (num == 1)
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
    }
    if (num == 4)
    {
        printf("enter weight in kilogram\n");
        scanf("%f", &kilograms);
        pound = (kilograms * 2.205);
        printf("weight in pounds = %.2f pound\n", pound, kilograms);
    }
    
    return 0;
   
}*/

int main(int argc, char const *argv[])
{
    char num;
    printf("\n");
    printf("\t\t\t\t\t\t\tWelcome to All IN ONE CONVERTER\n\n");
    printf("Select from below what you want to convert.\n\n");
    printf(" A = AREA\tD = DISTANCE\t  T = TEMPERATURE\tV = VOLUME\n\n");
    scanf("%c", &num);

    switch (num)
    {
    case 'T':
        Temperature();
        break;

    default:
        printf("Selection is wrong. Please enter proper Value.\n");
    }

    return 0;
}
