#ifndef _LSTPRIM_H
#define _LSTPRIM_H
#include "ELTPRIM.H"
#include "LSTSDD.H"

LISTE listecreer ();
void listedetruire (LISTE);
int estvide (LISTE);
int estsaturee(LISTE);
int listetaille (LISTE);
ELEMENT recuperer (LISTE ,int pos);
int inserer(LISTE ,ELEMENT ,int pos );
int supprimer (LISTE ,int pos);
void listeafficher (LISTE);
LISTE listecopier (LISTE);
int listecomparer (LISTE ,LISTE);

#endif // _LSTPRIM_H
