#include <stdio.h>
#define NBL  6
#define NBC  7

<<<<<<< HEAD
int nbl=6, nbc=7;
int l, c;
for(l=0; l<nbl; l++) {
    for(c=0; c<nbc; c++) {
        tab[l][c] = '.' ;
    }
}
=======
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
            printf("%c",tab[l][c]);
        }
    }
}
int main(void){
    init();
    affiche();

    return 0;
}
>>>>>>> 0b10d802ba2337daefa8035c46db9e4d0016c7dc
