/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
int rem = 0;  
int len = 0;
int t = 0;
//to reverse a string
void reverse(char *str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}
//to split number and store it in char array
int numbercut(int num, char str[])
{
	int i = 0;
	while (num)
	{
		rem = num % 10;

		str[i++] = rem + '0';
		num = num / 10;
	}
	
	if (t == 1)
	{		str[i++] = '-';
		
	}
	len = i;
	reverse(str, len);
	str[i] = '\0';
	return i;
}


void number_to_str(float number, char *str,int afterdecimal){


	if (number < 0)
	{
		t = 1;
		number = (-1)*number;
	}

	int intpart = (int)number;
	float fracpart = number - (float)intpart;
	int i=0;
	i = numbercut(intpart, str);
	t = 0;
	int temp = afterdecimal;
	int num1 = 0;
	if (afterdecimal != 0)
	{
		str[i] = '.';
		while (num1 < temp)
		{
			fracpart = fracpart * 10;
			num1++;
		}
		numbercut((int)fracpart, str+i+1);

	}
}