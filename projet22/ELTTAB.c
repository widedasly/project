#include <stdio.h>
#include<stdlib.h>
#include <malLoc.h>
#include<string.h>
#include "ELTPRIM.H"
#include "LSTPRIM.H"
#include "TABPRIM.H"



ELEMENT_TAB tabelementcreer()
{
ELEMENT_TAB L;
L=(ELEMENT_TAB)malloc(sizeof(TAB));
int i,j;
for (i=1;i<=7;i++)
    for(j=1;j<=18;j++)
        L->T[i][j]=listecreer();

return L ;}

void tabelementdetruire(ELEMENT_TAB e)
{free (e);}
void tabelementlire(ELEMENT_TAB *e)
{int i;
LISTE L1=listecreer();
ELEMENT elt1=elementcreer();
elt1->num_at=1;strcpy(elt1->symbole,"H");elt1->masse_at=1.0079;strcpy(elt1->etat,"gaz");inserer(L1,elt1,1);(*e)->T[1][1]=L1;

for (i=2;i<=17;i++)
{
    LISTE L =listecreer();
    estvide(L);
    (*e)->T[1][i]=L;
    listeafficher(L);
}
LISTE L2=listecreer();
ELEMENT elt2=elementcreer();
elt2->num_at=2;
strcpy(elt2->symbole,"He");
elt2->masse_at=4.0026;
strcpy(elt2->etat,"gaz");
inserer(L2,elt2,1);
(*e)->T[1][18]=L2;

LISTE L3=listecreer();
ELEMENT elt3=elementcreer();
elt3->num_at=3;
strcpy(elt3->symbole,"Li");
elt3->masse_at=6.941;
strcpy(elt3->etat,"solide");
inserer(L3,elt3,1);
(*e)->T[2][1]=L3;

LISTE L4=listecreer();
ELEMENT elt4=elementcreer();
elt4->num_at=4;
strcpy(elt4->symbole,"Be");
elt4->masse_at=9.0122;
strcpy(elt4->etat,"solide");
inserer(L4,elt4,1);
(*e)->T[2][2]=L4;

for (i=3;i<=12;i++)
{
    LISTE L =listecreer();
   estvide(L);
    (*e)->T[2][i]=L;
    listeafficher(L);
}
LISTE L5=listecreer();
ELEMENT elt5=elementcreer();
elt5->num_at=5;
strcpy(elt5->symbole,"B");
elt5->masse_at=10.811;
strcpy(elt5->etat,"solide");
inserer(L5,elt5,1);
(*e)->T[2][13]=L5;

LISTE L6=listecreer();
ELEMENT elt6=elementcreer();
elt6->num_at=6;
strcpy(elt6->symbole,"C");
elt6->masse_at=12.011;
strcpy(elt6->etat,"solide");
inserer(L6,elt6,1);
(*e)->T[2][14]=L6;
LISTE L7=listecreer();
ELEMENT elt7=elementcreer();
elt7->num_at=7;
strcpy(elt7->symbole,"N");
elt7->masse_at=14.007;
strcpy(elt7->etat,"gaz");
inserer(L7,elt7,1);
(*e)->T[2][15]=L7;
LISTE L8=listecreer();
ELEMENT elt8=elementcreer();
elt8->num_at=8;
strcpy(elt8->symbole,"O");
elt8->masse_at=15.999;
strcpy(elt8->etat,"gaz");
inserer(L8,elt8,1);
(*e)->T[2][16]=L8;
LISTE L9=listecreer();
ELEMENT elt9=elementcreer();
elt9->num_at=9;
strcpy(elt9->symbole,"F");
elt9->masse_at=18.998;
strcpy(elt9->etat,"gaz");
inserer(L9,elt9,1);
(*e)->T[2][17]=L9;
LISTE L10=listecreer();
ELEMENT elt10=elementcreer();
elt10->num_at=10;
strcpy(elt10->symbole,"Ne");
elt10->masse_at=20.180;
strcpy(elt10->etat,"gaz");
inserer(L10,elt10,1);
(*e)->T[2][18]=L10;
LISTE L11=listecreer();
ELEMENT elt11=elementcreer();
elt11->num_at=11;
strcpy(elt11->symbole,"Na");
elt11->masse_at=22.990;
strcpy(elt11->etat,"solide");
inserer(L11,elt11,1);
(*e)->T[3][1]=L11;
LISTE L12=listecreer();
ELEMENT elt12=elementcreer();
elt12->num_at=12;
strcpy(elt12->symbole,"Mg");
elt12->masse_at=24.305;
strcpy(elt12->etat,"solide");
inserer(L12,elt12,1);
(*e)->T[3][2]=L12;
for (i=3;i<=12;i++)
{
    LISTE L =listecreer();
    estvide(L);
    (*e)->T[3][i]=L;

}
LISTE L13=listecreer();
ELEMENT elt13=elementcreer();
elt13->num_at=13;
strcpy(elt13->symbole,"Al");
elt13->masse_at=26.982;
strcpy(elt13->etat,"solide");
inserer(L13,elt13,1);
(*e)->T[3][13]=L13;
LISTE L14=listecreer();
ELEMENT elt14=elementcreer();
elt14->num_at=14;
strcpy(elt14->symbole,"Si");
elt14->masse_at=28.086;
strcpy(elt14->etat,"solide");
inserer(L14,elt14,1);
(*e)->T[3][14]=L14;
LISTE L15=listecreer();
ELEMENT elt15=elementcreer();
elt15->num_at=15;
strcpy(elt15->symbole,"P");
elt15->masse_at=30.974;
strcpy(elt15->etat,"solide");
inserer(L15,elt15,1);
(*e)->T[3][15]=L15;
LISTE L16=listecreer();
ELEMENT elt16=elementcreer();
elt16->num_at=16;
strcpy(elt16->symbole,"S");
elt16->masse_at=32.065;
strcpy(elt16->etat,"solide");
inserer(L16,elt16,1);
(*e)->T[3][16]=L16;
LISTE L17=listecreer();
ELEMENT elt17=elementcreer();
elt17->num_at=17;
strcpy(elt17->symbole,"Cl");
elt17->masse_at=35.453;
strcpy(elt17->etat,"gaz");
inserer(L17,elt17,1);
(*e)->T[3][17]=L17;
LISTE L18=listecreer();
ELEMENT elt18=elementcreer();
elt18->num_at=18;
strcpy(elt18->symbole,"Ar");
elt18->masse_at=39.948;
strcpy(elt18->etat,"gaz");
inserer(L18,elt18,1);
(*e)->T[3][18]=L18;
LISTE L19=listecreer();
ELEMENT elt19=elementcreer();
elt19->num_at=19;
strcpy(elt19->symbole,"K");
elt19->masse_at=39.098;
strcpy(elt19->etat,"solide");
inserer(L19,elt19,1);
(*e)->T[4][1]=L19;
LISTE L20=listecreer();
ELEMENT elt20=elementcreer();
elt20->num_at=20;
strcpy(elt20->symbole,"Ca");
elt20->masse_at=40.078;
strcpy(elt20->etat,"solide");
inserer(L20,elt20,1);
(*e)->T[4][2]=L20;
LISTE L21=listecreer();
ELEMENT elt21=elementcreer();
elt21->num_at=21;
strcpy(elt21->symbole,"Sc");
elt21->masse_at=44.958;
strcpy(elt21->etat,"solide");
inserer(L21,elt21,1);
(*e)->T[4][3]=L21;
LISTE L22=listecreer();
ELEMENT elt22=elementcreer();
elt22->num_at=22;
strcpy(elt22->symbole,"Ti");
elt22->masse_at=47.887;
strcpy(elt22->etat,"solide");
inserer(L22,elt22,1);
(*e)->T[4][4]=L22;
LISTE L23=listecreer();
ELEMENT elt23=elementcreer();
elt23->num_at=23;
strcpy(elt23->symbole,"V");
elt23->masse_at=50.942;
strcpy(elt23->etat,"solide");
inserer(L23,elt23,1);
(*e)->T[4][5]=L23;
LISTE L24=listecreer();
ELEMENT elt24=elementcreer();
elt24->num_at=24;
strcpy(elt24->symbole,"Cr");
elt24->masse_at=51.996;
strcpy(elt24->etat,"solide");
inserer(L24,elt24,1);
(*e)->T[4][6]=L24;
LISTE L25=listecreer();
ELEMENT elt25=elementcreer();
elt25->num_at=25;
strcpy(elt25->symbole,"Mn");
elt25->masse_at=54.938;
strcpy(elt25->etat,"solide");
inserer(L25,elt25,1);
(*e)->T[4][7]=L25;
LISTE L26=listecreer();
ELEMENT elt26=elementcreer();
elt26->num_at=26;
strcpy(elt26->symbole,"Fe");
elt26->masse_at=55.845;
strcpy(elt26->etat,"solide");
inserer(L26,elt26,1);
(*e)->T[4][8]=L26;
LISTE L27=listecreer();
ELEMENT elt27=elementcreer();
elt27->num_at=27;
strcpy(elt27->symbole,"Co");
elt27->masse_at=58.933;
strcpy(elt27->etat,"solide");
inserer(L27,elt27,1);
(*e)->T[4][9]=L27;
LISTE L28=listecreer();
ELEMENT elt28=elementcreer();
elt28->num_at=28;
strcpy(elt28->symbole,"Ni");
elt28->masse_at=58.893;
strcpy(elt28->etat,"solide");
inserer(L28,elt28,1);
(*e)->T[4][10]=L28;
LISTE L29=listecreer();
ELEMENT elt29=elementcreer();
elt29->num_at=29;
strcpy(elt29->symbole,"Cu");
elt29->masse_at=63.546;
strcpy(elt29->etat,"solide");
inserer(L29,elt29,1);
(*e)->T[4][11]=L29;
LISTE L30=listecreer();
ELEMENT elt30=elementcreer();
elt30->num_at=30;
strcpy(elt30->symbole,"Zn");
elt30->masse_at=65.38;
strcpy(elt30->etat,"solide");
inserer(L30,elt30,1);
(*e)->T[4][12]=L30;
LISTE L31=listecreer();
ELEMENT elt31=elementcreer();
elt31->num_at=31;
strcpy(elt30->symbole,"Ga");
elt31->masse_at=69.723;
strcpy(elt31->etat,"solide");
inserer(L31,elt31,1);
(*e)->T[4][13]=L31;
LISTE L32=listecreer();
ELEMENT elt32=elementcreer();
elt32->num_at=32;
strcpy(elt32->symbole,"Ge");
elt32->masse_at=72.64;
strcpy(elt32->etat,"solide");
inserer(L32,elt32,1);
(*e)->T[4][14]=L32;
LISTE L33=listecreer();
ELEMENT elt33=elementcreer();
elt33->num_at=33;
strcpy(elt33->symbole,"As");
elt33->masse_at=74.922;
strcpy(elt33->etat,"solide");
inserer(L33,elt33,1);
(*e)->T[4][15]=L33;
LISTE L34=listecreer();
ELEMENT elt34=elementcreer();
elt34->num_at=34;
strcpy(elt34->symbole,"Se");
elt34->masse_at=78.96;
strcpy(elt34->etat,"solide");
inserer(L34,elt34,1);
(*e)->T[4][16]=L34;
LISTE L35=listecreer();
ELEMENT elt35=elementcreer();
elt35->num_at=35;
strcpy(elt35->symbole,"Br");
elt35->masse_at=79.904;
strcpy(elt35->etat,"liquide");
inserer(L35,elt35,1);
(*e)->T[4][17]=L35;
LISTE L36=listecreer();
ELEMENT elt36=elementcreer();
elt36->num_at=36;
strcpy(elt36->symbole,"Kr");
elt36->masse_at=83.798;
strcpy(elt36->etat,"gaz");
inserer(L36,elt36,1);
(*e)->T[4][18]=L36;
LISTE L37=listecreer();
ELEMENT elt37=elementcreer();
elt37->num_at=37;
strcpy(elt37->symbole,"Rb");
elt37->masse_at=85.468;
strcpy(elt37->etat,"solide");
inserer(L37,elt37,1);
(*e)->T[5][1]=L37;
LISTE L38=listecreer();
ELEMENT elt38=elementcreer();
elt38->num_at=38;
strcpy(elt38->symbole,"Sr");
elt38->masse_at=87.82;
strcpy(elt38->etat,"solide");
inserer(L38,elt38,1);
(*e)->T[5][2]=L38;
LISTE L39=listecreer();
ELEMENT elt39=elementcreer();
elt39->num_at=39;
strcpy(elt39->symbole,"Y");
elt39->masse_at=88.906;
strcpy(elt39->etat,"solide");
inserer(L39,elt39,1);
(*e)->T[5][3]=L39;
LISTE L40=listecreer();
ELEMENT elt40=elementcreer();
elt40->num_at=40;strcpy(elt40->symbole,"Zr");elt40->masse_at=91.224;strcpy(elt40->etat,"solide");inserer(L40,elt40,1);(*e)->T[5][4]=L40;
LISTE L41=listecreer();
ELEMENT elt41=elementcreer();
elt41->num_at=41;strcpy(elt41->symbole,"Nb");elt41->masse_at=92.906;strcpy(elt41->etat,"solide");inserer(L41,elt41,1);(*e)->T[5][5]=L41;
LISTE L42=listecreer();
ELEMENT elt42=elementcreer();
elt42->num_at=42;strcpy(elt42->symbole,"Mo");elt42->masse_at=95.96;strcpy(elt42->etat,"solide");inserer(L42,elt42,1);(*e)->T[5][6]=L42;
LISTE L43=listecreer();
ELEMENT elt43=elementcreer();
elt43->num_at=43;strcpy(elt43->symbole,"Tc");elt43->masse_at=98;strcpy(elt43->etat,"sythetique");inserer(L43,elt43,1);(*e)->T[5][7]=L43;
LISTE L44=listecreer();
ELEMENT elt44=elementcreer();
elt44->num_at=44;strcpy(elt44->symbole,"Ru");elt44->masse_at=101.107;strcpy(elt44->etat,"solide");inserer(L44,elt44,1);(*e)->T[5][8]=L44;
LISTE L45=listecreer();
ELEMENT elt45=elementcreer();
elt45->num_at=45;strcpy(elt45->symbole,"Rh");elt45->masse_at=102.91;strcpy(elt45->etat,"solide");inserer(L45,elt45,1);(*e)->T[5][9]=L45;
LISTE L46=listecreer();
ELEMENT elt46=elementcreer();
elt46->num_at=46;strcpy(elt46->symbole,"Pd");elt46->masse_at=106.42;strcpy(elt46->etat,"solide");inserer(L46,elt46,1);(*e)->T[5][10]=L46;
LISTE L47=listecreer();
ELEMENT elt47=elementcreer();
elt47->num_at=47;strcpy(elt47->symbole,"Ag");elt47->masse_at=107.87;strcpy(elt47->etat,"solide");inserer(L47,elt47,1);(*e)->T[5][11]=L47;
LISTE L48=listecreer();
ELEMENT elt48=elementcreer();
elt48->num_at=48;strcpy(elt48->symbole,"Cd");elt48->masse_at=112.41;strcpy(elt48->etat,"solide");inserer(L48,elt48,1);(*e)->T[5][12]=L48;
LISTE L49=listecreer();
ELEMENT elt49=elementcreer();
elt49->num_at=49;strcpy(elt49->symbole,"In");elt49->masse_at=114.82;strcpy(elt49->etat,"solide");inserer(L49,elt49,1);(*e)->T[5][13]=L49;
LISTE L50=listecreer();
ELEMENT elt50=elementcreer();
elt50->num_at=50;strcpy(elt50->symbole,"Sn");elt50->masse_at=118.71;strcpy(elt50->etat,"solide");inserer(L50,elt50,1);(*e)->T[5][14]=L50;
LISTE L51=listecreer();
ELEMENT elt51=elementcreer();
elt51->num_at=51;strcpy(elt51->symbole,"Sb");elt51->masse_at=121.76;strcpy(elt51->etat,"solide");inserer(L51,elt51,1);(*e)->T[5][15]=L51;
LISTE L52=listecreer();
ELEMENT elt52=elementcreer();
elt52->num_at=52;strcpy(elt52->symbole,"Te");elt52->masse_at=127.60;strcpy(elt52->etat,"solide");inserer(L52,elt52,1);(*e)->T[5][16]=L52;
LISTE L53=listecreer();
ELEMENT elt53=elementcreer();
elt53->num_at=53;strcpy(elt53->symbole,"I");elt53->masse_at=126.90;strcpy(elt53->etat,"solide");inserer(L53,elt53,1);(*e)->T[5][17]=L53;
LISTE L54=listecreer();
ELEMENT elt54=elementcreer();
elt54->num_at=54;strcpy(elt54->symbole,"Xe");elt54->masse_at=131.29;strcpy(elt54->etat,"gaz");inserer(L54,elt54,1);(*e)->T[5][18]=L54;
LISTE L55=listecreer();
ELEMENT elt55=elementcreer();
elt55->num_at=55;strcpy(elt55->symbole,"Cs");elt55->masse_at=132.91;strcpy(elt55->etat,"solide");inserer(L55,elt55,1);(*e)->T[6][1]=L55;
LISTE L56=listecreer();
ELEMENT elt56=elementcreer();
elt56->num_at=56;strcpy(elt56->symbole,"Ba");elt56->masse_at=137.33;strcpy(elt56->etat,"solide");inserer(L56,elt56,1);(*e)->T[6][2]=L56;
/**liste 57**/
LISTE L57=listecreer();
ELEMENT elt57=elementcreer();
elt57->num_at=57;strcpy(elt57->symbole,"La");elt57->masse_at=138.91;strcpy(elt57->etat,"solide");inserer(L57,elt57,1);
ELEMENT elt58=elementcreer();
elt58->num_at=58;strcpy(elt58->symbole,"Ce");elt58->masse_at=140.12;strcpy(elt58->etat,"solide");inserer(L57,elt58,2);
ELEMENT elt59=elementcreer();
elt59->num_at=59;strcpy(elt59->symbole,"Pr");elt59->masse_at=140.91;strcpy(elt59->etat,"solide");inserer(L57,elt59,3);
ELEMENT elt60=elementcreer();
elt60->num_at=60;strcpy(elt60->symbole,"Nd");elt60->masse_at=144.24;strcpy(elt60->etat,"solide");inserer(L57,elt60,4);
ELEMENT elt61=elementcreer();
elt61->num_at=61;strcpy(elt61->symbole,"Pm");elt61->masse_at=145;strcpy(elt61->etat,"synthetique");inserer(L57,elt61,5);
ELEMENT elt62=elementcreer();
elt62->num_at=62;strcpy(elt62->symbole,"Sm");elt62->masse_at=150.38;strcpy(elt62->etat,"solide");inserer(L57,elt62,6);
ELEMENT elt63=elementcreer();
elt63->num_at=63;strcpy(elt63->symbole,"Eu");elt63->masse_at=151.95;strcpy(elt63->etat,"solide");inserer(L57,elt63,7);
ELEMENT elt64=elementcreer();
elt64->num_at=64;strcpy(elt64->symbole,"Gd");elt64->masse_at=157.25;strcpy(elt64->etat,"solide");inserer(L57,elt64,8);
ELEMENT elt65=elementcreer();
elt65->num_at=65;strcpy(elt65->symbole,"Td");elt65->masse_at=158.93;strcpy(elt65->etat,"solide");inserer(L57,elt65,9);
ELEMENT elt66=elementcreer();
elt66->num_at=66;strcpy(elt66->symbole,"Dy");elt66->masse_at=162.50;strcpy(elt66->etat,"solide");inserer(L57,elt66,10);
ELEMENT elt67=elementcreer();
elt67->num_at=67;strcpy(elt67->symbole,"Ho");elt67->masse_at=164.93 ;strcpy(elt67->etat,"solide");inserer(L57,elt67,11);
ELEMENT elt68=elementcreer();
elt68->num_at=68;strcpy(elt68->symbole,"Er");elt68->masse_at=167.28;strcpy(elt68->etat,"solide");inserer(L57,elt68,12);
ELEMENT elt69=elementcreer();
elt69->num_at=69;strcpy(elt69->symbole,"Tm");elt69->masse_at=168.93;strcpy(elt69->etat,"solide");inserer(L57,elt69,13);
ELEMENT elt70=elementcreer();
elt70->num_at=70;strcpy(elt70->symbole,"Yb");elt70->masse_at=173.05;strcpy(elt70->etat,"solide");inserer(L57,elt70,14);
ELEMENT elt71=elementcreer();
elt71->num_at=71;strcpy(elt71->symbole,"Lu");elt71->masse_at=174.97;strcpy(elt71->etat,"solide");inserer(L57,elt71,15);(*e)->T[6][3]=L57;
LISTE L72=listecreer();
ELEMENT elt72=elementcreer();
elt72->num_at=72;strcpy(elt72->symbole,"Hf");elt72->masse_at=178.49;strcpy(elt72->etat,"solide");inserer(L72,elt72,1);(*e)->T[6][4]=L72;
LISTE L73=listecreer();
ELEMENT elt73=elementcreer();
elt73->num_at=73;strcpy(elt73->symbole,"Ta");elt73->masse_at=180.95;strcpy(elt73->etat,"solide");inserer(L73,elt73,1);(*e)->T[6][5]=L73;
LISTE L74=listecreer();
ELEMENT elt74=elementcreer();
elt74->num_at=74;strcpy(elt74->symbole,"W");elt74->masse_at=183.84;strcpy(elt74->etat,"solide");inserer(L74,elt74,1);(*e)->T[6][6]=L74;
LISTE L75=listecreer();
ELEMENT elt75=elementcreer();
elt75->num_at=75;strcpy(elt75->symbole,"Re");elt75->masse_at=186.21;strcpy(elt75->etat,"solide");inserer(L75,elt75,1);(*e)->T[6][7]=L75;
LISTE L76=listecreer();
ELEMENT elt76=elementcreer();
elt76->num_at=76;strcpy(elt76->symbole,"Os");elt76->masse_at=190.23;strcpy(elt76->etat,"solide");inserer(L76,elt76,1);(*e)->T[6][8]=L76;
LISTE L77=listecreer();
ELEMENT elt77=elementcreer();
elt77->num_at=77;strcpy(elt77->symbole,"Ir");elt77->masse_at=192.22;strcpy(elt77->etat,"solide");inserer(L77,elt77,1);(*e)->T[6][9]=L77;
LISTE L78=listecreer();
ELEMENT elt78=elementcreer();
elt78->num_at=78;strcpy(elt78->symbole,"Pt");elt78->masse_at=195.08;strcpy(elt78->etat,"solide");inserer(L78,elt78,1);(*e)->T[6][10]=L78;
LISTE L79=listecreer();
ELEMENT elt79=elementcreer();
elt79->num_at=79;strcpy(elt79->symbole,"Au");elt79->masse_at=196.97;strcpy(elt79->etat,"solide");inserer(L79,elt79,1);(*e)->T[6][11]=L79;
LISTE L80=listecreer();
ELEMENT elt80=elementcreer();
elt80->num_at=80;strcpy(elt80->symbole,"Hg");elt80->masse_at=200.59;strcpy(elt80->etat,"liquide");inserer(L80,elt80,1);(*e)->T[6][12]=L80;
LISTE L81=listecreer();
ELEMENT elt81=elementcreer();
elt81->num_at=81;strcpy(elt81->symbole,"Tl");elt81->masse_at=204.38;strcpy(elt81->etat,"solide");inserer(L81,elt81,1);(*e)->T[6][13]=L81;
LISTE L82=listecreer();
ELEMENT elt82=elementcreer();
elt82->num_at=82;strcpy(elt82->symbole,"Pb");elt82->masse_at=207.2;strcpy(elt82->etat,"solide");inserer(L82,elt82,1);(*e)->T[6][14]=L82;
LISTE L83=listecreer();
ELEMENT elt83=elementcreer();
elt83->num_at=83;strcpy(elt83->symbole,"Bi");elt83->masse_at=208.96;strcpy(elt83->etat,"solide");inserer(L83,elt83,1);(*e)->T[6][15]=L83;
LISTE L84=listecreer();
ELEMENT elt84=elementcreer();
elt84->num_at=84;strcpy(elt84->symbole,"Po");elt84->masse_at=209;strcpy(elt84->etat,"solide");inserer(L84,elt84,1);(*e)->T[6][16]=L84;
LISTE L85=listecreer();
ELEMENT elt85=elementcreer();
elt85->num_at=85;strcpy(elt85->symbole,"At");elt85->masse_at=210;strcpy(elt85->etat,"solide");inserer(L85,elt85,1);(*e)->T[6][17]=L85;
LISTE L86=listecreer();
ELEMENT elt86=elementcreer();
elt86->num_at=86;strcpy(elt86->symbole,"Rn");elt86->masse_at=222;strcpy(elt86->etat,"gaz");inserer(L86,elt86,1);(*e)->T[6][18]=L86;
LISTE L87=listecreer();
ELEMENT elt87=elementcreer();
elt87->num_at=87;strcpy(elt87->symbole,"Fr");elt87->masse_at=223;strcpy(elt87->etat,"solide");inserer(L87,elt87,1);(*e)->T[7][1]=L87;
LISTE L88=listecreer();
ELEMENT elt88=elementcreer();
elt88->num_at=88;strcpy(elt88->symbole,"Ra");elt88->masse_at=226;strcpy(elt88->etat,"solide");inserer(L88,elt88,1);(*e)->T[7][2]=L88;
/**liste 89**/
LISTE L89=listecreer();
ELEMENT elt89=elementcreer();
elt89->num_at=89;strcpy(elt89->symbole,"Ac");elt89->masse_at=227;strcpy(elt89->etat,"solide");inserer(L89,elt89,1);
ELEMENT elt90=elementcreer();
elt90->num_at=90;strcpy(elt90->symbole,"Th");elt90->masse_at=232.04;strcpy(elt90->etat,"solide");inserer(L89,elt90,2);
ELEMENT elt91=elementcreer();
elt91->num_at=91;strcpy(elt91->symbole,"Pa");elt91->masse_at=231.04;strcpy(elt91->etat,"solide");inserer(L89,elt91,3);
ELEMENT elt92=elementcreer();
elt92->num_at=92;strcpy(elt92->symbole,"U");elt92->masse_at=238.03;strcpy(elt92->etat,"solide");inserer(L89,elt92,4);
ELEMENT elt93=elementcreer();
elt93->num_at=93;strcpy(elt93->symbole,"Np");elt93->masse_at=237;strcpy(elt93->etat,"synthetique");inserer(L89,elt93,5);
ELEMENT elt94=elementcreer();
elt94->num_at=94;strcpy(elt94->symbole,"Pu");elt94->masse_at=244;strcpy(elt94->etat,"synthetique");inserer(L89,elt94,6);
ELEMENT elt95=elementcreer();
elt95->num_at=95;strcpy(elt95->symbole,"Am");elt95->masse_at=243;strcpy(elt95->etat,"synthetique");inserer(L89,elt95,7);
ELEMENT elt96=elementcreer();
elt96->num_at=96;strcpy(elt96->symbole,"Cm");elt96->masse_at=247;strcpy(elt96->etat,"synthetique");inserer(L89,elt96,8);
ELEMENT elt97=elementcreer();
elt97->num_at=97;strcpy(elt97->symbole,"Bk");elt97->masse_at=247;strcpy(elt97->etat,"synthetique");inserer(L89,elt97,9);
ELEMENT elt98=elementcreer();
elt98->num_at=98;strcpy(elt98->symbole,"Cf");elt98->masse_at=251;strcpy(elt98->etat,"synthetique");inserer(L89,elt98,10);
ELEMENT elt99=elementcreer();
elt99->num_at=99;strcpy(elt99->symbole,"Es");elt99->masse_at=252;strcpy(elt99->etat,"synthetique");inserer(L89,elt99,11);
ELEMENT elt100=elementcreer();
elt100->num_at=100;strcpy(elt100->symbole,"Fm");elt100->masse_at=257;strcpy(elt100->etat,"synthetique");inserer(L89,elt100,12);
ELEMENT elt101=elementcreer();
elt101->num_at=101;strcpy(elt101->symbole,"Md");elt101->masse_at=258;strcpy(elt101->etat,"synthetique");inserer(L89,elt101,13);
ELEMENT elt102=elementcreer();
elt102->num_at=102;strcpy(elt102->symbole,"No");elt102->masse_at=259;strcpy(elt102->etat,"synthetique");inserer(L89,elt102,14);
ELEMENT elt103=elementcreer();
elt103->num_at=103;strcpy(elt103->symbole,"Lr");elt103->masse_at=262;strcpy(elt103->etat,"synthetique");inserer(L89,elt103,15);(*e)->T[7][3]=L89;
LISTE L104=listecreer();
ELEMENT elt104=elementcreer();
elt104->num_at=104;strcpy(elt104->symbole,"Rf");elt104->masse_at=267;strcpy(elt104->etat,"synthetique");inserer(L104,elt104,1);(*e)->T[7][4]=L104;
LISTE L105=listecreer();
ELEMENT elt105=elementcreer();
elt105->num_at=105;strcpy(elt105->symbole,"Db");elt105->masse_at=268;strcpy(elt105->etat,"synthetique");inserer(L105,elt105,1);(*e)->T[7][5]=L105;
LISTE L106=listecreer();
ELEMENT elt106=elementcreer();
elt106->num_at=106;strcpy(elt106->symbole,"Sg");elt106->masse_at=271;strcpy(elt106->etat,"synthetique");inserer(L106,elt106,1);(*e)->T[7][6]=L106;
LISTE L107=listecreer();
ELEMENT elt107=elementcreer();
elt107->num_at=107;strcpy(elt107->symbole,"Bh");elt107->masse_at=272;strcpy(elt107->etat,"synthetique");inserer(L107,elt107,1);(*e)->T[7][7]=L107;
LISTE L108=listecreer();
ELEMENT elt108=elementcreer();
elt108->num_at=108;strcpy(elt108->symbole,"Hs");elt108->masse_at=277;strcpy(elt108->etat,"synthetique");inserer(L108,elt108,1);(*e)->T[7][8]=L108;
LISTE L109=listecreer();
ELEMENT elt109=elementcreer();
elt109->num_at=109;strcpy(elt109->symbole,"Mt");elt109->masse_at=109;strcpy(elt109->etat,"synthetique");inserer(L109,elt109,1);(*e)->T[7][9]=L109;
LISTE L110=listecreer();
ELEMENT elt110=elementcreer();
elt110->num_at=110;strcpy(elt110->symbole,"Ds");elt110->masse_at=281;strcpy(elt110->etat,"synthetique");inserer(L110,elt110,1);(*e)->T[7][10]=L110;
LISTE L111=listecreer();
ELEMENT elt111=elementcreer();
elt111->num_at=111;strcpy(elt111->symbole,"Rg");elt111->masse_at=280;strcpy(elt111->etat,"synthetique");inserer(L111,elt111,1);(*e)->T[7][11]=L111;
LISTE L112=listecreer();
ELEMENT elt112=elementcreer();
elt112->num_at=112;strcpy(elt112->symbole,"Cu");elt112->masse_at=285;strcpy(elt112->etat,"synthetique");inserer(L112,elt112,1);(*e)->T[7][12]=L112;
LISTE L113=listecreer();
ELEMENT elt113=elementcreer();
elt113->num_at=113;strcpy(elt113->symbole,"Uut");elt113->masse_at=286;strcpy(elt113->etat,"synthetique");inserer(L113,elt113,1);(*e)->T[7][13]=L113;
LISTE L114=listecreer();
ELEMENT elt114=elementcreer();
elt114->num_at=114;strcpy(elt114->symbole,"Fl");elt114->masse_at=287;strcpy(elt114->etat,"synthetique");inserer(L114,elt114,1);(*e)->T[7][14]=L114;
LISTE L115=listecreer();
ELEMENT elt115=elementcreer();
elt115->num_at=115;strcpy(elt115->symbole,"Uup");elt115->masse_at=288;strcpy(elt115->etat,"synthetique");inserer(L115,elt115,1);(*e)->T[7][15]=L115;
LISTE L116=listecreer();
ELEMENT elt116=elementcreer();
elt116->num_at=116;strcpy(elt116->symbole,"Lv");elt116->masse_at=291;strcpy(elt116->etat,"synthetique");inserer(L116,elt116,1);(*e)->T[7][16]=L116;
LISTE L117=listecreer();
ELEMENT elt117=elementcreer();
elt117->num_at=117;strcpy(elt117->symbole,"Uus");elt117->masse_at=292;strcpy(elt117->etat,"synthetique");inserer(L117,elt117,1);(*e)->T[7][17]=L117;
LISTE L118=listecreer();
ELEMENT elt118=elementcreer();
elt118->num_at=118;strcpy(elt118->symbole,"Uuo");elt118->masse_at=294;strcpy(elt118->etat,"synthetique");inserer(L118,elt118,1);(*e)->T[7][18]=L118;
}
void tabelementafficher(ELEMENT_TAB e)
{
    int i,j ;
    for (i=1;i<=7;i++){
        for (j=1;j<=18;j++){

        listeafficher(e->T[i][j]);}

        }
}
void tabelementcopier(ELEMENT_TAB *E1,ELEMENT_TAB E2)
{ int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=18;j++){
            LISTE L=listecreer();
            ELEMENT e= elementcreer();
          elementcopier((*E1)->T[i][j]->tete->info,e);
          L=e;
          E2->T[i][j]=L;

        }
    }
}

void tabelementaffecter(ELEMENT_TAB *E1,ELEMENT_TAB E2)
{
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=18;j++){
            LISTE L=listecreer();
            ELEMENT e= elementcreer();
          elementcopier((*E1)->T[i][j]->tete->info,e);
          inserer(L,e,1);
          E2->T[i][j]=L;

        }
    }

}

