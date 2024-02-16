#include <stdio.h>

int main(int argc, char *argv[])
{


    if (argc != 3) {
	printf("Error: Missing some parameters \n");
	return -1;
    }

    if ((rename(argv[1], argv[2])) != 0) {
	printf("Error: couldn't move the file \n");
	return -1;
    }
    return 0;
}
