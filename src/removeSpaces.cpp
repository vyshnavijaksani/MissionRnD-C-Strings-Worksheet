/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	int i, j;
	if (str == '\0' || str == "")
		return '\0';
	
	int count= 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			//for (k = i + 1; str[k] != '\0'; k++)
			//{
			//	str[k] = str[k + 1];
			//}
			//}
			//}
			str[count++] = str[i];
		}
	}
	str[count] = '\0';
	return *str;
}