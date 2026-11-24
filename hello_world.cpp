#include <stdio.h>
#include <string.h>

int main() {

    char name1[] = "JOHN";
    char name2[] = "john";

    int result = strcmp(name1,name2);

    if (result == 0) {
        printf("both name are the same.\n");
    }
    else {
        printf("name are different.\n");
    }

    return 0;
}


    

 
