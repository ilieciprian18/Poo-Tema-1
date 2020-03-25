#include "Lista_dublu_inlantuita.h"
#include "Nod.h"

Lista_dublu_inlantuita::add(Nod* &cap, Nod* p, int val)
{
    {
// Alocare si initializare nod
 Nod *elem = new Nod();
 elem->info = val;
 elem->next = NULL;
 elem->prev = NULL;
 // lista vida
if (cap == NULL)
 {
 cap = elem;
 return;
 }
// inserare la inceputul listei
if (cap == p)
 {
 elem->next = cap;
 cap->prev = elem;
 cap = elem;
 return;
 }
// inserare in interior
 elem->next = p->next;
 elem->prev = p;
 p->next->prev = elem;
 p->next = elem;

}
}



Lista_dublu_inlantuita::sterge(int poz)
{
    Nod*current;
    int i;

    current = primul;
    for(i=1; i<poz && current!=NULL; i++)
    {
        current = current->next;
    }

    if(position == 1)
    {
        toDelete = ultimul;

        ultimul = ultimul->prev;

        if (ultimul != NULL)
            ultimul->next = NULL;

        delete(toDelete);
    }
    else if(current == ultimul)
    {
         toDelete = ultimul;

        ultimul = ultimul->prev;

        if (ultimul != NULL)
            ultimul->next = NULL;

        delete(toDelete);
    }
    else if(current != NULL)
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;

        delete(current);

    }
 std::istream& operator>>(std::istream& in,Lista_dublu_inlantuita& primul)
{
    int n;
    int x;
    in >>n ;
    for (int i = 0; i <n; i++)
    {
        in >> x;
        add(primul,i,x)
    }
    return in;
}


 std::ostream& operator<<(std::ostream& out,Lista_dublu_inlantuita& temp)
{
     node* temp = primul;
     while(temp) {
        out<<temp->info<<" ";
        temp = temp->next;
      }
      node* temp = ultimul;
      while(temp) {
         out<<temp->info<<" ";
         temp = temp->prev;
       }
       return out;
}
Lista_dublu_inlantuita::concatenate(Nod *a,Nod *b )
{
    /*cand se termina lista a incep sa o leg pe lista b //*/
        if (a->next == NULL)
        a->next = b;
    else
        concatenate(a->next,b);
}
