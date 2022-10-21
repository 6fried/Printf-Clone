#include "print.h"

	void print (const char *format, ...)
	{
		int i;
		va_list ap;

		va_start (ap, format);

		for (i = 0; i < strlen(format); i++)
		{
			char *var = malloc(100 * sizeof(char));
			switch (format[i])
			{
				case '%':
				{
					i++;
					var = flagof(ap, format[i]);
					writes(var);
				}
				break;

				case '/':
				{
					i++;
					var = charof(format[i]);
					writes(var);
				}
				break;

				case '#':
				{
					i++;
					var = emojiof(format[i]);
					writes(var);
				}
				break;

				default:
				{
					write(1, &format[i], 1);
					usleep (WAIT);
				}
				break;
			}
			del (1, var);
		}

		va_end(ap);

	}
