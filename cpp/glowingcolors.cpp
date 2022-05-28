// Glowing Colors.cpp : main project file.

//#include <stdafx.h>
#include <stdio.h>
//#include <conio.h>
#include <iostream>
#include <string>
//#include <windows.h>
using namespace std;
//using namespace System;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void setcursor(bool visible, DWORD size) // set bool visible = 0 - invisible, bool visible = 1 - visible
{
	if(size == 0)
	{
		size = 20;	// default cursor size
	}
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}


void gotoXY(int x, int y)
{
CursorPosition.X = x;
CursorPosition.Y = y;
SetConsoleCursorPosition(console,CursorPosition);
}

void gotoXY(int x, int y, string text)
{

CursorPosition.X = x;
CursorPosition.Y = y;
SetConsoleCursorPosition(console,CursorPosition);
cout << text;
}

string Shadow[5] = { "","\xB0","\xB1","\xB2"," " };
string  Style[5][12] = {
{""," "," "," "," "," "," "," "," "," "," "," " },
{"","\xDA","\xC4","\xBF","\xB3","\xD9","\xC0","\xC3","\xB4","\xC2","\xB3","\xC1"},
{"","\xC9","\xCD","\xBB","\xBA","\xBC","\xC8","\xCC","\xB9","\xCB","\xBA","\xCA"},
{"","\xD5","\xCD","\xB8","\xB3","\xBE","\xD4","\xC6","\xB9","\xD1","\xB3","\xCF"},
{"","\xD6","\xC4","\xB7","\xBA","\xBD","\xD3","\xC7","\xC6","\xD2","\xBA","\xD0"}
};


/*╔═════════════════════════════════════════════════════════════════════════════════╗
  ║		       What gets shown by the arrays in the calling of Box()        ║░
  ║                                                                                 ║░
  ║     Shadow[?] [0] = "", [1] = "░", [2] = "▒", [3] = "▓", [4] = "█"              ║░
  ║       Type[?] [1] = "┌ ─ ┐ │ ┘ └ ├ ┤ ┬ │ ┴"                                     ║░
  ║		  [2] = "╔ ═ ╗ ║ ╝ ╚ ╠ ╣ ╦ ║ ╩"                                     ║░
  ║	          [3] = "╒ ═ ╕ │ ╛ ╘ ╞ ╡ ╤ │ ╧"                                     ║░
  ║	          [4] = "╓ ─ ╖ ║ ╜ ╙ ╟ ╢ ╥ ║ ╨"                                     ║░
  ║                                                                                 ║░
  ╚═════════════════════════════════════════════════════════════════════════════════╝░
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
*/

void Box(int style, int across, int down, int amount, int rows, int color, int shadow, int shadow_color)
{
int x,y, go;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color );
for (x=rows; x>0; x--)
	{
	  for (y=amount; y>0 ;y--)
	  { gotoXY((across+y)-1,(down+x)-1);
	     {
	       if (y==1 && x==1)
	       {
		  cout << Style[style][1];
		  for (go=amount-2; go>0 ;go--)
			{
			  cout << Style[style][2];
			 }
		  cout << Style[style][3];
			}
	  else if ( (y>=1 && y<=amount-1) && x!=1 )
	        {
		  gotoXY((across+y),(down+x)-1);
		  cout << Style[style][4];
		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),shadow_color);
		   cout << Shadow[shadow];
		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color );
		  y--;
		for (go=amount-2; go>0 ;go--)
		  { gotoXY((across+y),(down+x)-1);
		     cout << " ";
		    y--;
		  }
		  gotoXY(across+y,(down+x)-1);
		  cout << Style[style][4];
		}
	  else if (y==amount && x==rows)
	      {
		  y--;
		  gotoXY(across+y,(down+x)-1);
		  cout << Style[style][5];
		 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),shadow_color);
			cout << Shadow[shadow];
			gotoXY(across+y,(down+x));
			cout <<  Shadow[shadow] << Shadow[shadow];
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color );
		  y--;
		  for (go=amount-2; go>0 ; go--)
		  {
		    gotoXY(across+y,(down+x)-1);
		    cout << Style[style][2];
		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),shadow_color);
		   gotoXY(across+y,(down+x));
		   cout << Shadow[shadow];
		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color );
		   y--;
		  }
		  gotoXY(across+y,(down+x)-1);
		  cout << Style[style][6];
	       }
	    }
	  }
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color );
}

void WaitKey()
{
while (_kbhit()) _getch(); // Empty the input buffer
_getch(); // Wait for a key
while (_kbhit()) _getch(); // Empty the input buffer (some keys sends two messages)
}

int main()
{
	int width = 57;
	int height = 30;

	int color[] = {19,22,24,23,31,23,24,22};
	string text = "Welcome to C++ Programming!!";
	int x,y;
	Console::SetWindowSize(width, height );
	Box(1,0,0,57,30,120,0,0);  // Gray background box
	for (x = 3;x<21;x++)
	{
		Box(2,5,5,47,x,192,1,128);  // Blue box
		Console::SetWindowSize(width, height );
		Sleep(100);
	}
	for (x = 3;x<33;x++)
	{
		Box(3,13,9,x,5,23,2,64);   // Red box for text
		Console::SetWindowSize(width, height );
		Sleep(100);
	}

	Console::SetWindowSize(width, height );

	for (y = 0;y<7;y++)
   {
	   for (x=0; x<=7;x++)
	   {
		   SetConsoleTextAttribute(console, color[x]);
		   gotoXY(15,11, text );
		   Sleep(130);
	   }
	   Sleep(80);
	}
	for (x=0; x<=4;x++)
	{
		SetConsoleTextAttribute(console, color[x]);
		gotoXY(15,11, text );
		Sleep(130);
	}
	setcursor(0,0);

	for (x = 3;x<35;x++)
	{
		Box(3,12,18,x,3,23,2,64);  // 2nd red box for 'Press any key... '
		Console::SetWindowSize(width, height );
		Sleep(100);
	}

	for (x=0; x<=4;x++)
	{
		SetConsoleTextAttribute(console, color[x]);
		gotoXY(13,19, "Press any key to continue..." );
		Sleep(130);
	}
	WaitKey();
	exit(0);
}
