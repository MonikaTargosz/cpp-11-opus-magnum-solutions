#include <iostream>

/** S05. A polymorphic class is one in which a virtual function is defined or inherited. */

class K
{
    public:
        /** S01. Place of use virtual keyword to achieve the polymorphic behaviour of the member function */
        virtual void f(double l_m);
};

class M : public K
{
    public:
        /** S02. Place of use override keyword */
        
        /** SO7. A function in a derived class must have the same name, 
         * the same set of arguments, the same type of result 
         * to be a new implementation of a virtual function from the base class. */
         
        void f(double l_m) override;
    
};

void K::f(double l_m)
{
    std::cout<<"K::f("<<l_m<<")\n";
}

void M::f(double l_m)
{
    std::cout<<"M::f("<<l_m<<")\n";
}