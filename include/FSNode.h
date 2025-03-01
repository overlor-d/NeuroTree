#ifndef FSNODE_H
#define FSNODE_H

#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <dirent.h>
#include <sys/stat.h>



typedef struct FSNode {
    char *name;
    int isFolder;
    int depth;
    float x,y,z;
    struct FSNode **children
    int childCount;
} FSNode;


FSNode *scanDirectory(const char *path, int depth);

void freeFSNode(FSNode *node);

int countNodes(FSNode *node);

void drawFSNodeRec(FSNode *node);



#endif // FSNODE_H