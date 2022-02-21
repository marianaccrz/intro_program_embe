#include <stdio.h> //its just comment.
#include <string.h>

char str[] = "";

int main(int argc , char** argv){
    strcpy(str,argv[1]);
    printf("%s\n",str);
    return 0 ;

}