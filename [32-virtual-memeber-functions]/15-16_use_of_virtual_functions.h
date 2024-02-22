#include <iostream>

/**
 * @brief class Ticket
 * 
 */

class K
{
    public:
        virtual void print();
};

/**
 * @brief class ConcessionaryTicket
 * 
 */

class M : public K
{
    //public:
        /** S15. No function print() definition */

    
};

/**
 * @brief class ConcessionaryTicket
 * 
 */


class N : public K
{
    private:
        /** S16. With function print() definition and private access*/
        void print();

    
};


void K::print()
{
    std::cout<<"Ticket\n";
}

void N::print()
{
    std::cout<<"Concessionary Ticket\n";
}
