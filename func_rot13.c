/**
 * func_rot13 - Rotary String
 * @rot: String
 * Return: Number of letters printed.
 */
int func_rot13(va_list rot13)
{
	char *str;
	unsigned int i, c;
	int counter;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(rot13, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}
	i = 0;
	while (str[i])
	{
		c = 0;
		while (alph[c])
		{
			if (str[i] == alph[c])
			{
				_putchar(rot[c]);
				counter++;
				break;
			}
			c++;
		}
		if (!alph[c])
		{
			_putchar(str[i]);
			counter++;
		}
		i++;
	}
	return (counter);
}
