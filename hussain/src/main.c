#include<stdio.h>
#include "../include/hussain_header.h"

int main(){
    char src[] = "HussainDiwan0801CS201042";
    char dest[100];

    sgs_clib_strncpy(dest,src,10);
    printf("string after copying :- %s\n", dest);
}
