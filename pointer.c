#include <stdio.h>
//basic of pointer
int main(){
    int a = 92;
    printf("%d\n",a);
    int* ptr = NULL;
    //check pointer is work or not (single line comment)
    if (!ptr)
    {
        printf("pointer is ");
    }
    /*check pointer (multiline comment)*/
    ptr = &a;
    *ptr = 122;
    printf("%d",a);
    return 0;
}

