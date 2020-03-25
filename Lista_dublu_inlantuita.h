#include <iostream>

class Lista_dublu_inlantuita
{
private:
    Nod* primul;
    Nod* ultimul;
public:
    void add(Nod* &cap, Nod* p, int val);
    void sterge(int poz);
    friend std::istream& operator>>(std::istream& in,Lista_dublu_inlantuita& temp);
    friend std::ostream& operator<<(std::ostream& out,Lista_dublu_inlantuita& temp);
    void concatenate(Nod *a,Nod *b );




};

