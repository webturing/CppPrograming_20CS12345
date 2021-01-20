#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main() {
    char s[10];
    puts(s);//垃圾值
    /////////////////////////////
    char s1[5] = {'a', 'b', 'c', 'd', 'e'};
    int i;
    for (i = 0; i < 5; i++)
        putchar(s1[i]);
    puts("");
    puts(s1);//s1!="abcde"
    ////////////////////
    char s2[10] = {'a', 'b', 'c', 'd', 'e'};
    /**same as char s2[]="abcde";*/
    puts(s2);//s2="abcde"
    s2[5] = '0';
    puts(s2);//s2!="abcde"
    s2[0] = s[4] = '\0';//same as s2[0]=0;

    puts(s2);//s2="";

    //printf("NULL=%d EOF=%d EXIT_SUCCESS=%d\n",NULL,EOF,EXIT_SUCCESS);
    return EXIT_SUCCESS;
}
