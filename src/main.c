#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <dirent.h>
#include <sys/stat.h>

#include "FSNode.h"

#define MAX_SCAN_DEPTH 5

FSNode *root = NULL;


int main(int argc, char **argv)
{
    srand((unsigned int)time(NULL));

    const char *path = ".";

    if (argc > 1)
        path = argv[1];

    return 0;
}
