#include <stdio.h>
#define NBL  6
#define NBC  7

char tab[6][7];

void init(void){
  for(int l=0; l<NBL; l++)
    {
      for(int c=0; c<NBC; c++)
	{
	  tab[l][c] = '.' ;
	}
    }
}

void affiche(void){
  for(int l=0; l<NBL; l++)
    {
      for(int c=0; c<NBC; c++)
	{
	  printf("%c ",tab[l][c]);
	}
      printf("\n");
    }
}
int main(void){
  init();
  affiche();

  return 0;
}
