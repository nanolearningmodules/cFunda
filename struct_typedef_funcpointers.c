#include<stdio.h>
// Generic Function 
void greeting()
{
	printf("Hello Greeting \n");

}
// Defining Function Pointer
void            (*p_greeting) ();


int main()
{
	int		x;

	struct custom_struct {
		int		iX;
		char		iY;

	};
	typedef struct custom_struct custom_struct_t;
	custom_struct_t	myStruct;
	myStruct.iX = 10;
	myStruct.iY = 'a';
	printf("I am creating Struct: With %d and %c \n", myStruct.iX, myStruct.iY);

	greeting();
        
        p_greeting = greeting;
	(*p_greeting) ();

	p_greeting();
	return 0;

}
