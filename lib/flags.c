#include "print.h"

	char *flagof (va_list ap, const char letter)
	{
		char *out = malloc(sizeof(char)), *cout = malloc(sizeof(char));

		if (letter == 'i')
			out = i_int (va_arg(ap, int));
		else if (letter == 'd')
			out = d_double (va_arg(ap, double));
		else if (letter == 'c')
		{
			out[0] = va_arg(ap, int);
			out[1] = '\0';
		}
		else if (letter == 's')
		{
			cout = va_arg(ap, char *);
			for (int i = 0; i < strlen(cout); i++)
				out[i] = cout[i];
		}
		else if (letter == 'x')
			out = h_hex (va_arg(ap, int));
		else if (letter =='o')
			out = o_oct (va_arg(ap, int));
		else if (letter =='C')
		{
			out[0] = va_arg(ap, int)-32;
			out[1] = '\0';
		}
		else if (letter == 'S')
			out = c_cap (0, va_arg(ap, char*));
		else if (letter == 'H')
			out = c_cap (1, va_arg(ap, char*));
		else if (letter == 'h')
			out = c_cap (2, va_arg(ap, char*));
		else if (letter == 'm')
			out = c_cap (3, va_arg(ap, char*));
		else if (letter == 'p')
			out = p_pow (va_arg(ap, double));
		else if (letter == 'b')
			out = b_bin(va_arg (ap, int));
		else
		{
			out[0] = '%';
			out[1] = '\0';
		}

		return out;

		del (1, out);
	}

	char *charof (const char letter)
	{
		char *cout = malloc(100*sizeof(char)), *out = malloc(sizeof(char));

		if (letter == 'h')
			cout ="^_^";
		else if (letter == 'c')
			cout = "ToT";
		else if (letter == 'b')
			cout = "-_-";
		else if (letter == 'S')
			cout ="*.*";
		else if (letter == 'H')
			cout = ":)";
		else if (letter == 's')
			cout = ":(";
		else if (letter == 'm')
			cout = ";)";
		else if (letter == 'f')
			cout = "<3";
		else if (letter == 'M')
			cout = ":p";
		else if (letter == 'e')
			cout = ":D";
		else
			cout = "/";

		for (int i = 0; i < strlen(cout); i++)
			out[i] = cout[i];
		return out;

		del (2, cout, out);
	}

	char *emojiof (const char letter)
	{
		char *cout = malloc(sizeof(char)), *out = malloc(sizeof(char));

		if (letter == 'l')		
			cout = "😀";
		else if (letter == 's')
			cout = "😔";
		else if (letter == 'L')
			cout = "😂";
		else if (letter == 'S')
			cout = "😋️";
		else if (letter == 'q')
			cout = "😅";
		else if (letter == 'c')
			cout = "😉";
		else if (letter == 'h')
			cout = "😱️";
		else if (letter == 'm')
			cout = "😍";
		else if (letter == 'b')
			cout = "😘";
		else if (letter == 'a')
			cout = "😇";
		else if (letter == 'C')
			cout = "😭️";
		else
			cout = "#";

		for (int i = 0; i < strlen(cout); i++)
			out[i] = cout[i];
			
		return out;
		
		del(2, out, cout);
	}




/****************************************************************/
/*								*/
/*			    c_cap:				*/
/*							 	*/
/* la variable type definit le type de capitalisation:     	*/
/*								*/
/* 0 pour mettre uniquement la premiere lettre en mauscule 	*/
/*								*/
/* 1 pour mettre tout le texte en majuscules			*/
/*								*/
/* 2 pour mettre tout le texte sauf que la premiere lettre en	*/
/* majuscule							*/
/*								*/
/* 3 pour mettre tout le texte en minuscule			*/
/*								*/
/****************************************************************/
