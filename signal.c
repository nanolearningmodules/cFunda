#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void 
mySignalHandler()
{
	printf("I am in Signal Handler \n");

}

int 
main()
{
	signal(SIGTERM, mySignalHandler);

	int		i = 0;

	while (1) {
		printf("Count %d\n", i);
		sleep(1);
		i++;
	}



	return 0;
}
