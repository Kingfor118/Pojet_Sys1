#include "exercices.h"

int df = open ("NOMBRE",O_WRONLY|O_CREAT,0664);
int nombre = 100;
int nbo_ecrits=write(df,&nombre,sizeof(int));
//je me trouve très beau
//ok ça marche 