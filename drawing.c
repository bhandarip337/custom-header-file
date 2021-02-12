#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "drawing.h"

void clrscr()
{
    system("cls");	
}
void textcolor (int color)
{
    __FOREGROUND = color;
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),color + (__BACKGROUND << 4));
}

void gotoxy(short x, short y)                                      
{
    COORD pos ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void verline_single(int x,int y1,int y2)
{
	int i;
	for(i=y1;i<=y2;i++)
	{
		gotoxy(x,i);printf("\xB3");
	}
	
}
void horline_single(int y,int x1,int x2)
{
	int i;
	for(i=x1;i<=x2;i++)
	{
		gotoxy(i,y);printf("\xC4");
	}
}
void verline_double(int x,int y1,int y2)
{
	int i;
	for(i=y1;i<=y2;i++)
	{
		gotoxy(x,i);printf("\xBA");
	}	
}
void horline_double(int y,int x1,int x2)
{
	int i;
	for(i=x1;i<=x2;i++)
	{
		gotoxy(i,y);printf("\xCD");
	}
}
void box_single_line(int x,int y,int l,int w)
{
	int h,i,j,k;
	gotoxy(x,y);printf("\xDA");
	gotoxy(l+x,y);printf("\xBF");
	gotoxy(l+x,w+y);printf("\xD9");
	gotoxy(x,y+w);printf("\xC0");
	for(h=x+1;h<l+x;h++)
	{
		gotoxy(h,y);printf("\xC4");
	}
	for(i=y+1;i<w+y;i++)
	{
		gotoxy(l+x,i);printf("\xB3");
	}
	for(j=x+1;j<l+x;j++)
	{
		gotoxy(j,y+w);printf("\xC4");
	}
	for(k=y+1;k<w+y;k++)
	{
		gotoxy(x,k);printf("\xB3");
	}	
	
}
void box_double_line(int x,int y,int l,int w)
{
	int h,i,j,k;
	gotoxy(x,y);printf("\xC9");
	gotoxy(l+x,y);printf("\xBB");
	gotoxy(l+x,w+y);printf("\xBC");
	gotoxy(x,y+w);printf("\xC8");
	for(h=x+1;h<l+x;h++)
	{
		gotoxy(h,y);printf("\xCD");
	}
	for(i=y+1;i<w+y;i++)
	{
		gotoxy(l+x,i);printf("\xBA");
	}
	for(j=x+1;j<l+x;j++)
	{
		gotoxy(j,y+w);printf("\xCD");
	}
	for(k=y+1;k<w+y;k++)
	{
		gotoxy(x,k);printf("\xBA");
	}	
}