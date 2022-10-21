# My Custom Printf

Hello! This the README.MD file, you'll get there all tools you'll need to use my printf...
Notice that my printf is like the original (naturally😅)... It have three principals tools:
Flags, Special Caracters and Emojis... The main function of the print is the print functon
which is helped by the writes function... So let's discover the print function...

NAME: print

SYNOPSIS: print(1, char *str, args)

LANGUAGE: C

DESCRIPTION: The print function dispays the char variable using '%' flags and '/' and'#' caracters some like the original printf... All the specials caracters of printf as '\n', '\b',are available...

FLAGS: They servs to convert numbers, char and stringd to a string... Flags are managed by the flagof() function and the "key-caracter is '%'...Their markers are:

- %i: for integers... It calls the i_int() function to convert an integer to a string that will be displayed...
prototype of i_int():
char *i_int (const long nbr);

- %d: for doubles... It uses the d_double() function that to convert a double to string that will be displayed...
prototype of d_double():
char *d_double (const double nbr);

- %c for chars... It just displays a char like it have been initialized...

- %s for strings... It just displays a string like it have been initialized...

- %x for integers... It uses the h_hex() function that calls the i_int() function to convert an integer to hexafecimal and string that will be displayed...
prototype of h_hex():
char *h_hex (const long nbr);

- %o for integers... It uses the o_oct() function that calls the i_int() function to convert an integer to octal and string that will be displayed...
prototype of o_oct():
char *o_oct (const long nbr);

- %b for integers... It uses the b_bin() function that calls the i_int() function to convert an integer to binary and string that will be displayed...
prototype of b_bin():
char *b_bin (const long nbr);

- %C for chars... It Just displays a char but at his capital form...

- %S for strings... It uses the c_cap() function to capitalize only the first letter and all the others in lower case...

- %H for strings... It uses the c_cap() function to capitalize all the letters...

- %h for strings... It uses the c_cap() function to put only the first letter in lower case and all the others capitalized...

- %m for strings... It uses the c_cap() function to put all the text on lower case...
prototype of c_cap():
char *c_cap(const int type, const char *in);

- %p for doubles... It uses the p_pow() function to write a double as power of ten and convert it to a string tha will be displayed...
prototype of p_pow():
char *p_pow(const double nbr);

%_ To display the '%' caracter, you, just have to write it whith an other letter than those on
top... But conventionnaly, we willtake the underscore to display the percent.... So, if you
want to display '%', you wille type '%_' and if you whant to display '%_', you will type'%__'...
That's simple...

Protype of flagof()
char *flagof (va_list ap, const char letter);

SPECIAL CARACTERS
They serves to display specials caracters such as '^_^' or ';)'... Special caracters are managed by
the charof() function and the keycharacter '/'... Their markers are:

/h to dosplay ^-^

/c to dosplay 'ToT'

/b to dosplay '-_-'

/S to dosplay '*.*'

/H to dosplay ':)'

/m to dosplay ':('

/f to display ':p'

/E to display ':D'

/_ To display the back-slash, you'll just have to type it whith an other caracter than those on
top but conventionally, we will use the underscore dor that... SO, if we want to display '/',
we will type '/_' and if we want to display '/_', we will type '/__'... That's simple...

Prototype of charof():
char *charof (const char letter);

EMOJIS
They serves to display emojis... Emojis are managed by the emojiof() function and the key character '/'...
Their markers are:

#l to display 😀

#s to display 😔

#L to display 😂

#S to display 😋️

#q to display 😅

#c to display 😉

#h to display 😱️

#m to display 😍

#b to display 😘

#a to display 😇

#C to display😭️

#_ To display the ashtag, you'll just have to type it whith an other caracter than those on top
but conventionally, we will use the underscore dor that... SO, if we want to display '#', we
will type '#_' and if we want to display '#_', we will type '#__'... That's simple...

Prototype of emojiof():
char *emojiof (const char letter);

ABOUT FUNCTIONS

The functions used in this programs are in order of call:
-print()
-flagof()
-_ent()
-i_int()
-d_double()
-h_hex()
-o_oct()
-b_bin()
-c_cap()
-p_pow()
-charof()
-emojiof()
-writes()
-check()
-del()


- print()

It is the main function called in the main.c file... It is like the heart or the control center
of this program... It takes on mandatory parameters an integer which is how much variables to
display (defautl 1) and optional characters which are the variables to display...

PROTOTYPE
void print (const int nbrMots, ...);

- flagof()

This function manages the flags and the int, double, char, string and other variables' display...
It takes on parameters a va_list variable which helps to get the equivalent value of the used
flag, and a caracter which is a letter that will indicate the flag type to use... It returns a
string of char which will contain the converted variable...

PROTOTYPE
char *flagof (va_list ap, const char letter);

- _ent()

It is a small function which convert an integer number between zero (0) an ten (10) to a char
according to the ASCII table... It just take thenumber to convert in parameters and return a
char
Ex: _ent(5) = '5'...

PROTOTYPE
char _ent (const int nbr);

- i_int

It convert an integer number to a char using frequently the _ent() function... It takes an
integer on parameters and returns a string of char...

PROTOTYE
char *i_int (const long nbr);

- d_double

It convert a double number to a char... It takes a double value on parameters and returns a
string of char...

PROTOTYE
char *d_double (const double nbr);

- h_hex()

It convert an integer number to an hexadecimal char... It takes an integer on parameters and
returns a string of char...

PROTOTYE
char *h_hex (const long nbr);

- o_oct()

It convert an integer number to an octal char... It takes an integer on parameters and returns a
string of char...

PROTOTYE
char *o_oct (const long nbr);

- b_bin()

It convert an integer number to an binary char... It takes an integer on parameters and returns a
string of char...

PROTOTYE
char *b_bin (const long nbr);
- c_cap()

This function manage every thing or tool we have about string of char which are used by the '%S',
'%h' and '%H' flags...It just change a string of char in order to have somme letters on capital
or others in lower case... It takes two parameters which are firstly an integer between 0 and 3
that will show which type of convertion we hava do and secondthe string to modify...

TYPE SPECIFICATION

When type's value is:
- 0, the first letter is apitalized and the others on lower case...

- 1, all the letters are capitalized...

- 2, only rhe first letter is on lower case, all others are capitalized

- 3, all the letters are lower case...

PROTOTYPE
char *c_cap (const int type, const char *in);


- p_pow()

It convert a double number to a power of ten char... It takes a double value on parameters and
returns a string of char...

PROTOTYE
char *p_pow (const double nbr);

- charof()

This function manages the special characters display... It takes on parameters a caracter which
is a letter that will indicate the special character to display... It returns a string of char
which will contain the converted variable...

PROTOTYPE
char *charof (const char letter);

- emojiof()

This function manages the emojis display... It takes on parameters a caracter which is a letter
that will indicate the emoji to display... It returns a string of char which will contain the
converted variable...

PROTOTYPE
char *emojiof (const char letter);

- writes()

It is an alternative of the print wich just print a string of char without flags ou any marker
except the predefined special characters... It just takes as parameters a string of characters
that will be displayed...

PROTOTYPE
void writes ( const char *mot);
- check()

It is a small function used in the d_double() one to check if the same character come a given
time in the decimal part of the number.... It takes three parameters which are the decimal
number, the number to check rehearsal and the rehearsal time... It return when the number is
repeaten the given time, and if not...

PROTOTYPE
int check (const double nbr, int c, int time);
- del()

It is an function tha help me to free all my mallocs in order to not have to call free() many
times... It takes as parameters the number of pointers to free and as optional, all the poin-
ters descpite their type...

void del (int nbrMalloc, ...);

PROTOTYPE
void del (int nbrMalloc, ...);

USED LIBRAIRIES
<stdarg.h>
<stdio.h>
<stdlib.h>
<string.h>
<unistd.h>

BUGS
I tried to reduce the bugs but it could always have on the code... Let me warn you that it can be in
the d_double function or/and p_pow one... If you find some bugs, you can improve it youself or notify
it to me...

NOTICE
The display's speed is by default on 85000ms or 0.35s... The programm takes exactly 1mn00s... You can
modify the speed in the "include/print.h" file the WAIT value... Last thing to finish... My work wasn't
on the program... I mostly worked on the print() function and this program, just serve for illustration
of how it works... So I suggest you to use the print function for your programs and also imporve it...
All your suggestions for improvement will be wellcome...

AUTHOR
HANTAN Sèdégbé Kelly

A free-lance coder to serve you😉️...

How To Join Me:
-Facebook/Messenger: Sèdégbé Kelly Hantan
-Whatsapp/Telegram: +229 94 42 82 00
-Just for call: +229 90 19 73 48

COPYRIGHT
July 2020
