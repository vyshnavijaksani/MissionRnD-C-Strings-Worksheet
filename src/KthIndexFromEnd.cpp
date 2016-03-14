/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
int strlength(char *str)
{
	int i = 0, count = 0;
	while (str[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
char KthIndexFromEnd(char *str, int K) {
	char res;
	if (str == '\0'){
		return '\0';
	}
	if (K > strlength(str)){
		return '\0';
	}
	if (str == '\0')
	{
		return '\0';
	}
	if (K < 0)
	{
		return '\0';
	}
	int len = strlength(str);
	int index = len - K - 1;
	res = str[index];

	return res;
}