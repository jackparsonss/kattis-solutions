#include<stdio.h>
#include<stdlib.h>

int main() {
    char* str = malloc(1001);
    scanf("%s", str);

    while(1) {
        if(*str == 'a'){       
            printf("%s", str);
            return 0;
        }else {
            str++;
        }
    }
    free(str);
}