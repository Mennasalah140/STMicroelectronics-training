#include <unistd.h>
#include <stdio.h>



int main()
{

    char *buf;
    size_t size;
    char *path = getcwd(buf, size);

    if (path == NULL) {
	printf("Couldn't find the path of the directory \n");
	return -1;
    }
    printf("%s \n", path);
    return 0;
}
