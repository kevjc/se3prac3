#include <stdio.h>
#include "2048.h"

int line_vector_test(int i1,int i2,int i3,int i4,char *msg,
                int o1,int o2,int o3,int o4, int (*func)(int,int *))
{
  int list[4]={i1,i2,i3,i4};
  if (msg) printf("%s - ",msg); 
  else {
    printf("Tilting {%d,%d,%d,%d} left yields {%d,%d,%d,%d} - ",
             i1,i2,i3,i4,o1,o2,o3,o4);
  }
  fflush(stdout);
  func(4,list);
  if ((list[0]!=o1)||(list[1]!=o2)||(list[2]!=o3)||(list[3]!=o4))
    {
      printf("FAILED: {%d,%d,%d,%d} became {%d,%d,%d,%d} instead of"
             " {%d,%d,%d,%d}\n",
             i1,i2,i3,i4,list[0],list[1],list[2],list[3],
             o1,o2,o3,o4);
      return -1;
    } 
  printf("PASSED.\n");
  return 0;
  
}

int board_vector_test(int i1,int i2,int i3,int i4,char *msg,
                      int o1,int o2,int o3,int o4, int (*func)(int,int **))
{
  int **board=alloca(2*sizeof(int*));
  board[0]=alloca(sizeof(int)*2);
  board[1]=alloca(sizeof(int)*2);
  board[0][0]=i1; board[0][1]=i2; board[1][0]=i3; board[1][1]=i4;

  if (msg) printf("%s - ",msg); 
  else {
    printf("Board operation on {{%d,%d},{%d,%d}} yields {{%d,%d},{%d,%d}} - ",
             i1,i2,i3,i4,o1,o2,o3,o4);
  }
  fflush(stdout);
  func(2,board);
  if ((board[0][0]!=o1)||(board[0][1]!=o2)
      ||(board[1][0]!=o3)||(board[1][1]!=o4))
    {
      printf("FAILED: {{%d,%d},{%d,%d}} became {{%d,%d},{%d,%d}} instead of"
             " {{%d,%d},{%d,%d}}\n",
             i1,i2,i3,i4,
             board[0][0],board[0][1],board[1][0],board[1][1],
             o1,o2,o3,o4);
      return -1;
    } 
  printf("PASSED.\n");
  return 0;
}

int board3_vector_test(int i1,int i2,int i3,int i4,int i5,
                       int i6,int i7,int i8,int i9,char *msg,
                       int o1,int o2,int o3,int o4,int o5,
                       int o6,int o7,int o8,int o9,
                       int (*func)(int,int **))
{
  int **board=alloca(3*sizeof(int*));
  board[0]=alloca(sizeof(int)*3);
  board[1]=alloca(sizeof(int)*3);
  board[2]=alloca(sizeof(int)*3);
  board[0][0]=i1; board[0][1]=i2; board[0][2]=i3;
  board[1][0]=i4; board[1][1]=i5; board[1][2]=i6;
  board[2][0]=i7; board[2][1]=i8; board[2][2]=i9;

  if (msg) printf("%s - ",msg); 
  else {
    printf("Board operation on {{%d,%d,%d},...} yields {{%d,%d,%d}...} - ",
             i1,i2,i3,o1,o2,o3);
  }
  fflush(stdout);
  func(3,board);
  if (
      (board[0][0]!=o1)||(board[0][1]!=o2)||(board[0][2]!=o3)||
      (board[1][0]!=o4)||(board[1][1]!=o5)||(board[1][2]!=o6)||
      (board[2][0]!=o7)||(board[2][1]!=o8)||(board[2][2]!=o9)
      )
    {
     printf("FAILED: {{%d,%d,%d},{%d,%d,%d},{%d,%d,%d}} became {{%d,%d,%d},{%d,%d,%d},{%d,%d,%d}} instead of"
             " {{%d,%d,%d},{%d,%d,%d},{%d,%d,%d}}\n",
             i1,i2,i3,i4,i5,i6,i7,i8,i9,
             board[0][0],board[0][1],board[0][2],
             board[1][0],board[1][1],board[1][2],
             board[2][0],board[2][1],board[2][2],
             o1,o2,o3,o4,o5,o6,o7,o8,o9);
      return -1;
    } 
  printf("PASSED.\n");
  return 0;
}

int board4_vector_test(int i1,int i2,int i3,int i4,
					   int i5,int i6,int i7,int i8,
					   int i9,int i10, int i11, int i12, 
					   int i13, int i14, int i15, int i16, char *msg,
                       int o1,int o2,int o3,int o4,
					   int o5,int o6,int o7,int o8,
					   int o9,int o10,int o11,int o12, 
					   int o13, int o14, int o15, int o16,
                       int (*func)(int,int **))
{
  int **board=alloca(4*sizeof(int*));
  board[0]=alloca(sizeof(int)*4);
  board[1]=alloca(sizeof(int)*4);
  board[2]=alloca(sizeof(int)*4);
  board[3]=alloca(sizeof(int)*4);
  board[0][0]=i1; board[0][1]=i2; board[0][2]=i3; board[0][3]=i4; 
  board[1][0]=i5; board[1][1]=i6; board[1][2]=i7; board[1][3]=i8;
  board[2][0]=i9; board[2][1]=i10; board[2][2]=i11; board[2][3]=i12;
  board[3][0]=i13;board[3][1]=i14; board[3][2]=i15; board[3][3]=i16; 


  if (msg) printf("%s - ",msg); 
  else {
    printf("Board operation on {{%d,%d,%d,%d},...} yields {{%d,%d,%d,%d}...} - ",
             i1,i2,i3,i4,o1,o2,o3,o4);
  }
  fflush(stdout);
  func(4,board);
  if (
      (board[0][0]!=o1)||(board[0][1]!=o2)||(board[0][2]!=o3)||(board[0][3])!=o4||
      (board[1][0]!=o5)||(board[1][1]!=o6)||(board[1][2]!=o7)||(board[1][3]!=o8)||
      (board[2][0]!=o9)||(board[2][1]!=o10)||(board[2][2]!=o11)||(board[2][3]!=o12)||
	  (board[3][0]!=o13)||(board[3][1]!=o14)||(board[3][2]!=o15)||(board[3][3]!=o16)      
      )
    {
     printf("FAILED: {{%d,%d,%d,%d},{%d,%d,%d,%d},{%d,%d,%d,%d},{%d,%d,%d,%d}} became {{%d,%d,%d,%d},{%d,%d,%d,%d},{%d,%d,%d,%d},{%d,%d,%d,%d}} instead of"
             " {{%d,%d,%d,%d},{%d,%d,%d,%d},{%d,%d,%d,%d},{%d,%d,%d,%d}}\n",
             i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,
             board[0][0],board[0][1],board[0][2],board[0][3],
             board[1][0],board[1][1],board[1][2],board[1][3],
             board[2][0],board[2][1],board[2][2],board[2][3],
			 board[3][0],board[3][1],board[3][2],board[3][3],
             o1,o2,o3,o4,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
      return -1;
    } 
  printf("PASSED.\n");
  return 0;
}

int ttl_vector(int i1,int i2,int i3,int i4,char *msg,
               int o1,int o2,int o3,int o4)
{
  return line_vector_test(i1,i2,i3,i4,msg,o1,o2,o3,o4,tilt_line_left);
}

int ttr_vector(int i1,int i2,int i3,int i4,char *msg,
               int o1,int o2,int o3,int o4)
{
  return line_vector_test(i1,i2,i3,i4,msg,o1,o2,o3,o4,tilt_line_right);
}

int test_tilt_left()
{
  int e=0;
  e|=ttl_vector(0,0,0,0,"(L)Empty list is empty after shift",0,0,0,0);
  e|=ttl_vector(1,0,0,0,"(L)Value on left stays on left after shift",1,0,0,0);
  e|=ttl_vector(0,0,0,1,"(L)Value on right shifts to left edge after shift",1,0,0,0);
  e|=ttl_vector(0,0,1,0,"(L)Value in middle shifts to left edge after shift",1,0,0,0);
  e|=ttl_vector(1,2,4,8,"(L)Distinct values don't combine",1,2,4,8);
  e|=ttl_vector(1,1,1,1,"(L)Combinations don't cascade",2,2,0,0);
  e|=ttl_vector(1,1,1,0,"(L)Cominations do occur from left when tilting from left.",2,1,0,0);
  e|=ttl_vector(0,0,1,1,"(L)Combinations occur on shift",2,0,0,0);
  e|=ttl_vector(4,0,1,1,"(L)Combinations occur on partial shift",4,2,0,0);
  e|=ttl_vector(2,0,1,1,"(L)Single combination does not cascade",2,2,0,0);
  return e;
}

int test_tilt_right()
{
  int e=0;
  e|=ttr_vector(0,0,0,0,"(R)Empty list is empty after shift",0,0,0,0);
  e|=ttr_vector(0,0,0,1,"(R)Value on right stays on right after shift",0,0,0,1);
  e|=ttr_vector(1,0,0,0,"(R)Value on left shifts to right edge after shift",0,0,0,1);
  e|=ttr_vector(0,0,1,0,"(R)Value in middle shifts to right edge after shift",0,0,0,1);
  e|=ttr_vector(1,2,4,8,"(R)Distinct values don't combine",1,2,4,8);
  e|=ttr_vector(1,1,1,1,"(R)Combinations don't cascade",0,0,2,2);
  e|=ttr_vector(1,1,1,0,"(R)Cominations do occur from left when tilting from left.",0,0,1,2);
  e|=ttr_vector(0,0,1,1,"(R)Combinations occur on shift",0,0,0,2);
  e|=ttr_vector(1,1,0,4,"(R)Combinations occur on partial shift",0,0,2,4);
  e|=ttr_vector(2,0,1,1,"(R)Single combination does not cascade",0,0,2,2);
  return e;
}

int test_board_rotations()
{
  int e=0;
  e|=board_vector_test(1,0,0,0,"(2*2)Rotate Single Value",0,1,0,0,board_rotate_right);
  e|=board_vector_test(1,2,3,4,"(2*2)Rotate 4 unique values",3,1,4,2,board_rotate_right);
  e|=board3_vector_test(1,0,0,
						0,0,0,
						0,0,0,"(3*3)Rotate Single Value",0,0,1,
														 0,0,0,
														 0,0,0,board_rotate_right);
  e|=board3_vector_test(1,2,3,
						4,5,6,
						7,8,9,"(3*3)Rotate 9 distinct values",7,4,1,
															  8,5,2,
															  9,6,3,board_rotate_right);
  e|=board4_vector_test(1,0,0,0,
						0,0,0,0,
						0,0,0,0,
						0,0,0,0,"(4*4)Rotate Single Value",0,0,0,1,
														   0,0,0,0,
														   0,0,0,0,
														   0,0,0,0,board_rotate_right);
  e|=board4_vector_test(1,2,3,4,
						5,6,7,8,
						9,10,11,12,
						13,14,15,16,"(4*4)Rotate 16 distinct values",13,9,5,1,
														   		 	 14,10,6,2,
														  			 15,11,7,3,
														   			 16,12,8,4,board_rotate_right);
  e|=board4_vector_test(13,9,5,1,
						14,10,6,2,
           			 	15,11,7,3,
						16,12,8,4,"(4*4)Rotate 16 distinct values left",1,2,3,4,
																  		5,6,7,8,
																  	    9,10,11,12,
																   		13,14,15,16,board_rotate_left);
  e|=board4_vector_test(0,0,0,0,
						0,0,0,0,
						0,0,0,0,
						1,1,1,1,"(4*4)Tilt up Single Value",1,1,1,1,
														   	0,0,0,0,
														   	0,0,0,0,
														   	0,0,0,0,tilt_board_up);
 e|=board4_vector_test(0,0,0,0,
						0,0,1,2,
						1,1,0,0,
						1,1,1,1,"(4*4)Tilt up Double Value",2,2,2,2,
														   	0,0,0,1,
														   	0,0,0,0,
														   	0,0,0,0,tilt_board_up);
  e|=board4_vector_test(1,1,1,1,
						0,0,0,0,
						0,0,0,0,
						0,0,0,0,"(4*4)Tilt down Single Value",0,0,0,0,
														   	0,0,0,0,
														   	0,0,0,0,
														   	1,1,1,1,tilt_board_down);
 e|=board4_vector_test( 1,1,1,1,
						0,0,1,2,
						1,1,0,0,
						1,1,1,1,"(4*4)Tilt down Double Value",0,0,0,0,
														   	0,0,0,1,
														   	1,1,1,2,
														   	2,2,2,1,tilt_board_down);
 e|=board4_vector_test( 1,0,0,0,
						1,0,0,0,
						1,0,0,0,
						1,0,0,0,"(4*4)Tilt right Single Value",0,0,0,1,
														 	   0,0,0,1,
														   	   0,0,0,1,
														   	   0,0,0,1,tilt_board_right);
 e|=board4_vector_test( 1,1,0,0,
						1,0,0,2,
						1,1,0,0,
						1,0,0,1,"(4*4)Tilt right Double Value",0,0,0,2,
														   	0,0,1,2,
														   	0,0,0,2,
														   	0,0,0,2,tilt_board_right);
 e|=board4_vector_test( 1,0,0,0,
						1,0,0,0,
						1,0,0,0,
						1,0,0,0,"(4*4)Tilt left Single Value",1,0,0,0,
														 	   1,0,0,0,
														   	   1,0,0,0,
														   	   1,0,0,0,tilt_board_left);
 e|=board4_vector_test( 1,0,0,1,
						0,1,1,0,
						0,1,0,1,
						0,0,1,2,"(4*4)Tilt left Double Value",2,0,0,0,
														   	2,0,0,0,
														   	2,0,0,0,
														   	1,2,0,0,tilt_board_left);

return e;
}

int wb256(){
printf("\nin wb256 \n");
fflush(stdout);
int e=0;
e+=tilt_line_left(256,NULL);
e+=tilt_line_right(256,NULL);
e+=board_rotate_right(256,NULL);
e+=board_rotate_left(256,NULL);
e+=tilt_board_up(256,NULL);
e+=tilt_board_down(256,NULL);
e+=tilt_board_left(256,NULL);
e+=tilt_board_right(256,NULL);
if(e == (0-8)) {
printf("upper boundary 256 test: PASS\n");
}else{
printf("upper boundary 256 test: FAIL: %d \n",e);
}
fflush(stdout);
return 0;
}

int wb255(){
printf("\nin wb255 \n");
fflush(stdout);
int e=0;
e+=tilt_line_left(255,NULL);
e+=tilt_line_right(255,NULL);
e+=board_rotate_right(255,NULL);
e+=board_rotate_left(255,NULL);
e+=tilt_board_up(255,NULL);
e+=tilt_board_down(255,NULL);
e+=tilt_board_left(255,NULL);
e+=tilt_board_right(255,NULL);
if(e == (0)) {
printf("upper boundary 255 test: PASS\n");
}else{
printf("upper boundary 255 test: FAIL: %d \n",e);
}
fflush(stdout);
return 0;
}

int whitebox(){
fflush(stdout);
//The goal of this white box testing is to execute the if statement for all boundaries at the beginning of every titl or rotate function
wb256();
wb255();
return 0;
}

int main(int argc,char **argv)
{
  int e=0;
  e|=test_tilt_left();
  e|=test_tilt_right();
  e|=test_board_rotations();
  whitebox();
  return e;
}
