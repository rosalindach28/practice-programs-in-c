// methods to return a string from a function
// using string.h library

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// char *example1();
const char *method1(); // string literals
void method2(char *str2);
char *method3();

int main(int argc, char *argv[])
{
    const char *result = method1();
    printf("method 1: %s\n", result);

    char ret[256];  // string variable in calling function (for method 2)
    method2(ret); // implement function
    printf("Output: %s\n", ret); // print result

    char *dynamic = method3();
    printf("Using malloc: %s", dynamic);
    free(dynamic);

    

    // char* result3 = method3();
    // printf("%s\n", result3);
}
/*
// example 1 will work but since string literals cannot be modified(immutable)
// use const keyword to prevent modification for correct implementation (method1)
 char* example1()
 {
    return "test1";
}
*/

const char *method1() // string literal cannot be modified (preferred)
{
    return "constants cannot be changed";
}

void method2(char *str2) // strcpy(); stack
{
    strcpy(str2, "method2 string");
}

char *method3() // malloc/free(); dynamically-allocate memory on heap
{
    char *string = malloc(8);
    strcpy(string, "dynamic");
    return string;
}

