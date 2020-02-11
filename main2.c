#include <stdio.h>
#include <string.h>

int glo = 76;
// data_type func_name(parameter_type parametername){
//     return value_of_type_data_type;
// }

void newPrint(char * char1)
{
    printf("The value is %s\n\n\n\n", char1);
}

int sum(int a, int b)
{
    return a+b;
}

float average(float a, float b)
{
    return (a+b)/2;
}

struct Books{
    char name[50];
    char author[50];
    int price;
} book;


void printStruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book Price is %d\n", bk.price);
}
int main(){

    

    // Functions
    // printf("The average of 100 and 299 is %f", average(100,299));
    // int glo = 87;
    // printf("Glo is %d", glo);
    // int arr[10] = {0,1,2,3,4,5,6,70,8,9};
    // for(int i = 0; i < 10; i++)
    // {
    //     printf("Enter the values for index %d \n", i);
    //     scanf("%d", &arr[i]);
    // }

    // for(int i = 0; i < 10; i++)
    // {
    //     printf("The value for index %d is %d\n", i, arr[i]);
    // }
    
    
    // printf("%d", arr[7]);

    // Pointers
    // int a = 98;
    // printf("%d\n", a);
    // int* ptr = NULL;
    // if (!ptr)
    // {
    //     printf("pointer is not null");
    // }
    // ptr = &a;
    // *ptr = 188;
    // printf("%d", a);


    // Strings
    // char name[3] = {'m', 'y', '\0'};
    // char str1[65], str2[98], str3[32];
    // strcpy(str1, "Harry");
    // strcpy(str2, "Rohan");
    // strcat(str1, str2);
    // printf("%d", strcmp(str1,str2));

    

    // Structures
    struct Books bk1, bk2;
    strcpy(bk1.name, "C Programming");
    strcpy(bk1.author, "Dennis");
    bk1.price = 78;
    printStruct(bk1);

    return 0;

    
}
