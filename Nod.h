#include <iostream>

class Nod
{
    int info;
    Nod* prev;
    Nod* next;
    public :
    Nod();
    Nod(int info,Nod* prev,Nod* next);
    ~Nod();

};

