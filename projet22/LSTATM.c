#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "ELTPRIM.H"
#include "LSTPRIM.H"


NOEUD noeudcreer (ELEMENT e)
{ NOEUD n;
n=(NOEUD)malloc(sizeof(structnoeud));
if (!n)
printf("\n Plus d'espace ");
else
{
elementaffecter (&n->info,e);
n->suivant =NULL;
}
return n ;
}


void noeuddetruire (NOEUD n )
{elementdetruire (n->info);
free(n);
}

int estvide (LISTE L)
{
return(L->lg==0);
}

int estsaturee (LISTE L)
{NOEUD temp ;

int saturee=1;
temp=(NOEUD)malloc(sizeof(structnoeud));
if(temp!=NULL)
{saturee=0;
free(temp);
}
return saturee;}

int listetaille (LISTE L)
{return (L->lg) ;
}

LISTE listecreer ()
{
    LISTE L ;
    L=(LISTE)malloc(sizeof(lastruct));
    if(!L)
        printf("\n Probleme de memoire ");
    else {
        L->lg=0;
        L->tete=NULL;
    }
    return (L);
}
void listedetruire(LISTE L)
{
    int i;
    NOEUD p,q;
    q=L->tete;
    for (i=1;i<=L->lg;i++)
    {
        p=q;
        q=q->suivant;
        noeuddetruire(p);
    }
    free(L);
}

int inserer (LISTE L, ELEMENT e , int pos)
{
    int succee=1;
    int i;
    NOEUD n,p,q;
    if (estsaturee(L))
    {
        printf("\n Liste saturee");
        succee=0;
    }
    else {
        if((pos<1)||(pos>L->lg+1))
        {
            printf("\n Postion invalide ");
            succee=0;
        }
        else {
            n=noeudcreer(e);
            if (pos==1)
            {
                n->suivant=L->tete ;
                L->tete=n;
            }
            else
            {
                q=L->tete;
                for (i=1;i<pos;i++)
                {
                   p=q;
                   q=q->suivant;
                }
                 p->suivant=n;
                n->suivant=q;
            }
            (L->lg)++;
        }
    }
    return succee;
}
int supprimer (LISTE L,int pos)
{
    int i;
    int succee=1;
    NOEUD p,q;
    if (estvide(L))
    {
        printf("\n Liste vide ");
        succee=0;
    }
    else
        {
        if ((pos<1)||(pos>L->lg))
        {
            printf("\n Position invalide ");
            succee =0;
        }
        else {
            q=L->tete;
            if(pos==1)
                L->tete=L->tete->suivant;
            else {
                for(i=1;i<pos;i++)
                {
                    p=q;
                    q=q->suivant;
                }
                p->suivant=q->suivant;
            }
            noeuddetruire(q);
            (L->lg)--;
        }
    }
    return succee;
}
ELEMENT recuperer (LISTE L,int pos)
{
    ELEMENT elt=elementcreer();
    int i;
    NOEUD p;
    if(estvide(L))
        printf("\n Liste vide ");
    else {
        if ((pos<1)||(pos>L->lg))
            printf("\n Position invalide ");
        else {
            p=L->tete;
            for (i=1;i<pos;i++)
                p=p->suivant;
            elementaffecter (&elt,p->info);
        }
    }
    return (elt);
}
 LISTE listecopier (LISTE L)
    {
        LISTE LR=listecreer();
        int i;
        ELEMENT elt;
        for (i=1;i<=L->lg;i++)
        {
            elt=elementcreer();
            elementcopier(&elt,recuperer(L,i));
            inserer(LR,elt,i);
        }
        return LR;
    }
    int listecomparer (LISTE L1,LISTE L2)
    {
        int test=1;
        int i=1;
        if (listetaille(L1)!=listetaille(L2))test=0;
        while ((i<=listetaille(L1))&&(test))
        {
            if (elementcomparer(recuperer(L1,i),recuperer(L2,i))!=0)
                test=0;
            i++;
        }
        return test ;
    }

void listeafficher (LISTE L)
{
    int i=1;
    NOEUD p;
    p=L->tete;
    for (i=1;i<=L->lg;i++)
    {
        elementafficher (p->info);
        printf("\t");

        p=p->suivant;
    }
}



