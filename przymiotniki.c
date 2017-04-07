#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void przymiotniki_na_pol()
{
	int punkt=0,proba=0;
	goto jeszczeraz;
	jeszczeraz: ;
	int i,ile=0,wers,l,x,srednia=0,linie=1;
	const int max_n= 50;
	char slowko[max_n],odpowiedz[max_n],znak;
	FILE *f;
  	f=fopen("./pliki_tekstowe/przymiotnikinapol.txt", "r");
	while((znak=getc(f)) !=EOF)
	{
		if(znak=='\n')
		linie++;
	}
	rewind(f);
	printf("Ile slowek chcesz zgadywac: ");
	scanf("%d",&ile);
	for (i=1; i<=ile; i++)
	{
		wers=1;
		srand(time(NULL));
     		l=rand()%linie+1;
		if(l%2==0)
		{
			l=l-1;
		}
		while(wers<linie)
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
				wers=linie;
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
	printf("\t\t\t\t*1.Jeszcze raz ten sam tryb           *\n");
	printf("\t\t\t\t*2.Menu                               *\n");
	printf("\t\t\t\t*3.Wyjdz z programu                   *\n");
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
	
	
	
void przymiotniki_na_ang()
{
	int punkt=0,proba=0;
	goto jeszczeraz;
	jeszczeraz: ;
	int i,ile=0,wers,l,x,srednia=0,linie=1;
	const int max_n= 50;
	char slowko[max_n],odpowiedz[max_n],znak;
	FILE *f;
  	f=fopen("./pliki_tekstowe/przymiotnikinaang.txt", "r");
	while((znak=getc(f)) !=EOF)
	{
		if(znak=='\n')
		linie++;
	}
	rewind(f);
	printf("Ile slowek chcesz zgadywac: ");
	scanf("%d",&ile);
	for (i=1; i<=ile; i++)
	{
		wers=1;
		srand(time(NULL));
     		l=rand()%linie+1;
		if(l%2==0)
		{
			l=l-1;
		}
		while(wers<linie)
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
				wers=linie;
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
	printf("\t\t\t\t*1.Jeszcze raz ten sam tryb           *\n");
	printf("\t\t\t\t*2.Menu                               *\n");
	printf("\t\t\t\t*3.Wyjdz z programu                   *\n");
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
