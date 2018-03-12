#ifndef CASE_H
#define CASE_H
#include "tableau.h"

class Case
{
public:
    Case();
    Case(int x,int y);
    fusion_cases(Case Case1,Case Case2);
    move_cases(Case Case1,Tableau table);
private:
    int *valeur;
    int px,py;
};

#endif // CASE_H
