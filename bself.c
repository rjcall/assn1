#include<stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    printf("Assignment 1 by Jace Call\n");
    printf("Number of arguments printed: %d\n", argc);
    int i;
    
    const char *temp;
    FILE *fp;
    fp=fopen(argv[1], "w");



    for(i=0; i < argc; i++)
    {
        fprintf(fp,"Argument %d: %s\n",i,argv[i]);
    }
    
    fclose(fp);
    return 0;
}
