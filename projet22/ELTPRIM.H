#ifndef _ELTPRIM_H
#define _ELTPRIM_H
#include "ELTSDD.H"

void elementlire(ELEMENT*);
void elementafficher (ELEMENT);
void elementaffecter(ELEMENT*,ELEMENT);
void elementcopier(ELEMENT*,ELEMENT);
int elementcomparer (ELEMENT,ELEMENT);
ELEMENT elementcreer ();
void elementdetruire (ELEMENT);

#endif // _ELTPRIM_H

