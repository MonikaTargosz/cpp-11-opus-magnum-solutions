
#include <iostream>

/**
 * @brief Class B inherits class A, in which there is a (non-private) given-data member x. 
 * In class B, there is a member function f and a (non-private) data member x.
 * Override is when there is a data member in a derived class with a name identical to the name of the data member of the base class.
 */

/**
 * @brief Base class 
 */

class A 
{
    private:
        int m_prvt;
    protected:
        int m_prtctd;
    public:
        int m_pblc;
        void f();
        
};

/**
 * @brief Derived class B 
 * inherits class A with member function f 
 */
class B : public A
{
    public:
        void f();   
};

void A::f()
{
   
    m_prvt = 1;
    m_prtctd = 2;
    m_pblc = 3;
    
    std::cout<<"\nData members of base class (A) is: \n";
    std::cout<<"- m_prvt is: "<<m_prvt<<"\n";
    std::cout<<"- m_prtctd is: "<<m_prtctd<<"\n"; 
    std::cout<<"- m_pblc is: "<<m_pblc<<"\n"; 
    
}

void B::f()
{
   /* The derived class does not inherit the private data members of the base class.*/

    //m_prvt = 4; //error: ‘int A::m_prvt’ is private within this context
    m_prtctd = 5;
    m_pblc = 6;
    
    std::cout<<"\nData members of inheritance class (B) is: \n";
    //std::cout<<"- m_prvt is: "<<m_prvt<<"\n"; 
    std::cout<<"- m_prtctd is: "<<m_prtctd<<"\n"; 
    std::cout<<"- m_pblc is: "<<m_pblc; 
    
}

int main()
{
    B b;

    /* There is no inheritance of objects, there is only inheritance of classes.*/
    b.f();
    b.A::f(); 
}
