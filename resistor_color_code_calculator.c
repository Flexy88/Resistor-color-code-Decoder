
/****                                      
                                                    **-- DESCRIPTION --**

      Resistors are basic components in any given circuits. Resistors are manufactured in small sizes rendering it impossible to 
	  label them with their values. Due to this limitation, their value is indicated in form of color bands which are decoded to 
	  get their value. Engineers have to depend on color-charts or mmemonics, pen and paper to find this value. There may be 
	  instances of inaccuracy which can prove fatal to sensitive systems. The below program serves to calculate the resistance of 
	  the common 4-band resistor.By just inputting the colors of the resistor, the user can get the value of the resistor.
	  The time spent and accuracy gained from this program is of prime significance to the user.
                                                                                                                            	  
																																  ****/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{

int first, second, third, fourth, value1 ,value2, value3 , result, merge, p ; 
float max_result, min_result, value4;
	
printf("\nPlease select the corresponding number to select a color:\n \t");
printf(" 1.  Black  \n\t 2.  Brown  \n\t 3.  Red    \n\t 4.  Orange \n\t 5.  Yellow \n\t 6.  Green  \n\t 7.  Blue  \n\t");
printf(" 8.  Violet \n\t 9.  Grey   \n\t 10. White  \n\t 11. Gold   \n\t 12. White  \n" );

//intake the four colors from the user.

printf("Please enter the first color's corresponding number:");
scanf("%d", &first);
printf("Please enter the second color's corresponding number:");
scanf("%d", &second);
printf("Please enter the third color's corresponding number:");
scanf("%d", &third);
printf("Please enter the fourth color's corresponding number:");
scanf("%d", &fourth);

// tabulate the resistance of the resistor.

switch(first)
{
case 1:
	value1 = 0;
	break;
	
case 2:
	value1 = 1;
	break;
	
case 3:
	value1 = 2;
	break;
	
case 4:
	value1 = 3;
	break;

case 5:
	value1 = 4;
	break;

case 6:
	value1 = 5;
	break;

case 7:
	value1 = 6;
	break;

case 8:
	value1 = 7;
	break;

case 9:
	value1 = 8;
	break;

case 10:
	value1 = 9;
	break;

case 11:
	value1 = 10;
	break;

case 12:
	value1 = 11;
	break;

}


switch(second)
{
case 1:
	value2 = 0;
	break;
	
case 2:
	value2 = 1;
	break;
	
case 3:
	value2 = 2;
	break;
	
case 4:
	value2 = 3;
	break;

case 5:
	value2 = 4;
	break;

case 6:
	value2 = 5;
	break;

case 7:
	value2 = 6;
	break;

case 8:
	value2 = 7;
	break;

case 9:
	value2 = 8;
	break;

case 10:
	value2 = 9;
	break;

case 11:
	value2 = 10;
	break;

case 12:
	value2 = 11;
	break;

}


switch(third)
{
case 1:
	value3 = pow(10,0);
	break;
	
case 2:
	value3 = pow(10,1);
	break;
	
case 3:
	value3 = pow(10,2);
	break;
	
case 4:
	value3 = pow(10,3);
	break;

case 5:
	value3 = pow(10,4);
	break;

case 6:
	value3 = pow(10,5);
	break;

case 7:
	value3 = pow(10,6);
	break;

case 8:
	value3 = pow(10,7);
	break;

case 9:
	value3 = pow(10,8);
	break;

case 10: 
	value3 = pow(10,9);
	break;


}

switch(fourth)
{
case 2:
	value4 = 1;
	break;
	
case 3:
	value4 = 2;
	break;

case 6:
	value4 = 0.5;
	break;

case 7:
	value4 = 0.25;
	break;

case 8:
	value3 = 0.1;
	break;

case 11: 
	value4 = 5;
	break;


case 12:
	value4 = 10;
	break;
}

// concatenate the two numbers

char n1[10];
char n2[10];
	
sprintf(n1,"%d",value1); // convert to a string
sprintf(n2,"%d",value2);
	
strcat(n1, n2); // concatenate the two strings

result = atoi(n1)* value3; // convert the string to int and multiply it with value3

max_result = result * ((100+value4)/100);

min_result = result * ((100-value4)/100);

// print the resistance

printf("Your resistor has a maximum resistance of %f Ohms and a minimum resistance of %f Ohms.",max_result,min_result);

getchar();
}



//////////////*********This program was written by Klein Baru on 30/11/2021 - 1/12/2021. It is free and Open source!!!*****************/////
