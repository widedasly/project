#ifndef _LSTATM_H
#define _LSTATM_H
#include "ELTPRIM.H"
#include "LSTPRIM.H"

typedef struct structnoeud
 {
ELEMENT info ;
struct structnoeud *suivant;
}structnoeud ,*NOEUD ;

typedef struct {
NOEUD tete;
int lg ;
}lastruct ,*LISTE ;
#endif
