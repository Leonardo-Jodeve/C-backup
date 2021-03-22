//
// Created by Leonardo Jodeve on 2021/3/22.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void DecToHex(unsigned int source)
{
    char hex[] = "0x00000000";
    unsigned int temp = source;
    unsigned int mask = 0xf;
    unsigned int andResult;
    for(int i = 0; i < 8; i++)
    {
        andResult = temp & mask;
        temp = temp >> 4;
        if(andResult < 10)
        {
            *(hex+9-i) = ('0' + andResult);
        }
        else
        {
            *(hex+9-i) = ('A' + andResult%10);
        }

    }
    printf("%s",hex);
}

//int main()
//{
//    DecToHex(255);
//    return 0;
//}