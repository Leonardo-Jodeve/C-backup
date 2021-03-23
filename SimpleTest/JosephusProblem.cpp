//
// Created by Leonardo Jodeve on 2021/3/22.
//

#include <stdio.h>

int JosephusProblem(int count)
{
    char killed[count];
    int currentNumber = 0;
    int peopleRemain = count;
    int survivor = 0;

    for(int i = 0; i < count; i++)
    {
        killed[i] = '0';
    }

    while(peopleRemain > 1)
    {
        for(int i = 0; i < count; i++)
        {
            if(killed[i] == '0')
            {
                currentNumber++;
                if(currentNumber % 3 == 0)
                {
                    killed[i] = '1';
                    peopleRemain--;
//                    printf("Killed number %d\n",i+1);
                }
            }
        }
    }

    for(int i = 0; i < count; i++)
    {
        if(killed[i] == '0')
        {
            survivor = i+1;
            break;
        }
    }
    return survivor;
}

//int main()
//{
//    int people;
//    int survivor;
//    printf("Please enter the number of people:");
//    scanf("%d",&people);
//    survivor = JosephusProblem(people);
//    printf("The final survivor is %d!",survivor);
//}