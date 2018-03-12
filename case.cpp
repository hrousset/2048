#include "case.h"

Case::Case()
{
    *valeur = NULL;
}
Case::Case(int x,int y)
{
    x = px;
    y = py;
    *valeur = NULL;
}
Case::fusion_cases(Case Case1,Case Case2)
{
    if (Case1.valeur == Case2.valeur)
    {
        Case1.valeur *=2;

    }
}
Case::move_cases()
{

}
