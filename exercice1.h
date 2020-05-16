//
// Created by Rebaudet Thomas on 16/05/2020.
//

#ifndef LOULOU_EXERCICE1_H
#define LOULOU_EXERCICE1_H
typedef struct Cellule{
    int etat;
    int numero;
    struct Cellule* next;
}Barillet;
void faireTournerBarrillet(Barillet* chargeur);
void charger(Barillet* chargeur, int nombreDeCharge);
void tirer(Barillet* chargeur);
void afficherNbBalle(Barillet* chargeur);
void liberation(Barillet* chargeur);
#endif //LOULOU_EXERCICE1_H
