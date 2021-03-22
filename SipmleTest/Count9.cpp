//
// Created by Leonardo Jodeve on 2021/3/18.
//

#include <stdio.h>

int Count9(int n)
{
    int count = 0;

    for(int i = 0; i < n+1; i++)
    {
        int temp = i;
        int checkIfNine = 0;

        while(temp != 0)
        {
            checkIfNine = temp % 10;
            if(checkIfNine == 9)
            {
                count++;
            }
            temp = temp / 10;
        }
    }

    return count;
}

//int main()
//{
//    printf("count 9 in 99 is:%d",Count9(9999999));
//    return 0;
//}
