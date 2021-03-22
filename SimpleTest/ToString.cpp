//
// Created by Leonardo Jodeve on 2021/3/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReverseString(char* string, int length)
{
    char temp;

    for(int i = 0; i < length / 2; i++)
    {
        temp = *(string + i);
        *(string + i) = *(string + length - 1 - i);
        *(string + length - 1 - i) = temp;
    }
}

char* ToString(int a)
{
    static char string[100];
    int temp = a;
    int i = 0;

    while(temp != 0)
    {
        char number = temp % 10 + '0';
        string[i] = number;
        temp = temp / 10;
        i++;
    }

    string[i] = '\0';
    ReverseString(string , strlen(string));

    return string;
}


//int main()
//{
//    int number = 12345;
//    printf("%s", ToString(number));
//}