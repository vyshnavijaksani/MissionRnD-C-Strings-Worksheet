/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
//to reverse characters of a string
void reverse(char *first, char *last)
{
	char temp;
	while (first < last)
	{
		temp = *first;
		*first = *last;
		*last = temp;
		*first++;
		*last--;
	}
}
void str_words_in_rev(char *input, int len)
{
		char *start = input;
		char *temp = input;
		while (*temp)
		{
			temp++;
			//to detect last word of the string
			if (*temp == '\0')
			{
				reverse(start, temp - 1);
			}
			//reversing single word of a string
			else if (*temp == ' ')
			{
				reverse(start, temp - 1);
				start = temp + 1;
			}
		} 

		//to get reverse of a reversed string
		reverse(input, temp - 1);
}

	


	
	