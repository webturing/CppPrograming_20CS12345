#include<bits/stdc++.h>

using namespacestd;

int main() {
    int *s2;
    s2 = (int *) malloc(sizeof(int) * (1 << 20));
    if (s2 == NULL)
        puts("Allocate failed!!");
    else
        puts("Allocate Successfully!!");
//todo
    free(s2);


    return 0;
}



