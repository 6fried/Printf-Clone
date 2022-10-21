#ifndef _PRINT

#define _PRINT
#define WAIT 35000

#include <stdarg.h>
//#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

	void del (int nbrMalloc, ...);

	int check (const double nbr, int c, int time);

	char _ent (const int nbr);

	char *i_int (const long nbr);

	char *d_double (const double nbr);

	char *h_hex (const long nbr);

	char *o_oct (const long nbr);

	char *b_bin (const long nbr);

	char *c_cap (const int type, const char *in);

	char *p_pow (const double nbr);

	char *flagof (va_list ap, const char letter);

	char *charof (const char letter);

	char *emojiof (const char letter);

	void writes ( const char *mot);

	void print (const char *format, ...);

#endif
