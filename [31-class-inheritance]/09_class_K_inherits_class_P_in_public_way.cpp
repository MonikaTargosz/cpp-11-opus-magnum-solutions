
#include <iostream>

/**
 * @brief Class B inherits class A, in which there is a (non-private) given-data member x. 
 * In class B, there is a member function f and a (non-private) data member x.
 * To use the data member x you need to 
 */

/**
 * @brief Base class with non-private data member x
 */

class A 
{
    private:
        int m_prvt;
    protected:
        int m_prtctd;
    public:
        int m_pblc;
        
        /**
         * @brief Function to set the private data member
         * 
         * @param l_prvt 
         */
        void set(int l_prvt) { m_prvt = l_prvt; }

        /**
         * @brief Function get the private data member
         * 
         * @return int 
         */
        int get() { return m_prvt; }
};

/**
 * @brief Class B inherits class A with member function f 
 * to set the non-private data member of class A
 */
class B : public A
{
    public:
        void f();   
};

void B::f()
{
    set(1);
    std::cout<<"m_prvt of basic class (A) is private: "<<get()<<"\n";
    
    //m_prvt = 1;
    m_prtctd = 2;
    m_pblc = 3;
    
    //std::cout<<"m_prvt of inheritance class (B) is: "<<m_prvt; //error: ‘int A::m_prvt’ is private within this context
    std::cout<<"m_prtctd of inheritance class (B) is protected: "<<m_prtctd<<"\n"; 
    std::cout<<"m_pblc of inheritance class (B) is public: "<<m_pblc; 
    
}

int main()
{
    B b;
    b.f();
}
