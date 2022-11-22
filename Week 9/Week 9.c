#include<stdio.h>
#include<stdlib.h>
#include"magic_square.h"
#define MAX_FILE_NAME 100

int getnum(char filename[MAX_FILE_NAME])
{
  FILE *fp;
  fp = fopen(filename,"r");
  int ch_read;
  int count =0;
  while((ch_read = fgetc(fp))!= EOF)
    {
	  if (ch_read == '\n');
	  count++;
	}
	printf("Number of lines is counted\n");
	fclose(fp);
	return count;

}

int main(void)
   {
    FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter the file name please\n");
	scanf("%s", filename);


	//Get number of lines
	int n = getnum(filename);
	f = fopen(filename,"r");

	int i;
	int **mag = malloc(n*sizeof(int *));
	for(i =0;i<n;i++)
	  {
	   mag[i] = malloc(n*sizeof(int *));
	  }

	int j;
	for(i =0;i<n;i++)
	  {
	    for(j =0;i<n;i++)
		{
			fscanf(f, "%d", &mag[i][j]);
		}
	  }
	  int flag = isMagSq(mag,n);
	  if(flag == 1)
		{
		printf("This square is a magic!\n");
		}
	  else
	  {
	  printf("This square is not a magic!\n");
	  }
	  for (i=0;i<n;i++)
		{
		free(mag[i]);
		}
	  free(mag);
	  fclose(f);
	  return 0;
   }
