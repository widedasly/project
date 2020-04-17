#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "ELTPRIM.H"
#include "ELTSDD.H"
#include "TABPRIM.H"
#include "LSTPRIM.H"
#include <math.h>

LISTE GAZ(ELEMENT_TAB E)
{LISTE L1=listecreer();

    NOEUD p;
    LISTE L=listecreer();
   int i,j,x=1;
   ELEMENT e1=elementcreer();

   for (i=1;i<=7;i++){
    for(j=1;j<=18;j++){
    if (!estvide(E->T[i][j])){
        for (p=E->T[i][j]->tete;p!=NULL;p=p->suivant){
            if (strcmp(p->info->etat,"gaz")==0){

                e1=recuperer(E->T[i][j],1);
                ELEMENT e=elementcreer();

                elementcopier(&e,e1);
                inserer(L,e,x);
                x++;

                }
        }
   }
}
L1=listecopier(L);
}return(L1);}
LISTE lourds (ELEMENT_TAB E)
{
    LISTE L1=listecreer();
    LISTE L=listecreer();
    int i,j;
    NOEUD q,n,p;
    for (i=1;i<=7;i++){
        for (j=1;j<=18;j++){
            if(!estvide(E->T[i][j])){
                for (p=E->T[i][j]->tete;p!=NULL;p=p->suivant){
                    if (p->info->num_at>104){
                     q=noeudcreer(p->info);
                     if(estvide(L1)){
                        L1->tete=q;
                        q->suivant=NULL;
                        n=q;
                        L1->lg++;
                     }
                     else
                        {n->suivant=q;
                         q->suivant=NULL;
                         n=q;
                         L1->lg++;

                     }
                    }
                }
            }
        }L=listecopier(L1);
}return(L);

}
LISTE radioactifs (ELEMENT_TAB E)
{
    LISTE L1=listecreer();
    LISTE L=listecreer();
    int i,j;
    NOEUD q,n,p;
    for (i=1;i<=7;i++){
    for (j=1;j<=18;j++){
        if(!estvide(E->T[i][j])){
            for (p=E->T[i][j]->tete;p!=NULL;p=p->suivant){
                if ((p->info->num_at>=84)&&((p->info->masse_at)-floor(p->info->masse_at)==0)){
                     q=noeudcreer(p->info);
                     if(estvide(L1)){
                        L1->tete=q;
                        q->suivant=NULL;
                        n=q;
                        L1->lg++;
                     }
                     else
                        {n->suivant=q;
                         q->suivant=NULL;
                         n=q;
                         L1->lg++;

                     }
                    }
                }
            }
        }L=listecopier(L1);
}return(L);
}
LISTE instable(ELEMENT_TAB E)
{
     LISTE L1=listecreer();
    LISTE L=listecreer();
    int i,j;
    NOEUD q,n,p;
    for (i=1;i<=7;i++){
        for (j=1;j<=18;j++){
            if(!estvide(E->T[i][j])){
                for (p=E->T[i][j]->tete;p!=NULL;p=p->suivant){
                    if (p->info->masse_at-floor(p->info->masse_at)==0){
                     q=noeudcreer(p->info);
                     if(estvide(L1)){
                        L1->tete=q;
                        q->suivant=NULL;
                        n=q;
                        L1->lg++;
                     }
                     else
                        {n->suivant=q;
                         q->suivant=NULL;
                         n=q;
                         L1->lg++;

                     }
                    }
                }
            }
        }L=listecopier(L1);
}return(L);
}
double Ar(ELEMENT_TAB E,char *s)
{
    int i,j;
    double x;
    NOEUD p;
    for (i=1;i<=7;i++){
        for (j=1;j<=18;j++){
            if (!estvide(E->T[i][j])){
                    p=E->T[i][j]->tete;
                while (p!=NULL){
                    if (strcmp(p->info->symbole,s)==0){
                        x=p->info->masse_at;
                        return (x);

                    }else {p=p->suivant;}
                }
            }
        }
    }
}
double M_C8H10N4O2(ELEMENT_TAB E)
{
float n=0,m=0,c,h,O;
  char t[5]="C";
  char t1[5]="H";
  char t2[5]="N";
  char t3[5]="O";
  n=Ar(E,&t)*8;
  h=Ar(E,&t1)*10;
  c=Ar(E,&t2)*4;
  O=Ar(E,&t3)*2;
  m=n+h+c+O;
    return (m);
}
double n_C8H10N4O2()
{ ELEMENT_TAB e=tabelementcreer();
tabelementlire(&e);

    double m,n;
    n=floor(M_C8H10N4O2(e));
    printf("%f",n);
    m=10/194;
    return (m);

}

void MENU()
{ int choix,x;
ELEMENT_TAB E=tabelementcreer();
tabelementlire(&E);
LISTE L=listecreer();
LISTE L1=listecreer();
LISTE L2=listecreer();
LISTE L3=listecreer();
char t[10];
double n,m,f;
printf("\n           Bienvenue a votre menu              ");
printf("\n 1- Afficher le tableau des elments chimiques ");
printf("\n 2- Afficher la liste des elements a l'etat gazeux ");
printf("\n 3- Affichere la liste des elements lourds ");
printf("\n 4- Affichere la liste des elements radioactifs ");
printf("\n 5- Affichere la liste des elements instables ");
printf("\n 6- Affichre la masse atomique d'un element donnée");
printf("\n 7- Afficher la masse molaire du cafeine ");
printf("\n 8- Affichere le nombre de mol par 10 g de cafeine ");
do{
    printf("Entrez le numero de l'operation que vous vouliez executez ");
    scanf("%i",&choix);
}while ((choix <1)||(choix >8));
switch (choix)
{
case 1:tabelementafficher(E);
MENU();break;
case 2:
L=GAZ(E);
printf("\n Voila une liste des elements a l'etat gazeux :");
listeafficher(L);MENU();break;
case 3:
L1=lourds(E);
printf("\n voila la liste des elements lourds");
listeafficher(L1);MENU();break;
case 4:
L2=radioactifs(E);
printf("\n voila la liste des elements radioactifs :");
listeafficher(L2);MENU();break;
case 5:
L3=instable(E);
printf("\n voila la liste des elements instable :" );
listeafficher(L3);MENU();break;
case 6:
printf(" \n Saisir le symbole de l'atome  ");
gets(t);
n=Ar(E,&t);
printf("voila sa masse atomique %.4f",n);MENU();break;
    case 7:
m=M_C8H10N4O2(E);
printf("\n voila la masse molaire de la molecule cafeine : \n %.2f",m);MENU();break;
        case 8:
f=n_C8H10N4O2();
printf("\n Il Y'a %f moles dans 10 g de cafeine ",f);
MENU();break;
default:printf("veuillez choisir un numero entre 1 et 8 ");break;
}
}

void main()
{
ELEMENT_TAB E=tabelementcreer();
tabelementlire(&E);




/*******appel de fonction gaz******/
LISTE L=listecreer();
L=GAZ(E);
printf("\n Voila une liste des elements a l'etat gazeux :");
listeafficher(L);
/*******appel de fonction lourds ******/

LISTE L1=listecreer();
L1=lourds(E);
printf("\n voila la liste des elements lourds");
listeafficher(L1);
/******* appel de fonction radioactifs *****/
LISTE L2=listecreer();
L2=radioactifs(E);
printf("\n voila la liste des elements radioactifs :");
listeafficher(L2);
/*********appel de fonction instable*****/
LISTE L3=listecreer();
L3=instable(E);
printf("\n voila la liste des elements instable :" );
listeafficher(L3);
/***********appel de fonction double Ar*******/
char t[10];
double n;
printf("Saisir le symbole de l'atome  ");
gets(t);
n=Ar(E,&t);
printf("voila sa masse atomique %.4f",n);
/***********appel de fonction de cafeine*****/
double m;
m=M_C8H10N4O2(E);
printf("\n voila la masse molaire de la molecule cafeine : \n %.2f",m);
/***********appel de fonction  de calcul de mole de la cafeine ********/
double f;
f=n_C8H10N4O2();
printf("\n  Il Y'a %.7f moles dans 10 g de cafeine ",f);

}

