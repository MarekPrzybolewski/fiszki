#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int porownaniep( char odpowiedz[50], char slowko[50])
{
	int dlugosc_slowka,dlugosc_odpowiedzi,i,bad=0;
	dlugosc_slowka=strlen(slowko)-1;
	dlugosc_odpowiedzi=strlen(odpowiedz);
	if(dlugosc_slowka!=dlugosc_odpowiedzi)
	{
		printf("blad dlugosci");
		return 0;
	}
	for(i=0;i<dlugosc_slowka;i++)
	{
		printf("%c",slowko[i]);
		if(odpowiedz[i]!=slowko[i])
			{
				bad++;
			}
		if(bad>0)
		{
			return 0 ;
		}
	}
	return 1;
}

int porownaniea( char odpowiedz[50], char slowko[50])
{
	int dlugosc_slowka,dlugosc_odpowiedzi,i,bad=0;
	dlugosc_slowka=strlen(slowko)-2;
	dlugosc_odpowiedzi=strlen(odpowiedz);
	if(dlugosc_slowka!=dlugosc_odpowiedzi)
	{
		printf("blad dlugosci");
		return 0;
	}
	for(i=0;i<dlugosc_slowka;i++)
	{
		printf("%c",slowko[i]);
		if(odpowiedz[i]!=slowko[i])
			{
				bad++;
			}
		if(bad>0)
		{
			return 0 ;
		}
	}
	return 1;
}