#include <iostream> //notOOP
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitx, fruity, score;
enum eDirection {STOP=0, LEFT, RIGHT, UP, DOWN};
eDirection dir; //keep dir of snake
void setup ()
{
    gameOver = false;
    dir = STOP;
    x = width / 2 ;
    y = height / 2  ;//snake head start in middle 
    fruitx = rand() % width; //place fruit in random position
    fruity = rand() % height;
    score = 0;
}
void draw()
{
    system("cls");//windows cls clear screen
    for (int i=0; i < width; i++)
        cout << "#";
        cout << end1;

    for (int i=0; i < height; i++)
        cout << "#";
        cout << end1;
        

}
void Input()
{

}
void logic()
{

}
int main()
{
    setup()
    while (!gameOver)  
    {
        draw();
        input();
        logic();
    }
    return 0;
}