#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void przyslowki_na_pol()
{
    int punkt=0,proba=0;
    goto jeszczeraz;
    jeszczeraz:;
    int i,ile=0,wers,l,x,srednia=0;
    const int max_n= 50;
    char slowko[max_n],odpowiedz[max_n];
	FILE *f;
  	f=fopen("./pliki_tekstowe/przyslowkinapol.txt", "r");
	printf("Ile slowek chcesz zgadywac: ");
	scanf("%d",&ile);
    for (i=1; i<=ile; i++)
    {
	wers=1;
	srand(time(NULL));
     	l=rand()%300+1;
	if(l%2==0)
	{
		l=l-1;
	}
	while(wers<300)
	{
		fgets (slowko, max_n, f);
		if(wers==l)
		{	
			printf ("%s -- ",slowko);
			scanf("%s",odpowiedz);
			fgets (slowko, max_n, f);
			if(porownaniep(odpowiedz,slowko))
			{
				printf("BRAWO!\n");
				punkt++;
				proba++;
			}
			else
			{
				printf("niestety zle, poprawna odpowiedz: %s",slowko);
				proba++;
			}
		wers=300;
		rewind(f);
		}
		else
		{
		wers++;
		}
	}
    }
    srednia=((punkt*100)/proba);
    printf("\t\t\t\t\v\v*****************Menu******************\n");
    printf("\t\t\t\t*         Twoja skuteczność: %d%%      *\n",srednia);   
    printf("\t\t\t\t*Co chcesz zrobic ?                   *\n");
    printf("\t\t\t\t*Jeszcze raz ten sam tryb - nacisnij 1*\n");
    printf("\t\t\t\t*Menu - nacisnij 2                    *\n");
    printf("\t\t\t\t*Wyjdz z programu - nacisnij 3        *\n");
    printf("\t\t\t\t***************************************\n");
    scanf("%d",&x);
    switch(x)
    {
	case 1:
		goto jeszczeraz;
		break;

	case 2:
		menu();
		break;

	case 3:
		return ;
		break;
    }
}
	
	

void przyslowki_na_ang()
{
    int punkt=0,proba=0;
    goto jeszczeraz;
    jeszczeraz:;
    int i,ile=0,wers,l,x,srednia=0;
    const int max_n= 50;
    char slowko[max_n],odpowiedz[max_n];
	FILE *f;
  	f=fopen("./pliki_tekstowe/przyslowkinaang.txt", "r");
	printf("Ile slowek chcesz zgadywac: ");
	scanf("%d",&ile);
    for (i=1; i<=ile; i++)
    {
	wers=1;
	srand(time(NULL));
     	l=rand()%300+1;
	if(l%2==0)
	{
		l=l-1;
	}
	while(wers<300)
	{
		fgets (slowko, max_n, f);
		if(wers==l)
		{	
			printf ("%s -- ",slowko);
			scanf("%s",odpowiedz);
			fgets (slowko, max_n, f);
			if(porownaniea(odpowiedz,slowko))
			{
				printf("BRAWO!\n");
				punkt++;
				proba++;
			}
			else
			{
				printf("niestety zle, poprawna odpowiedz: %s",slowko);
				proba++;
			}
		wers=300;
		rewind(f);
		}
		else
		{
		wers++;
		}
	}
    }
    srednia=((punkt*100)/proba);
    printf("\t\t\t\t\v\v*****************Menu******************\n");
    printf("\t\t\t\t*         Twoja skuteczność: %d%%      *\n",srednia);   
    printf("\t\t\t\t*Co chcesz zrobic ?                   *\n");
    printf("\t\t\t\t*Jeszcze raz ten sam tryb - nacisnij 1*\n");
    printf("\t\t\t\t*Menu - nacisnij 2                    *\n");
    printf("\t\t\t\t*Wyjdz z programu - nacisnij 3        *\n");
    printf("\t\t\t\t***************************************\n");
    scanf("%d",&x);
    switch(x)
    {
	case 1:
		goto jeszczeraz;
		break;

	case 2:
		menu();
		break;

	case 3:
		return ;
		break;
    }
}
