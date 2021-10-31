#include<stdio.h>
#include "../include/hussain_header.h"

char * sgs_clib_strncpy(char *dest, const char *src, int n){

    char * first=dest;

    while(*src!='\0' && n!=0){
        *dest = *src;
        src++;
        dest++;
        n--;
    }

    *dest='\0';
    return first;
}
