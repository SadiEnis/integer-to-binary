#include <stdio.h>

void binary(int num)
{
    int temp, i=0;
    temp = num;

    int binaryArray[50];

    while(temp!=0)
    {
        binaryArray[i] = temp%2;
        temp /= 2;
        i++;
    }
    printf("%d = ", num);
    for(int j = i-1; j>=0; j--)
    {
        printf("%d", binaryArray[j]);
    }
}

int main()
{
    int num;
    printf("Imput an Integer for binary tranform: ");
    scanf("%d", &num);

    binary(num);

    return 0;
}
