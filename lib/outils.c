/************************************************/
/*						                        */
/* VOIR EN BAS POUR LES INFOS SUR LES FONCTIONS */
/*						                        */
/************************************************/

#include "print.h"

	char *i_int(const long nbr)
	{
		//Déclaration Des Variables + Initialisation
		int tmp = -nbr, i = 0;
		char *out = malloc(sizeof(char)), *cout = malloc(sizeof(char));

		//Vérification Du Signe
		if (nbr >= 0)
			tmp = nbr;
		else
			tmp = -nbr;

		//Convertion
		do
		{
			cout[i] = _ent(tmp%10);
			tmp = (tmp - (tmp%10)) / 10;
			i++;
		}
		while (tmp != 0);

		//Réorganisation Du Tableau
		for (i = 0; i < strlen(cout); i++)
			out[i] = cout[strlen(cout)-i-1];
		if (nbr < 0)
		{
			for (i = strlen(out); i >= 1; i--)
				out[i] = out[i-1];
			out[0] = '-';
		}

		return out;
		del (2, out, cout);
	}

	char *d_double(const double nbr)
	{
		//Déclaration + Initialisation
		int ent, i = 0;
		char *out = malloc(sizeof(char)), *Dec = malloc(9999*sizeof(char)), r;
		double tmp, dec;

		//Etude De Signe Et Rectification De l'Initialisation
		if (nbr >= 0)
			tmp = nbr;
		else
			tmp = -nbr;

		ent = (int) tmp;
		dec = tmp - ent;

		//Partie Entière
		out = i_int(ent);

		//Partie Decimale
		do
		{
			dec *= 10;
			r = _ent((int)dec);
			Dec[i] = r;
			dec -= (int)dec;
			if (check(dec, 9, 3) == 1)
				Dec[i] += 1;
			i++;
		}
		while(dec != 0 && check(dec, 0, 3) == 0 && check(dec, 9, 3) == 0);

		//Mise En Commun
		out[strlen(out)] = '.';
		strcat (out, Dec);

		//Correction En Fonction Du Signe
		if (nbr < 0)
		{
			for (i = strlen(out); i >= 1; i--)
				out[i] = out[i-1];
			out[0] = '-';
		}
		return out;

		del (2, out, Dec);
	}

	char *p_pow(const double nbr)
	{
		double tmp;
		char *out, p;
		int i = 0;

		// Etude De Signe
		if (nbr >= 0)
			tmp = nbr;
		else
			tmp = -nbr;

		//On distingue 3 possibilités...

		// 1 <= tmp < 10 et tmp =0
		if ((1 <= tmp && tmp < 10) || tmp == 0)
			p ='+';

		// tmp >= 10
		while (tmp >= 10)
		{
			tmp /= 10;
			i++;
			p = '+';
		}

		// 0 < tmp < 1
		while (tmp > 0 && tmp < 1)
		{
			tmp *= 10;
			i++;
			p = '-';
		}

		// Convertion Sous La Forme a±E(q)
		out = d_double (tmp);
		out[strlen(out)] = 'E';
		out[strlen(out)] = p;
		out[strlen(out)] = _ent(i);

		//Rectification En Fonction Du Signe
		if (nbr < 0)
		{
			for (i = strlen(out); i >= 1; i--)
				out[i] = out[i-1];
			out[0] = '-';
		}

		return out;

		del (1, out);
	}

	char *h_hex (const long nbr)
	{
		int tmp = nbr, i;
		char *cout = malloc(100* sizeof(char)), *out = malloc(sizeof(char));
		for (i = 0; tmp != 0; i++)
		{
			cout[i] = (tmp%16);
			if (cout[i] >= 10)
				cout[i] = (cout[i]%10)+'A';
			else
				cout[i] += '0';
			tmp = (tmp - (tmp%16))/16;
		}
		for (i = 0; i < strlen(cout); i++)
			out[i] = cout[strlen(cout)-1-i];

		return out;

		del(2, cout, out);
	}

	char *o_oct(const long nbr)
	{
		int tmp = nbr, i;
		char *cout = malloc(100* sizeof(char)), *out = malloc(sizeof(char));

		for (i = 0; tmp != 0; i++)
		{
			cout[i] = (tmp%8);
			cout[i] += '0';
			tmp = (tmp - (tmp%8))/8;
		}

		for (i = 0; i < strlen(cout); i++)
			out[i] = cout[strlen(cout)-1-i];

		return out;

		del(1, cout, out);
	}

	char *b_bin(const long nbr)
	{
		int tmp = nbr, i;
		char *cout = malloc(100* sizeof(char)), *out = malloc(sizeof(char));

		for (i = 0; tmp != 0; i++)
		{
			cout[i] = (tmp%2);
			cout[i] += '0';
			tmp = (tmp - (tmp%2))/2;
		}

		for (i = 0; i < strlen(cout); i++)
			out[i] = cout[strlen(cout)-1-i];

		return out;

		del(1, cout, out);
	}

	char *c_cap(const int type, const char *in)
	{
		int i;
		char *out = malloc(sizeof(char));

		for (i = 0; i < strlen(in); i++)
			out[i] = in[i];

		switch (type)
		{
			case 0:
			{
				if (97 <= out[0] && out[0]<= 122)
					out[0] -= 32;

				for  (i = 1; i < strlen(out); i++)
				{
					if (65 <= out[i] && out[i]<= 90)
						out[i] += 32;
				}
			}
			break;
			case 1:
			{
				for (i = 0; i < strlen(out); i++)
				{
					if (97 <= out[i] && out[i]<= 122)
						out[i] -= 32;
				}
			}
			break;
			case 2:
			{
				for (i = 1; i < strlen(out); i++)
				{
					if (97 <= out[i] && out[i]<= 122)
						out[i] -= 32;
				}

				if (25 <= out[0] && out[0]<= 90)
					out[0] += 32;
			}
			break;

			case 3:
			{
				for (i = 0; i < strlen(out); i++)
				{
					if (65 <= out[i] && out[i]<= 90)
						out[i] += 32;
				}
			}
			break;

			default:
			{
				print("\nType Error : Entrez '0' pour mettre la première lettre en majuscule, \n'1' pour mettre tout le texte en majuscules,'2' pour laisser uniquement \nla première lettre en minuscule\n\n");
				exit(0);
			}
			break;
		}

		return out;

		del (1, out);
	}


/****************************************************************/
/*							                                	*/
/*			           c_cap:                           		*/
/*						                                		*/
/* la variable type definit le type de capitalisation:	    	*/
/*						                                		*/
/* 0 pour mettre uniquement la premiere lettre en mauscule      */
/*							                                	*/
/* 1 pour mettre tout le texte en majuscule		            	*/
/*						                                		*/
/* 2 pour mettre tout le texte sauf que la premiere lettre en   */
/* majuscule					                        		*/
/*								                                */
/* 3 pour mettre tout le texte en minuscule			            */
/*								                                */
/****************************************************************/

