#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
*/
int main()
{
	pid_t id_padre;

	id_padre = getppid();

	printf("El id del proceso padre es: %d\n", id_padre);

	exit(0);
}
