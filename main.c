#include "print.h"

	int main (int argc, char *argv[])
	{
		print ("\nWellcome to my own, funny and pretty version of printf... Please check the README.MD file to get \nexplanations /h...\n");
		print ("I'll show you how it works... You're about to see how works the following instruction:\n\n");
		print ("print (\"enteger: %_i - double: %_d - char: %_c - string: %_s - hexadecimal: %_x - octal: %_o \nbinary: %_b - Bigchar: %_C - First Capital: %_S - All Capital: %_H All Capital without First: %_h \nAll Lower Case: %_m - Power Of Ten: %_p' and the percent: %  \", 3450, 35.5684, 'e', \"dick\", \n3450, 3450, 3450, 'e', \"dick\", \"dick\", \"dick\", \"DICK\", 0.00065654);\n\n");
		print ("Now, let's see what it gives...\n\n");
		print ("Integer: %i - Double: %d - Char: %c - String: %s - Hexadecimal: %x - Octal: %o - \nBinary: %b - Bigchar: %C - First Capital: %S - All Capital: %H All \nCapital without First: %h - All Lower Case: %m - Power Of Ten: %p and the percent: % \n\n", 3450, 35.5684, 'e', "dick", 3450, 3450, 3450, 'e', "dick", "dick", "dick", "DICK", 0.000123456);
		print ("That is for the flags... You will see now the specials caracters ");
		print ("The code I'll execute is: ↓↓↓\n\n");
		print ("print (\" My special caracters: /_h /_c /_b /_S /_H /_s /_m /_f /_M /_e  and the back slash '/_' /  \");\n\n");
		print ("My special caracters: /h /c /b /S /H /s /m /f /M /e  and the back slash '/_' /  \n");
		print ("And now, just for junior, let's see my emojis #q\n\n");
		print ("Code: ↓↓↓\n\n");
		print ("print(\"My emojis: #_l #_s #_L #_S #_q #_c #_h #_m #_b #_a #_C and the ashtag '#_': #_\");\n\n");
		print ("My emojis: #l #s #L #S #q #c #h #m #b #a #C and the ashtag '#_': #_\n\n");
		print ("I think that the demo is finished... I'd like to add more emojis but I'm tired...\n\n");
		print ("Notice that you can custom your use of the print fonction in the main.c file... And one more time, \nif you need more explanation, check the README.MD file... Ciao#c#c#c\n\n");
	}
