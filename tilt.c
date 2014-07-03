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
  if (size<1||size>255) return -1;
	int x=0;
	int y=0;
    int temp=0;
	for(x=0;x<size/2;x++){
		for(y=x;y<size-x-1;y++){
			temp = board[y][x];
			board[y][x]=board[size-x-1][y];
			board[size-x-1][y]=board[size-y-1][size-x-1];
			board[size-y-1][size-x-1]=board[x][size-y-1];
			board[x][size-y-1]=temp;
		}
	}		
return 0;
}

int board_rotate_left(int size, int **board){
int x;
	for (x=0; x<3;x++){
		board_rotate_right(size, board);
	}
return 0;
}

int tilt_board_up(int size, int **board){
	board_rotate_right(size, board);
	int x;
	for(x=0; x<size;x++){
		tilt_line_right(size, board[x]);
	}
return 0;
}

