#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "ELTPRIM.H"


ELEMENT elementcreer ()
{ ELEMENT L ;
L=(ELEMENT)malloc(sizeof(ATOME));
return L ;
}

void elementdetruire (ELEMENT e)
{
free (e);
}
 void elementlire (ELEMENT *e)
{ char etat ;
printf("\n Donnez le numero de l'atome  ");
scanf("%i",&((*e)->num_at));
printf("\n Donnez le symbole de l'atome  ");
scanf("%s",&((*e)->symbole));
printf("\n Donnez la masse atomique de cet element ");
scanf("%f",&((*e)->masse_at ));
do{
printf(" \n Donnez l'etat de cet element = \n  S pour solide , \n  G pour gaz ,\n  L pour liquide ,\n  Y pour synthetique ");
scanf("%s",&((*e)->etat));
}while((strcmp((*e)->etat,"S")==1)&&(strcmp((*e)->etat,"G")==1)&&(strcmp((*e)->etat,"Y")==1)&&(strcmp((*e)->etat,"L")==1));
switch(etat)
{
    case'S':strcpy((*e)->etat,"solide");break;
    case'G':strcpy((*e)->etat,"gaz");break;
    case'L':strcpy((*e)->etat,"liquide");break;
    case'Y':strcpy((*e)->etat,"synthetique");break;
    default :printf("\n ecris les lettres en majuscule");break;
}
}


void elementafficher (ELEMENT e)
{
printf("\n %i",e->num_at);
printf("\n     %s ",e->symbole);
printf("\n   %.4f   ",e->masse_at) ;
printf("\n %s  ", e->etat);

}
void elementaffecter (ELEMENT *e1, ELEMENT e2)
{
*e1=e2;
}

void elementcopier (ELEMENT *e1 , ELEMENT e2 )
{
(*e1)->num_at= e2->num_at;
strcpy((*e1)->symbole ,e2->symbole) ;
(*e1)->masse_at = e2->masse_at ;
strcpy((*e1)->etat ,e2->etat);
}
int elementcomparer (ELEMENT e1, ELEMENT e2)
{ int x;
printf("\n si vous voulez comparer la masse atomique appuyez sur 1, si vous voulez comparer le numero de l'atome cliquez sur 2");
scanf("%i",&x);
switch(x)
{case 1 : return((e1->masse_at)-(e2->masse_at ));break;
case 2 : return((e1->num_at)-(e2->num_at));break;
default : printf("veuillez tapez 1 ou 2 ");}
}
