#include<stdio.h>
#include<stdlib.h>
 char*  trim_all(char* p)
{
 char* t=NULL;
 int i=0,j=0;
 t=malloc(sizeof(char*)*100);
 while(p[j]!= '\0')
 {
 	if(p[j]==' '|| p[j]=='\t'||p[j]=='\n'||p[j]=='\r')
	{
		j++;
	}
	else if(p[j]=='\"')
	{
		t[i]=p[j];
		i++;j++;
		while(p[j]!='\"')
		{
			t[i]=p[j];
			i++;j++;
		}
		t[i]=p[j];
		i++;j++;
	}
	else
	{
		t[i]=p[j];
		i++;j++;
		
	}
 }
 free(t);
 return t;
}
