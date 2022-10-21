#include "print.h"

	void writes(const char *mot)
	{
		int i;

		for (i = 0; i < strlen(mot); i++)
		{
			write (1, &mot[i], 1);
			usleep (WAIT);
		}
	}

	void del (int nbrMalloc, ...)
	{
		va_list ap;
		va_start (ap, nbrMalloc);
		for (int i = 0; i < nbrMalloc; i++)
			free(va_arg(ap, char*));
		va_end(ap);
	}

	int check(const double nbr, int c, int time)
	{
		double tmp = nbr;
		int i = 0, r;
		while (i < time)
		{
			tmp -= (int)tmp;
			if((int)(tmp * 10) == c)
				r = 1;
			else
			    	return 0;
			tmp *= 10;
			i++;
		}
		return r;
	}
	char _ent(const int nbr)
	{
		if (nbr >= 10 || nbr < 0)
			exit(EXIT_FAILURE);
		char r = nbr+'0';
		return r;
	}
