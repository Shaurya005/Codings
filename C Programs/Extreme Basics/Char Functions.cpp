 C programming character handling library functions
 
 C provides standard character handling library <ctype.h>.
 
 The function in <ctype.h> recieves an unsigned char represented as int or EOF as argument.

 C programming character library functions with description

int islower( int ch );
It returns a true if ch is a lowercase letter and 0 otherwise.

int isupper( int ch );
It returns a true value if ch is a uppercase and 0 therwise.

int tolower( int ch );
This function converts uppercase letter into lowercase letter.

int toupper( int ch );
This function converts lowercase letter into uppercase letter.

int isblank( int ch );
This function checks whether ch is a blank character or not.

int isdigit( int ch );
This function checks whether ch is a digit or not.

int isalpha( int ch );
This function checks whether ch is a letter or not.

int isalnum( int ch );
This function returns a 1 if ch is a digit or a letter and 0 otherwise.

int isxdigit( int ch );
This function checks if ch is a hexadecimal digit or not.

int isspace( int ch );
This function checks if ch is a whitespace character or not.

int isgraph( int ch );
This function checks if ch is a printing character other than a space or not.

int iscntrl( int ch );
This function checks if ch is a control character or not.

int isprint( int ch );
This function checks if ch is a printing character including a space or not.

int ispunct( int ch );
This function checks if ch is a printing character other than a digit, a space, a letter or not.
