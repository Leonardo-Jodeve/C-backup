//
// Created by Leonardo Jodeve on 2021/3/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int SubStringCounter(char* source, char* sub)
{
    int count = 0;
    int sourceLength = strlen(source);
    int subLength = strlen(sub);
    if(subLength > sourceLength || subLength ==0)
        return 0;
    //子字符串长度大于原字符串，匹配一定为0

    char* sourceBackup = source;
    char* subBackup = sub;

    char* srcPointer = source;
    char* subPointer = sub;

    while(*sourceBackup != '\0')
    {
        if(*srcPointer != *subPointer)
            srcPointer++;
        else
        {
            while(*srcPointer == *subPointer && *srcPointer != '\0' && *subPointer != '\0')
            {
                srcPointer++;
                subPointer++;
            }
            if(*subPointer == '\0')
                count++;
        }
        sourceBackup++;
        subPointer = subBackup;
        srcPointer = sourceBackup;
    }

    return count;
}

//int main()
//{
//    char* a="abcabcabc12312";
//    char* b="abc";
//    printf("%d",SubStringCounter(a,b));
//    return 0;
//}