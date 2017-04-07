#include <stdio.h>
#include <stdlib.h>
#include "rzeczownikimenu.h"
#include "czasownikimenu.h"
#include "przymiotnikimenu.h"
#include "przyslowkimenu.h"


menu()
{

 	int x;
	system("clear");
  	printf("\t\t\t\t\v\v**************Menu**************\n");
  	printf("\t\t\t\t*  Czego chcesz sie nauczyc ?  *\n");
  	printf("\t\t\t\t* 1.Rzeczowniki                *\n");
 	printf("\t\t\t\t* 2.Czasowniki                 *\n");
  	printf("\t\t\t\t* 3.Przymiotniki               *\n");
  	printf("\t\t\t\t* 4.Przyslowki                 *\n");
  	printf("\t\t\t\t* 5.Wyjdz                      *\n");
  	printf("\t\t\t\t********************************\n");
  	printf("\t\t\t\t  Podaj numer: ");
  	scanf("%d", &x);
  	system("clear");
  	switch(x)
    	{
    	case 1:
      		rzeczownikimenu();
      		break;

    	case 2:
      		czasownikimenu();
      		break;  

    	case 3:
      		przymiotnikimenu();  
		break;  

    	case 4:
      		przyslowkimenu();
      		break;  

    	case 5:
      		printf("Do Zobaczenia !");
      		return 0;
      	break;

    	default:
      		printf("Zle wybrales! Wybierz jeszcze raz!\n");

    	}
}

