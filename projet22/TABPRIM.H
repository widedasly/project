#ifndef _TABPRIM_H
#define _TABPRIM_H
#include "TABSDD.H"




void tabelementcopier(ELEMENT_TAB*,ELEMENT_TAB);
void tabelementlire(ELEMENT_TAB*);
void tabelementafficher (ELEMENT_TAB);
ELEMENT_TAB tabelementcreer();
void tabelementaffecter(ELEMENT_TAB*,ELEMENT_TAB);
int tabelementcomparer (ELEMENT_TAB,ELEMENT_TAB);
void tabelementdetruire(ELEMENT_TAB);

#endif // _TABPRIM_H
