#include <stdio.h>
#include "2048.h"

 // slide tiles to the left
int slide (int length, int *line,int x)
{
int y;
for (y=1;y<length; y++){
	for (; x<length; x++){
		if (line[x-1] == 0){
			line [x-1] = line [x];
			line [x] = 0;
		}
	}
}
return 0;
}

 // combine tiles as required
int combine (int length, int *line)
{
int x,y;
for (y=1;y<length; y++){
	for (x=1; x<length; x++){
		if (line[x-1] == line [x]){
			line [x-1] = 2*line [x];
			line [x] = 0;
			slide(length, line, x);
		}
	}
}
return 0;
}

//Main
int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

slide(length, line,1);
combine (length, line);
  return 0;
}


