
//Developed by Leonardo Jodeve.
//2019-2022  All rights reserved.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int a[4][4]={0},i,row=0,column=0,x,y,judge=0,score=0;
	char work;
	srand(time(NULL));                                            //初始化种子
	for(i=0;i<2;i++)                                              //初始化数组
		{
			row=rand()%4;
			column=rand()%4;
			a[row][column]=(rand()%2+1)*2;
		}
	while(1){
start:		score=0;
    for(row=0;row<4;row++)                                        //打印游戏画面
				{
				printf("\n\n\t\t\t");
				for(column=0;column<4;column++)
					{
						score=score+a[row][column];
						if(a[row][column]!=0)
							printf("%d\t",a[row][column]);
						else
							printf("*\t");
					}
				printf("\n\n");
				}
	printf("\n\t\t\t使用'a'，'s'，'d'，'w'操作游戏\n");
	printf("\n\n\t\t\t      你的得分是：%d\n",score);
	scanf("%c",&work);
	system("cls");
	
	if(work=='a')                                                 //向左位移操作
		{
			for(i=0;i<2;i++)
			{
			for(row=0;row<4;row++)
				{
					for(column=0;column<3;column++)
						{
							if(a[row][column]==0&&a[row][column+1]!=0)
								{
									a[row][column]=a[row][column+1];                
									a[row][column+1]=0;
								}
						}
				}
			}
			for(row=0;row<4;row++)
				{
					for(column=0;column<3;column++)
						{
							if(a[row][column]==a[row][column+1])
								{
									a[row][column]=a[row][column]+a[row][column+1]; //符合条件向前求和，后一位置0
									a[row][column+1]=0;
								}
						}
				}
			for(i=0;i<3;i++)
			{
			for(row=0;row<4;row++)
				{
					for(column=0;column<3;column++)
						{
							if(a[row][column]==0&&a[row][column+1]!=0)
								{
									a[row][column]=a[row][column+1];                //空行向左移位，循环3X
									a[row][column+1]=0;
								}
						}
				}
			}
			for(x=0;x<4;x++)
	{
		for(y=0;y<4;y++)
			{
				if(a[x][y]==0)
					{
						do
							{
								x=rand()%4;
								y=rand()%4;  
							}while(a[x][y]!=0);
						a[x][y]=(rand()%2+1)*2;
							goto start;
					}
				else
					;
			}
	}
	}// a 括号结束
	if(work=='d')                                                  //向右位移操作
		{
			for(i=0;i<2;i++)
			{
			for(row=0;row<4;row++)
				{
					for(column=3;column>0;column--)
						{
							if(a[row][column]==0&&a[row][column-1]!=0)
								{
									a[row][column]=a[row][column-1];                
									a[row][column-1]=0;
								}
						}
				}
			}
			for(row=0;row<4;row++)
				{
					for(column=3;column>0;column--)
						{
							if(a[row][column]==a[row][column-1])
								{
									a[row][column]=a[row][column]+a[row][column-1]; //符合条件向右求和，前一位置0
									a[row][column-1]=0;
								}
						}
				}
			for(i=0;i<3;i++)
			{
			for(row=0;row<4;row++)
				{
					for(column=3;column>0;column--)
						{
							if(a[row][column]==0&&a[row][column-1]!=0)
								{
									a[row][column]=a[row][column-1];                //空行向右移位，循环3X
									a[row][column-1]=0;
								}
						}
				}
			}
		for(x=0;x<4;x++)
	{
		for(y=0;y<4;y++)
			{
				if(a[x][y]==0)
					{
						do
							{
								x=rand()%4;
								y=rand()%4;  
							}while(a[x][y]!=0);
						a[x][y]=(rand()%2+1)*2;
							goto start;
					}
				else
					;
			}
	}
		}// d 括号结束
	if(work=='w')                                                  //向上位移操作
		{
			for(i=0;i<2;i++)
			{
			for(column=0;column<4;column++)
				{
					for(row=0;row<3;row++)
						{
							if(a[row][column]==0&&a[row+1][column]!=0)
								{
									a[row][column]=a[row+1][column];
									a[row+1][column]=0;
								}
						}
				}
			}	
			for(column=0;column<4;column++)
				{
					for(row=0;row<3;row++)
						{
							if(a[row][column]==a[row+1][column])
								{
									a[row][column]=a[row+1][column]+a[row][column];
									a[row+1][column]=0;
								}
						}
				}
			for(i=0;i<3;i++)
			{
			for(column=0;column<4;column++)
				{
					for(row=0;row<3;row++)
						{
							if(a[row][column]==0&&a[row+1][column]!=0)
								{
									a[row][column]=a[row+1][column];
									a[row+1][column]=0;
								}
						}
				}
			}
			for(x=0;x<4;x++)
	{
		for(y=0;y<4;y++)
			{
				if(a[x][y]==0)
					{
						do
							{
								x=rand()%4;
								y=rand()%4;  
							}while(a[x][y]!=0);
						a[x][y]=(rand()%2+1)*2;
							goto start;
					}
				else
					;
			}
	}
		}// w 括号结束
	if(work=='s')                                                  //向下位移操作
	{
		for(i=0;i<2;i++)
			{
			for(column=0;column<4;column++)
				{
					for(row=3;row>0;row--)
						{
							if(a[row][column]==0&&a[row-1][column]!=0)
								{
									a[row][column]=a[row-1][column];
									a[row-1][column]=0;
								}
						}
				}
			}
		for(column=0;column<4;column++)
				{
					for(row=3;row>0;row--)
						{
							if(a[row][column]==a[row-1][column])
								{
									a[row][column]=a[row][column]+a[row-1][column];
									a[row-1][column]=0;
								}
						}
				}
			for(i=0;i<3;i++)
			{
			for(column=0;column<4;column++)
				{
					for(row=3;row>0;row--)
						{
							if(a[row][column]==0&&a[row-1][column]!=0)
								{
									a[row][column]=a[row-1][column];
									a[row-1][column]=0;
								}
						}
				}
			}
		for(x=0;x<4;x++)
	{
		for(y=0;y<4;y++)
			{
				if(a[x][y]==0)
					{
						do
							{
								x=rand()%4;
								y=rand()%4;  
							}while(a[x][y]!=0);
						a[x][y]=(rand()%2+1)*2;
						goto start;
					}
				else
					;
			}
	}
	}// s 括号结束
	judge=0;                                   //初始化判定变量
	for(row=0;row<4;row++)
		{
			for(column=0;column<3;column++)
				{
					if((a[row][column]!=a[row][column+1])&&(a[row][column]*a[row][column+1]!=0))
					judge++;
				}
		}
	for(column=0;column<4;column++)
		{
			for(row=0;row<3;row++)
				{
					if((a[row][column]!=a[row+1][column])&&(a[row][column]*a[row+1][column]!=0))
					judge++;
				}
		}
	if(judge==24)
		goto end;
	}//while(1)括号结束
end:{
		system("cls");
		printf("\n\n                   Game Over! You lose!   你的得分是：%d\n\n",score);
		system("pause");
	}
	return 0;
}