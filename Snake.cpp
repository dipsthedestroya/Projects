#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<fstream>
#include<string>
using namespace std;
bool gameOver;
const int width = 20;//the width of the map
const int height = 20;//height of the map 
int tailX[100], tailY[100];//position of tailX and tailY
int snake_size=0;
int highscore ;
int x, y,fruitX, fruitY, score;// x,y are the variables for the position of the snake body, similarly for the snake food and the score 
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };// used for controlling movement of the snake
eDirection dir;//holds direction of the snake
ofstream fileout;
ifstream filein;

void hidecursor()
{ HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);  
CONSOLE_CURSOR_INFO info;
info.dwSize = 100; 
info.bVisible = false; 
SetConsoleCursorInfo(consoleHandle, &info); 
}
void setup()
{
	filein.open("snake_highscore.txt");
	filein>> highscore;
	filein.close();
	gameOver = false;
	x = width / 2;//snake will be positioned at the centre of the screen 
	y = height / 2;//""
	fruitX = rand() % width;//randomly placed somewhere in the map with random value from 0 to width -1
	fruitY = rand() % height;
	score = 0;
	dir = STOP; //snake will not move until we start moving it

}
void Draw()//used to draw the map
{
	system("cls");
	bool print = true;
	for (int i = 0; i < width + 2; i++)// top wall
		cout << "-";
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			
			
			if (j == 0)
				cout << "|";
			if (x == j && y == i)
				cout << "O";
			else if (fruitX == j && fruitY == i)
				cout << "*";
			
			else
			{
				bool print = false;
				for (int k = 0; k < snake_size; k++)
				{
					
					if (tailX[k] == j && tailY[k] == i)
					{


							cout << "o";
							print = true;
						
					}



				}
			if(!print)
			cout << " ";
			
			}
			if (j == (width -1))
				cout << "|";
		}
		cout << endl;
	}
	for (int i = 0; i < width + 2; i++)
		cout << "-";
	cout << endl;

	cout << "Score :" << score;
	

	cout << "\nhighscore to beat " << highscore;
	
}
void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'd':
			dir = RIGHT;
			break;
		case 'a':
			dir = LEFT;
			break;
		case 'w':
			dir = UP;
			break;
		case's':
			dir = DOWN;
			break;
		case'x':
			gameOver = true;
			break;
		}
	}
}
void Logic()
{
	
		
		if(score>highscore)
		{
		cout << "\nNew highscore!\nBonus double round";

	}

	int prev_x = tailX[0];
	int prev_y = tailY[0];// store the previous coordinates of the tai


	int prev_2x, prev_2y; // temporary variable that stores the value of prev x and y

	tailX[0] = x; //the first element of tailX stores the x coordinate of the snake 
	tailY[0] = y; //the first element of tailY stores the y coordinate of the snake 

	for (int i = 1; i < snake_size; i++)
	{
		if (tailX[i] == x && tailY[i] == y)
		{
			if (score > highscore)
			{
				fileout.open("snake_highscore.txt");
				fileout << score;
				fileout.close();
			}
			gameOver = true;
			
		
		
		}
		prev_2x = tailX[i];
		prev_2y = tailY[i];
		tailX[i] = prev_x;
		tailY[i] = prev_y;
		prev_x = prev_2x;
		prev_y = prev_2y;
	}
	
	
	switch (dir)
	{
	case RIGHT:
		x++;
		break;
	case LEFT:
		x--;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
	if (x > width)
		x = 0; 
	else if(x<0)
		x = width; 
	if (y > height)
		y = 0;
	else if (y<0)
		y= width;
		//gameOver = true;
	
	
		if (x == fruitX && y == fruitY)
		{
			
			fruitX = rand() % width;
			fruitY = rand() % height;
			if (score > highscore)
			{
				score += 20;
				snake_size += 2;
		 }
			else {
				score += 10;
				snake_size += 1;
			}
		}



	}
	

int main()
{
	setup();
	hidecursor();
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
		Sleep(5);

	}
	return 0;
}