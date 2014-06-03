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

int tilt_board_right(int size, int **board){
// make sure board size is sensible
  if (length<1||length>255) return -1;
	int x=0;
	int y=0;
	for(x;x< size/2;x++){
		for(y;y<size/2;y++)
	int temp = board[x+y][x+y];
	board[x+y][x+y]= board[size-(x+y)][x+y];
	board[size-(x+y)][x+y] = board[size-(x+y)][size-(x+y)];
	board[size-(x+y)][size-(x+y)] = board[x+y][size-(x+y)];
	board[x+y][size-(x+y)] = temp;
}
}		
return 0;
}

