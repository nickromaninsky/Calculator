//Program that can calculate equations using operaters

#include <stdio.h>
#include <math.h>

//include both standard library and math library

int main()
{

//main

int numberOneForAdding, numberTwoForAdding;
//store addition words as an int

int numberOneDifference, numberTwoDifference;
//store subtraction words as an int

int numberOneForMultiplying, numberTwoForMultiplying;
//store multiplictaion words as an int

int numberOneForDividing, numberTwoForDividing;
//store dividing words as an int

float sum, difference, product, quotient;
//store answer words for the basic 4 equations (+, -, * and /) as floats

char operationChosen;
//store operation chosen as a char

printf("What operation do you want to do? \n Math: \n To add, type +. \n To subtract, type -. \n To multiply, type *. \n To divide, type /. \n To find the square root of a number, type S. \n To find the cube root of a number, type B. \n To square a number, type W. \n To cube a number, type E. \n Conversions: \n To convert fahrenheit to celsius, type F. \n To convert celsius to fahrenheit, type C. \n To convert gallons to liters, type G. \n To convert liters to gallons, type L. \n To convert kilometers to all other metric distance units of measuerment, type K. \n To convert miles to kilometers, type M. \n To convert kilometers to miles, type N. \n To convert pounds to kilograms, type V. \n To convert kilograms to pounds, type P. \n To find the wind chill of a tempature, type Z. \n Time: \n To find the day of the week of a date, type R. \n To find out how many seconds old you are, type X. \n");

printf("Letters must be uppercase. \n");
//ask what operation the user wants to do and tell them that what they type has to be uppercase

printf("Type Here: ");
scanf("%c", &operationChosen);
//tell the user where to type and store what they say as operationChosen


if (operationChosen == '+')
//if the user chose + then  
    {  
        printf("Number One: \n");
        //print out number one to the user

 scanf("%i", &numberOneForAdding);
 //store the user's answer as numberOneForAdding

 printf("Number Two: \n");
//print out number two to the user

 scanf("%i", &numberTwoForAdding);
 //store the user's answer as numberTwoForAdding

        sum = numberOneForAdding + numberTwoForAdding;  
        //apply the equation to solve the problem

//store the answer to the problem as sum

        printf ("Addition of %i and %i is: %f \n", numberOneForAdding, numberTwoForAdding, sum);  
        //print out the answer to the user

    }  
else if (operationChosen == '-') 
//if the user chose + then  

{
 printf("Number One: \n");
 //print out number one to the user

 scanf("%i", &numberOneDifference);
 //store the user's answer as numberOneDifference

 printf("Number Two: \n");
 //print out number two to the user

 scanf("%i", &numberTwoDifference);
  //store the user's answer as numberTwoDifference

 difference = numberOneDifference - numberTwoDifference;
 //apply the equation to solve the problem

 printf("Difference of %i and %i is: %f \n", numberOneDifference, numberTwoDifference, difference);
 //print out the answer to the user

 printf("\n");
 //go to the next line as a convience to the user

} 
 else if (operationChosen == '*')  
    {  
// if the operation chosen is * then

printf("Number One: \n");
//print out number one to the user

scanf("%i", &numberOneForMultiplying);
//store the user's answer as numberOneForMultiplying

printf("Number Two: \n");
//print out number two to the user

scanf("%i", &numberTwoForMultiplying);
//store the user's answer as numberTwoForMultiplying

product = (numberOneForMultiplying * numberTwoForMultiplying);
//apply the equation to solve the problem

//store the answer to the problem as product

printf("Product of %i and %i is: %f", numberOneForMultiplying, numberTwoForMultiplying, product);
//print out the answer to the user

printf("\n");
//put an empty space in the terminal for convienince to the user

//end if statement

    } 
    else if (operationChosen == '/')
    {
    //if the operation chosen is / then

    printf("Number One: \n");
    //print out number one to the user

    scanf("%i", &numberOneForDividing);
    //store the user's answer as numberOneForDividing

    printf("Number Two: \n");
    // print out number two to the user

    scanf("%i", &numberTwoForDividing);
    //store the user's answer as numberTwoForDividing

    quotient = (numberOneForDividing / numberTwoForDividing);
    //do the equation to solve for the quotient

    //store the answer inside of / as quotient

    printf("Quotient of %i and %i is: %f \n", numberOneForDividing, numberTwoForDividing, quotient);
    //print out the answer to the user

    printf("\n");
    //print out an extra blank line for convience to the user

    //end if statement
     } else if (operationChosen == 'F')
     //if the user chooses f then

    {
        float fahrenheit, celsius;
        //store fahrenheit and celsius as a float

   printf("Enter Fahrenheit: \n");
   //ask the user fot the temp in farenheit

   scanf("%f",&fahrenheit);
   //scan what the user says as fahrenheit
   
   celsius = (fahrenheit - 32) * 5/9;
   //apply the equation to convert fahrenheit to celsius

   //store the number in celsius as celsius

   printf("Celsius: %f \n", celsius);
   //print out to the user showing the number in celsius

   return 0;
   //return 0 as a success

    } else if (operationChosen == 'C')
    //if the user chooses c then

    {
           float celsius, fahrenheit;
           //store celsius and fahrenheit as a float

   printf("Enter Celsius: \n");
   //print out to the user asking for celsius

   scanf("%f",&celsius);
   //scan what the user says as celsius

   fahrenheit = (celsius * 9/5) + 32;
   //apply the equation to convert celsius to fahrenheit

   //store what the user says as celsius

   printf("Fahrenheit: %f \n", fahrenheit);
   //print out to the user showing the number in fahrenheit

   return 0;
//return 0 as a success

    } else if (operationChosen == 'G')
    //else if the user chooses g then

{
    float gallons, liters;
    //store gallons and liters as a float

   printf("Enter Gallons: \n");
   //print out to the user asking for gallons

   scanf("%f",&gallons);
   //store what the user says as gallons

   liters = (gallons * 3.785412);  
   //apply the equation to convert gallons to liters

   //store the answer in liters

   printf("Liters: %f \n", liters);
   //print out to ther user showing the answer in liters

   return 0;
//return 0 as a success

 } else if (operationChosen == 'L')
 //else if the user chooses l then

   {
       float gallons, liters;
       //store gallons and liters as a float

   printf("Enter Liters: \n");
   //print out to the user asking for liters

   scanf("%f",&liters);
   //scan what the user says as liters

   gallons = (liters * 0.264172 );
   //apply the equation to change liters to gallons

   //store the answer as gallons

   printf("Gallons: %f \n", gallons);
   //print out the gallons to the user

   return 0;
   //return 0 as a success

   } else if (operationChosen == 'R')
   //else if the user chooses r then

    {
         
int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//store the days of the months

    char* day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};   
    //store the order of the weeks

    int d, m, y, i; 
    //store d(day) m(month) y(year) and i

    printf("Date after 1900 in the format day-month-year: ");
    //ask the user to input a date

    scanf("%d-%d-%d",  &d, &m, &y);
    //store the answer in their respective variables

// leap year correction
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
        month[1] = 29;
    }


if (y < 1900 || m < 1 || m > 12 || d < 1 || d > month[m - 1]) {
    //if the year is less than 1900 or the month is less than 1 or greater than 12 or the day is less than 1 then

        printf("Invalid Date.\n");
        //print out to the user tht they entered an incorrect date

        return 1;
        //return 1 as an error
    }

    //calculating area starts here

    for (i = 1900; i < y; i++)
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            d += 366;
        else
            d += 365;

             for (i = 0; i < m - 1; i++) 
        d += month[i];

        //calculating area ends here

    printf("That is a %s.\n", day[d % 7]);
    //print to the user what day the date they entered is

    return 0;
    //return 0 as a success

     } else if (operationChosen == 'S')
     //else if the user chooses s then

{

int number;
//store number

   double result;
   //store result as a double

   printf("Enter any integer number:  ");
   //print out to the user asking for an integer number
   
scanf("%d",&number);
//store what the user says as number

result = sqrt(number);
//apply the equation to find the square root of number using the sqrt function found in math.h

printf("Square root value = %.2lf \nProgram Will Show First Two Decimals In The Case Of Repeating Decimals. \n",result);
//print out to the user showing the square root of number

return 0;
//return 0 as a success
         
} else if (operationChosen == 'B')
//else if the user chose b then

{

    int number;
    //store number

   double result;
   //store result

   printf("Enter any integer number: \n");
   //print to the user telling them to enter a number
   
scanf("%d",&number);
//store what the user says as number

result = cbrt(number);
//apply the equation to find the cube root of the number

//store the answer as result

printf("Cube root value = %.2lf \nProgram Will Show First Two Decimals In The Case Of Repeating Decimals. \n",result);
//print out to the user the cube root of the number

return 0;
//return 0 as a success

} else if (operationChosen == 'W') 
//else if the user chose w then

{

int number;
//store number

float answer;
//store answer

 printf("Number : \n");
 //ask the user for a number

 scanf("%i", &number);
 //store what the user says as number

 answer = number * number;
 //apply the equation to square the number

 //store what the answer is as answer

 printf("%i squared is %f \n", number, answer);
 //print out the answer to the user

 printf("\n");
 //go to the next line as a convience to the user


} else if (operationChosen == 'E')
//else if the user chose e then

{

    int number;
    //store number

float answer;
//store answer

 printf("Number : \n");
 //print out to the user asking for a number

 scanf("%i", &number);
 //store what the user says as number

 answer = number * number * number;
 //multiply number by itself 3 times to cube it

 printf("%i cubed is %f \n", number, answer);
 //print out the answer to the user

 printf("\n");
 //go to the next line as a convienince to the user


} else if (operationChosen == 'X')
//else if the user chose x then

{

int age;
//store age

    int seconds;
    //store seconds

    printf("How old are you? \n");
    //print out to the user asking how old they are

    scanf("%i", &age);
    //store what the user says as age

    if(age < 70)
//if the age is less then 70 then

    {

    seconds = (age * 356.2525 * 24 * 60 * 60);
    //apply the equation to convert your age in years to your age in seconds

    printf("You were %i seconds old the second you turned %i. \n", seconds, age);
    //print out to the user their age in seconds 
  

   	return 0;
       //return 0 as a success

    } else {
        //else if the age is over 70 than

        printf("Age cannot be over 70 due to chromebook restrictions. \n");
        //print to the user saying that ages over 70 cannot work

        return 1;
        //return 1 as a error
        
    }


} else if (operationChosen == 'K')
//else if the user chose k

{

float Millimeter, Centimeter, Meter, Decameter, Hectometer, Kilometer;
//store the above operations

 
 	printf("\n Kilometers: \n");
     //print out to the user asking for the kilometers

  	scanf("%f", &Kilometer);
      //scan what the user says as kilometer

    //look down for explination
    Hectometer = Kilometer * 10;
    Decameter = Kilometer * 100;
  	Meter = Kilometer * 1000.0;
  	Centimeter = Kilometer * 100000.0; 	
  	Millimeter = Kilometer * 1000000.0; 
      //for the five lines above convert kilometer to the repective metric distance meauserment

    	
        //look down for explination
    printf("\n %.2f Kilometers = %.2f Hectometers", Kilometer, Hectometer);
    printf("\n %.2f Kilometers = %.2f Decameters", Kilometer, Decameter);
    printf("\n %.2f Kilometers = %.2f Meters", Kilometer, Meter);
    printf("\n %.2f Kilometers = %.2f Centimeters", Kilometer, Centimeter);
    printf("\n %.2f Kilometers = %.2f Millimeters\n", Kilometer, Millimeter);
    //print out the kilometers in different metric distance meauserments


} else if (operationChosen == 'M')
//else if the user chose m then

{

 float miles, kilometers;
 //store miles and kilometers

  printf("Miles: \n");
  //proint out to the user asking for the miles

 scanf("%f", &miles);
 //store what the user says as miles

 kilometers = miles * 1.609344;
 //apply the equation to convert miles to kilometers

 //store the answer as kilometers


 printf("%f miles is equivalent to %f kilometers.", miles, kilometers);
 //print out to the user telling the the miles to the kilometers

 printf("\n");
 //go to the next line as a convience to the user


 } else if (operationChosen == 'N')
 //else if the user chose n then

 {

 float miles, kilometers;
 //store miles and kilometers

  printf("Kilometers: \n");
  //print to the user asking for kilometers

 scanf("%f", &kilometers);
 //store what the user says as kilometers

 miles = kilometers / 1.609344;
 //apply the equation to convert kilometers to miles

 //store the answer as miles

 printf("%f kilometers is equivalent to %f miles.", kilometers, miles);
 //print out to the user showing the kilometers to miles

 printf("\n");
 //go to the next line as a convience to the user


 } else if (operationChosen == 'V')
 //else if the user chose V then

 {

 float pounds, kilograms;
 //store pounds and kilograms

  printf("Pounds: \n");
  //print out to the user asking for pounds

 scanf("%f", &pounds);
 //store what the user says as pounds

 kilograms = pounds * 0.45359237;
 //apply the equation to convert pounds to kilograms

 //store the answer as kilograms


 printf("%f pounds is equivalent to %f kilograms.", pounds, kilograms);
 //print out to the user the pounds to kilograms

 printf("\n");
 //go to the next line as a convience to the user
 

 } else if (operationChosen == 'P') 
//else if the user chose p then

{

 float pounds, kilograms;
 //store pounds and kilograms

  printf("Kilograms: \n");
  //print to the user asking for the kilograms

 scanf("%f", &kilograms);
 //store what the user says as kilograms

 pounds = kilograms / 0.45359237;
 //apply the equation to convert kilograms to pounds

 //store the answer as pounds

 printf("%f kilograms is equivalent to %f pounds.", kilograms, pounds);
 //print out to the user the kilograms to pounds

 printf("\n");
 //go to the next line as a convience to the user


} else if (operationChosen == 'Z')
//else if the user choose z then

{

    float tempWindChill, windSpeed, tempature;
    //store tempWindChill, windSpeed and tempature

  printf("Tempature in Fahrenheit: \n");
  //print to the user asking for the temp in fahrenheit

 scanf("%f", &tempature);
 //store what the user says as tempature

 printf("Wind Speed: \n");
 //print to the user asking fow the wind speed

 scanf("%f", &windSpeed);
 //store what the user says as windSpeed

 tempWindChill = 35.74 + 0.6215*tempature + (0.4275*tempature - 35.75) * pow(windSpeed,0.16);
 //apply the equation to convert the users input to the wind chill

 //store the answer as tempWindChill

 printf("%f with wind chill is in fahrenheit %f.", tempature, tempWindChill);
 //print to the user showing the temp with wind chill

 printf("\n");
 //go to the next line as a convience to the user
   


} else {
         //if nothing matches operationChosen then

         printf("That symbol isn't correct. \n");
         //tell the user that nothing matched
         return 1;


}
}




    //end else statement


//return 0 to get a return value



//end main codespace

//end program
