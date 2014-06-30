#include <stdio.h>
#include "2048.h"

//Main
int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

int y,x;
for (y=1;y<length; y++){
	for (x=1; x<length; x++){
		if (line[x-1] == 0){
			line [x-1] = line [x];
			line [x] = 0;
		}
	}
}
	for (x=1; x<length; x++){
		if (line[x-1] == line [x]){
			line [x-1] = 2*line [x];
			line [x] = 0;
		}
	}
for (y=1;y<length; y++){
	for (x=1; x<length; x++){
		if (line[x-1] == 0){
			line [x-1] = line [x];
			line [x] = 0;
		}
	}
}
  return 0;
}

int tilt_line_right(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

int y,x;
for (y=length-2;y>=0; y--){
	for (x=length-2; x>=0; x--){
		if (line[x+1] == 0){
			line [x+1] = line [x];
			line [x] = 0;
		}
	}
}
for (x=length-2; x>=0; x--){
	if (line[x+1] == line [x]){
		line [x+1] = 2*line [x];
		line [x] = 0;
	}
}
for (y=length-2;y>=0; y--){
	for (x=length-2; x>=0; x--){
		if (line[x+1] == 0){
			line [x+1] = line [x];
			line [x] = 0;
		}
	}
}
  return 0;
}

int board_rotate_right(int size, int **board){
// make sure board size is sensible
printf("not a loop\n");
fflush(stdout);
  if (size<1||size>255) return -1;
	int x=0;
	int y=0;
    int temp=0;
//for 2*2 tests
	printf("%d,%d\n%d,%d\n",board[0][0], board[0][1],board[1][0],board[1][1]); 
	for(x=0;x<size/2;x++){
		printf("outest loop\n");
		fflush(stdout);
		for(y=0;y<size-x-1;y++){
			printf("innest loop\n");
			printf("x=%d, y=%d, size = %d \n", x,y,size);
			fflush(stdout);
			temp = board[x+y][x+y];
			printf("%d,%d\n%d,%d\n",board[0][0], board[0][1],board[1][0],board[1][1]); 
			fflush(stdout);
			printf("x=%d, y=%d, size = %d \n", x,y,size);
			fflush(stdout);
			board[x+y][x+y]= board[size-(x+y)-1][x+y];
			printf("x=%d, y=%d, size = %d \n", x,y,size);
			printf("%d,%d\n%d,%d\n",board[0][0], board[0][1],board[1][0],board[1][1]); 
			fflush(stdout);
			board[size-(x+y)-1][x+y] = board[size-(x+y)-1][size-(x+y)-1];
			printf("x=%d, y=%d, size = %d \n", x,y,size);
			printf("%d,%d\n%d,%d\n",board[0][0], board[0][1],board[1][0],board[1][1]); 
			fflush(stdout);
			board[size-(x+y)-1][size-(x+y)-1] = board[x+y][size-(x+y)-1];
			printf("x=%d, y=%d, size = %d \n", x,y,size);
			printf("%d,%d\n%d,%d\n",board[0][0], board[0][1],board[1][0],board[1][1]); 
			fflush(stdout);
			board[x+y][size-(x+y)-1] = temp;
			printf("x=%d, y=%d, size = %d \n", x,y,size);
			printf("%d,%d\n%d,%d\n",board[0][0], board[0][1],board[1][0],board[1][1]); 
			fflush(stdout);
}
}		
return 0;
}

