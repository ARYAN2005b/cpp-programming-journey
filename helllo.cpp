#include <iostream>

int main()
{
    int numbers[4] = {101,230,380,740};

    int*ptr= numbers;

    printf("first value = %d\n",*ptr);

    ptr++;

    printf("second value =%d\n",*ptr);

    ptr++;

    printf("third value = %d\n",*ptr);

    ptr++;

    printf("fourth value = %d\n",*ptr);

    return 0;
}
