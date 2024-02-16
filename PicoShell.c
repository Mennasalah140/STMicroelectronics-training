#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>



#define max 1000000
int main()
{

    int x = 1;
    while (x != 0) {

	printf("Enter your message : ");
	char str[max];

	fgets(str, max, stdin);
	str[strlen(str) - 1] = 0;

	if (strlen(str) == 0)
	    continue;

	char cpy[max];
	strcpy(cpy, str);

	char *string;
	string = strtok(str, " ");

	int size = 0;
	while (string != NULL) {
	    string = strtok(NULL, " ");
	    size++;
	}
	char **argv = (char **) malloc((size + 1) * sizeof(char *));
	argv[0] = strtok(cpy, " ");

	for (int i = 1; i <= size; i++) {

	    argv[i] = strtok(NULL, " ");

	}

	if ((x = strcmp(cpy, "pwd")) == 0) {
	    char *buf;
	    size_t size;
	    char *path = getcwd(buf, size);

	    if (path == NULL) {
		printf("Couldn't find the path of the directory \n");
		break;
	    }
	    printf("%s \n", path);
	    x = 1;
	    continue;

	}

	else if ((x = strcmp(cpy, "cd")) == 0) {
	    if (size == 2) {
		if ((chdir(argv[1])) != 0) {
		    printf("Couldn't change the directory ");
		}
	    } else {
		printf("Number of arguments is not suitable");

	    }
	    printf("\n");
	    x = 1;
	    continue;
	}

	else if ((x = strcmp(cpy, "echo")) == 0) {
	    for (int i = 1; i < size; i++) {
		printf("%s ", argv[i]);

	    }

	    printf("\n");
	    x = 1;
	    continue;
	}

	else if ((x = strcmp(cpy, "exit")) == 0) {
	    break;
	}


	else {
	    pid_t returned_pid = fork();
	    if (returned_pid > 0) {
		int wstatus;
		wait(&wstatus);
	    } else if (returned_pid == 0) {

		execvp(argv[0], argv);

		printf("I am not in the mode of execution. Exec failed\n");

		return -1;
	    } else {
		printf("ERROR: I could not get a child\n");
	    }
	}

    }
    printf("Good Bye:) \n ");
    return 0;
}
