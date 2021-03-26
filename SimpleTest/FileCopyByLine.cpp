//
// Created by Leonardo Jodeve on 2021/3/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

#define BUFFER_LENGTH 1024

int ReadByLine(int sourceFD, char* buffer, int maxLength)
{
    int i;
    int readReturn;
    char temp;

    for(i = 0; i < maxLength; i++)
    {
        readReturn = read(sourceFD, &temp, 1);
        if(readReturn == -1)
        {
            perror("Read Error");
            exit(1);
        }

        if(readReturn == 0)
        {
            break;
        }

        if(temp == '\n')
        {
            buffer[i] = temp;
            i++;
            break;
        }

        buffer[i] = temp;
    }
    buffer[i] = '\0';
    return i;
}


void FileCopyByLine(char* sourceFilePath, char* destinationFilePath)
{
    int sourceFD, destinationFD;
    int bytesRead, bytesWrite;
    char buffer[BUFFER_LENGTH];
    char* currentPosition;

    sourceFD = open(sourceFilePath, O_RDONLY);
    destinationFD = open(destinationFilePath, O_RDWR | O_CREAT, 0644);

    if(sourceFD == -1)
    {
        perror("Read error!");
        exit(1);
    }
    if(destinationFD == -1)
    {
        perror("Write error!");
        exit(1);
    }

    while(bytesRead = ReadByLine(sourceFD, buffer, BUFFER_LENGTH))
    {
        if(bytesRead == 0)
        {
            break;
        }

        if(bytesRead > 0)
        {
            currentPosition = buffer;
            while(bytesWrite = write(destinationFD, currentPosition, bytesRead))
            {
                if(bytesWrite == -1)
                {
                    break;
                }
                else if(bytesWrite == bytesRead)
                {
                    break;
                }
                else if(bytesWrite > 0)
                {
                    currentPosition = currentPosition + bytesWrite;
                    bytesRead = bytesRead - bytesWrite;
                }
            }
        }
        memset(buffer, 0, BUFFER_LENGTH);
    }

    close(sourceFD);
    close(destinationFD);
}

int main(int argv, char* args[])
{
    FileCopyByLine("F:\\source.txt","F:\\copy.txt");
//    if(argv != 3)
//    {
//        printf("Arguments error!");
//        exit(0);
//    }
//    FileCopy(args[1], args[2]);
}