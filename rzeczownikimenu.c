#include <stdio.h>
#include <stdlib.h>
#include "rzeczowniki.h"
#include "menu.h"

void rzeczownikimenu()
{
      int x;
      printf("\t\t\t\t\v\v*************************Menu**************************\n");
      printf("\t\t\t\t*Wybrales rzeczowniki                                 *\n");
      printf("\t\t\t\t*Aby tlumaczyc slowka na jezyk polski - nacisnij 1    *\n");
      printf("\t\t\t\t*Aby tlumaczyc slowka na jezyk angielski - nacisnij 2 *\n");
      printf("\t\t\t\t*Cofnij - nacisnij 3                                  *\n");
      printf("\t\t\t\t*******************************************************\n");
      printf("\t\t\t\t  Podaj numer: ");
      scanf("%d", &x);
      switch(x)
	{
	case 1:
	  rzeczowniki_na_pol();
	  break;

	case 2:
	  rzeczowniki_na_ang();
	  break;

	case 3:
	  menu();
	  break;

	default:
	  printf("Zle wybrales! Wybierz jeszcze raz!\n");
	}
}

