//
// Created by Leonardo Jodeve on 2021/3/18.
//

#include <stdio.h>
#include <string.h>

int ParseInt(char* string)
{
    int result = 0;
    int length = strlen(string);
    bool isNegative;

    for(int i = 0; i < length; i++)
    {
        int temp = 0;
        if(string[i] == '-')
        {
            i++;
            isNegative = true;
        }
        if(string[i] >= '0' && string[i] <= '9')
        {
            temp = string[i] - '0';
            result = result * 10 + temp;
        }
        else
        {
            break;
        }
    }

    if(isNegative)
    {
        return (-1)*result;
    }

    return result;
}

//int main()
//{
//    char* string = "-1234aaa";
////    printf("Please enter a number:");
////    scanf("%s",string);
//    printf("\"%s\" in number is %d",string,ParseInt(string));
//    return 0;
//}