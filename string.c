#include <stdio.h>
#include <string.h>
int main(){
    char name[3] = {'m', 'y','\0'};
    char str1[65], str2[95], str[35];
    strcpy(str1, "Akshat\n");
    strcpy(str2, "Srivatava");
    //strcat is add string1 and string2
    strcat(str1, str2);
    printf("%s", str1);
        return 0;
}