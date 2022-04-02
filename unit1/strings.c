#include <stdio.h>
#include <string.h>


char str[] = " ";
char lastname[10] = {'M', 'A', 'R', 'I', 'A', 'N', 'A'};



int main(int argc , char** argv){

    strcpy(str,argv[1]);
    printf("%s\n", str);
    strcpy(lastname, argv[3]);
    printf("Letra del nombre %s\n", lastname);




    return 0;
}
© 2022 GitHub, Inc.
Term