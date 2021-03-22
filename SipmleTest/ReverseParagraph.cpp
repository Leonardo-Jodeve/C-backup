//
// Created by Leonardo Jodeve on 2021/3/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern void ReverseString(char* string, int length);

char* ReverseParagraph(char* paragraph, int length)
{
    static char temp[50][50];
    static char space = ' ';
    int currentPosition = 0;
    int wordCount = 0;
    int tempPosition = 0;

    ReverseString(paragraph, length);
    for(int i = 0; i < length; i++)
    {
        if(paragraph[i] == ' ')
        {
            for(currentPosition; currentPosition < i; currentPosition++)
            {
                temp[wordCount][tempPosition] = paragraph[currentPosition];
                tempPosition++;
            }
            temp[wordCount][tempPosition+1] = '\0';
            wordCount++;
            tempPosition = 0;
            currentPosition++;
        }
    }

    while(paragraph[currentPosition] != '\0')
    {
        temp[wordCount][tempPosition] = paragraph[currentPosition];
        currentPosition++;
        tempPosition++;
    }
    wordCount++;

    for(int i = 0; i < wordCount; i++)
    {
        ReverseString(temp[i],strlen(temp[i]));
        if(i > 0)
        {
            strcat(temp[0],&space);
            strcat(temp[0],temp[i]);
        }
    }
    return temp[0];
}

//int main()
//{
//    char paragraph[50];
//    scanf("%[^\n]",&paragraph);
//    printf("%s",ReverseParagraph(paragraph, strlen(paragraph)));
//    return 0;
//}