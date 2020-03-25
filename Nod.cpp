#include "Nod.h"

Nod::Nod()
{
    info =0;
    Nod* prev = nullptr;
    Nod* next = nullptr;
}

Nod::Nod(int info,Nod* prev,Nod* next)
{
    this->info=info;
    *(prev)= *(prev);
    *(next)= *(prev);
}
Nod::~Nod()
{
    this->info = 0;
    delete prev;
    delete next;
}
