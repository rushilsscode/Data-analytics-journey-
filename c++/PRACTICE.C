#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define HEIGHT 20
#define WIDTH 40
#define BIRD_POS 10
#define PIPE_GAP 5
#define GRAVITY 1
int score = 0;
int birdPos = BIRD_POS;
int pipePos = WIDTH;
void drawBird() {
for (int i = 0; i < HEIGHT; i++) {
for (int j = 0; j < WIDTH; j++) {
if (j == BIRD_POS && i == birdPos)
printf("B");
else
printf(" ");
}
printf("\n");
}
}
void drawPipe() {
for (int i = 0; i < HEIGHT; i++) {
for (int j = 0; j < WIDTH; j++) {
if (j == pipePos || j == pipePos + 1 || j == pipePos + 2 ||
j == pipePos + 3 || j == pipePos + 4 || j == pipePos + 5 ||
j == pipePos + 6 || j == pipePos + 7 || j == pipePos + 8)
printf("|");
else
printf(" ");
}
printf("\n");
}
}
void updateBird() {
if (kbhit()) {
char key = getch();
if (key == ' ')
birdPos -= 2;
}
birdPos += GRAVITY;
}
void updatePipe() {
pipePos--;
if (pipePos < -10) {
pipePos = WIDTH;
score++;
}
}
int checkCollision() {
if (pipePos == BIRD_POS && (birdPos < 2 || birdPos >= HEIGHT - 1))
return 1;
return 0;
}
int main() {
int gameover = 0;
while (!gameover) {
system("cls");
drawBird();
drawPipe();
printf("Score: %d\n", score);
updateBird();
updatePipe();
gameover = checkCollision();
Sleep(50); // Adjust this value to control game speed
}
printf("Game Over!\n");
printf("Final Score: %d\n", score);
return 0;
}