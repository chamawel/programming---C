#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable:4996)

/*

_____EX 1_____ 

int main(void){
		
		int a, b, c;
		printf("b = "); 
		scanf("%d", &b); 
		printf("c = "); 
		scanf("%d", &c); 
		a = b + c; 
		printf("a = %d", a); 
		
		return 0; 
}
*/

// ###################################################################################

/*_____EX 2_____
	- a		printf("What's the square's side lenght? (cm):");
			scanf("%d", &side);

			perimetre	= side * 4;
			area		= side * side;

			printf("the perimetre is %d (cm)\nthe area is %d (cm squared)", perimetre, area);

			return 0;

	- b		printf("What's the retangle 's short side lenght? (cm):");
			scanf("%d", &short_side);
			printf("What's the retangle 's long side lenght? (cm):");
			scanf("%d", &long_side);

			perimetre = (short_side * 2) + (long_side * 2);
			area = short_side * long_side;

			printf("the perimetre is %d (cm)\nthe area is %d (cm squared)", perimetre, area);

	- c		printf("What's the parallelogram 's short side lenght? (cm):");
			scanf("%d", &short_side);
			printf("What's the parallelogram 's long side/base lenght? (cm):");
			scanf("%d", &long_side);
			printf("What's the parallelogram 's height? (cm):");
			scanf("%d", &height);

			perimetre = (short_side * 2) + (long_side * 2);
			area = height * long_side;

			printf("the perimetre is %d (cm)\nthe area is %d (cm squared)", perimetre, area);

*/

// ###################################################################################

/*

_____EX 3_____

 - TRAPEZOID -

float left_side, right_side, top, base, height;
float perimetre, area;

printf("Give the left side of the trapeziod: ");
scanf("%f", &left_side);
printf("Give the right side of the trapeziod: ");
scanf("%f", &right_side);
printf("Give the top side of the trapeziod: ");
scanf("%f", &top);
printf("Give the base of the trapeziod: ");
scanf("%f", &base);
printf("Give the height of the trapeziod: ");
scanf("%f", &height);
perimetre = left_side + right_side + top + base;
area = 0.5 * (base + top) * height;

printf("The perimetre is : %f\n and the area is %f\n", perimetre, area);

 - TRIANGLE -

float left_side, right_side, base, height;
float perimetre, area;

printf("Give the left side of the triangle: ");
scanf("%f", &left_side);
printf("Give the right side of the triangle: ");
scanf("%f", &right_side);
printf("Give the base of the triangle: ");
scanf("%f", &base);
printf("Give the height of the triangle: ");
scanf("%f", &height);

perimetre	 = left_side + right_side + base;
area		 = 0.5 * base * height;

printf("The perimetre is : %f\n and the area is %f\n", perimetre, area);

 - CIRCLE -

float pi = 3.141592;
float radius, perimetre, area;

printf("Give the radius of the circle: ");
scanf("%f", &radius);

perimetre	 = 2 * pi * radius;
area		 = pi * pow(radius, 2);

printf("The perimetre is : %f\n and the area is %f\n", perimetre, area);

*/

// ###################################################################################

/*_____EX 4_____

int avg, first_mark, second_mark;

printf("enter the first mark:");
scanf("%d", &first_mark);
printf("enter the second mark:");
scanf("%d", &second_mark);

avg = (first_mark + second_mark) / 2;
printf("the average of the marks are :%d", avg);

*/

// ###################################################################################


/*_____EX 5_____

int first_mark, second_mark, weighting_1, weighting_2, avg;
printf("enter the first mark:");
scanf("%d", &first_mark);
printf("enter the second mark:");
scanf("%d", &second_mark);
printf("enter the weight of the first mark:");
scanf("%d", &weighting_1);
printf("enter the weight of the second mark:");
scanf("%d", &weighting_2);
avg = (first_mark * weighting_1 + second_mark * weighting_2) / (weighting_1 + weighting_2);
printf("the average is :%d", avg);


*/

// ###################################################################################

/*_____EX 6*_____

#include <stdio.h>

int main() {
	int difference;
	int ageCadet;
	int ageAine;
	scanf("%d", ageCadet);
	scanf("%d", &ageAine);
	difference = ageAine - ageCadet;
	printf("%d\n", difference);
}

*/



// ###################################################################################

/*_____EX 7_____

	b = 9;
	a = 5;
	printf("a: %f\nb: %f\n", a, b);6
	temp = a;
	a = b;
	b = temp;
	printf("a: %f\nb: %f\n", a, b);

*/


// ###################################################################################

/*_____EX 8_____

	int rest, quotient, divider, dividend;
	printf("what's the dividend: ");
	scanf("%d", &dividend);
	printf("what's the divider: ");
	scanf("%d", &divider);
	quotient = dividend / divider;
	rest = dividend - (divider * quotient);

	printf("Rest: %d\nQuotient: %d\n", rest, quotient);

*/

// ###################################################################################

/*_____EX 9_____

	a = 5;
	b = 9.1;
	c = 11.3;
	printf("a: %f\nb: %f\nc: %f\n", a, b, c);
	temp = a;
	a = b;
	b = c;
	c = temp;
	printf("Rervesed Numbers\na: %f\nb: %f\nc: %f\n", a, b, c);


*/

// ###################################################################################

/*_____EX 10_____
	float hypotenuse, adjacent, oposite;
	printf("give the first leg of the triangle: ");
	scanf("%f", &adjacent);
	printf("give the first leg of the triangle: ");
	scanf("%f", &oposite);

	hypotenuse = sqrt(pow(adjacent, 2) + pow(oposite, 2));
	printf("the hypotenuse is : %f", hypotenuse);

*/

// ###################################################################################

/*_____EX 11___

	float price_per_unit, taxed_price, BEF_price;
	int units;
	printf("give the price/unit: ");
	scanf("%f", &price_per_unit);
	printf("give the amount of units: ");
	scanf("%d", &units);

	taxed_price = (price_per_unit + (0.21 * price_per_unit))*units ;
	BEF_price = taxed_price * 40.3399;

	printf("you'll need to pay: %f BEF", BEF_price);

*/

// ###################################################################################

/*_____EX 12_____

	float celcius, fahreneiht;
	printf("Send the temp in fahrenheit: ");
	scanf("%f", &fahreneiht);
	celcius = (fahreneiht - 32) * 5 / 9;
	printf("The converted value is: %.2f C°", celcius);

*/

// ###################################################################################

/*_____EX 13_____

	float celcius, fahreneiht;
	printf("Send the temp in celcius: ");
	scanf("%f", &celcius);
	fahreneiht = (celcius * 9 / 5) + 32;
	printf("The converted value is: %.2f F", fahreneiht);

*/

// ###################################################################################


/*_____EX 14_____

- in Series
	printf("give the first resistance's ohms: ");
	scanf("%f", &resistance_1);
	printf("give the second resistance's ohms: ");
	scanf("%f", &resistance_2);
	printf("give the third resistance's ohms: ");
	scanf("%f", &resistance_2);

	equivalent = resistance_1 + resistance_2 + resistance_3;
	printf("the equivalent is : %f", equivalent);

- parallele
	
	float resistance_1, resistance_2, resistance_3, equivalent;
	printf("give the first resistance's ohms: ");
	scanf("%f", &resistance_1);
	printf("give the second resistance's ohms: ");
	scanf("%f", &resistance_2);
	printf("give the third resistance's ohms: ");
	scanf("%f", &resistance_3);
	equivalent = 1/( 1.0/resistance_1 + 1.0/resistance_2 + 1.0/resistance_3);
	printf("the equivalent is : %f ohm", equivalent);

*/
