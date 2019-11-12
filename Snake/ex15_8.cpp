#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#define up 'w'
#define down 's'
#define left 'a'
#define right 'd'
#define stop 'p'
typedef struct snakes
{
	int x;
	int y;
	struct snakes *next;
}snake;
snake *head,*tail;
struct Food
{
	int x;
	int y;
}food;
int name[21];
int speed;
int score=0;
char click;
void gotoxy(int x,int y)
{
	COORD pos;
	HANDLE hOutput;
	pos.X=x;
	pos.Y=y;
	hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput,pos);
}
void welcome()
{
	gotoxy(15,10);
	printf("/*****************************************************/");
	gotoxy(15,22);
	printf("/*****************************************************/");
	gotoxy(17,13);
	printf("Welcome to the game of retro snake");
	gotoxy(15,16);
	printf("请在英文输入法中操作,反向移动等于自杀,用wasd控制方向");
	gotoxy(17,19);
	printf("Please enter your name:");
	scanf("%s",name);
	system("cls");
}
void gotoprint(int x,int y)
{
	gotoxy(x,y);
	printf("■");
}
void wall()
{
	int i;
	gotoxy(0,0);
	for(i=0;i<30;i++)
		printf("■");
	gotoxy(0,29);
	for(i=0;i<30;i++)
		printf("■");
	for(i=1;i<29;i++)
	{
		gotoxy(0,i);
		printf("■");
		gotoxy(58,i);
		printf("■");
	}
	gotoxy(63,15);
	printf("Hello %s,welcome to the play",name);
	gotoxy(63,20);
	printf("Your score is %d",score);
	gotoxy(63,25);
	printf("This play is created for fun");
	head=(snakes*)malloc(sizeof(snakes));
	tail=(snakes*)malloc(sizeof(snakes));
	snake *p=(snakes*)malloc(sizeof(snakes));
	snake *q=(snakes*)malloc(sizeof(snakes));
	head->x=16;
	head->y=15;
	p->x=16;
	p->y=16;
	q->x=16;
	q->y=17;
	gotoprint(head->x,head->y);
	gotoprint(p->x,p->y);
	gotoprint(q->x,q->y);
	head->next=p;
	p->next=q;
	q->next=tail;
	tail->next=NULL;
	tail->x=4;
	tail->y=2;
}
void createfood()
{
	srand(time(NULL));
    point:
	food.x=rand()%54+2;
	food.y=rand()%28+1;
	if(food.x%2!=0)
		food.x+=1;
	snake *judge=head;
	while(1)
	{
		if(judge->next==NULL)
			break;
		if(judge->x==food.x&&judge->y==food.y)
		{
			goto point;
		}
		judge=judge->next;
	}
	gotoxy(food.x,food.y);
	printf("⊙");
}
void gotodelete(int x,int y)
{
	gotoxy(x,y);
	printf("  ");
}
void eating()
{
	if(head->x==food.x&&head->y==food.y)
	{
		createfood();
		snake *p=head;
		snake *_new=(snake*)malloc(sizeof(snake));
		while(1)
		{
			if(p->next->next==NULL)
				break;
			p=p->next;
		}
		p->next=_new;
		_new->next=tail;
		score+=10;
		gotoxy(77,20);
		printf("%d",score);
	}
}
void end()
{
	gotoxy(15,5);
	printf("/********************/");
	gotoxy(15,8);
	printf("Game over");
	gotoxy(15,11);
	printf("Your score is 15");
	gotoxy(15,14);
	printf("Try again");
	gotoxy(15,17);
	printf("/*******************/");
	system("pause");
}
int judge()
{
	if(head->x==1||head->x==58||head->y==0||head->y==29)
		return 0;
	snake *p=head->next;
	while(1)
	{
		if(p->next==NULL)
			break;
		if(head->x==p->x&&head->y==p->y)
		{
			end();
			return 0;
		}
		p=p->next;
	}
	return 1;
}
void changebody(int a,int b)
{
	snake *p=head->next;
	int a1,b1,a2,b2;
	a1=p->x;
	b1=p->y;
	while(1)
	{
		if(p->next->next==NULL)
			break;
		a2=p->next->x;
		b2=p->next->y;
		p->next->x=a1;
		p->next->y=b1;
		a1=a2;
		b1=b2;
		p=p->next;
	}
	p=head->next;
	p->x=a;
	p->y=b;
}
void movingbody()
{
	int count=0;
	int a=head->x,b=head->y;
	snake *p=head;
	while(1)
	{
		if(p->next==NULL)
			break;
		gotodelete(p->x,p->y);
		count++;
		p=p->next;
	}
	switch(click)
	{
	case up:
		{
			head->y-=1;
			changebody(a,b);
			break;
		}
	case down:
		{
			head->y+=1;
			changebody(a,b);
			break;
		}
	case left:
		{
			head->x-=2;
			changebody(a,b);
			break;
		}
	case right:
		{
			head->x+=2;
			changebody(a,b);
			break;
		}
	case stop:
		{
			getch();
			break;
		}
	}
	p=head;
	while(1)
	{
		if(p->next==NULL)
			break;
		gotoprint(p->x,p->y);
		p=p->next;
	}
	p=head;
	gotoxy(0,28);
	count=count/10;
	switch(count)
	{
	case 0:speed=150;break;
	case 1:speed=100;break;
	case 2:
	case 3:speed=50;break;
	default:speed=10;break;
	}
	Sleep(speed);
}
int clickcontrol()
{
	while(1)
	{
		if(judge()==0)
			return 0;
		if(kbhit())
			click=getch();
		movingbody();
		eating();
	}
	return 1;
}
int main()
{
	system("color C");
	welcome();
	wall();
	createfood();
	if(clickcontrol()==0)
		return 0;
	return 0;
}
	

