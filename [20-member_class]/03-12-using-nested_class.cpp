#include <iostream>

class A
{
    int m_priv_A;
    
    public:
        
        enum delay_a{one,two,three,four,five};
    
    private:

    class W
    {
        int m_priv_W;
        
        static int interval;

        public:
        
            enum delay_e{one,two,three,four,five};
    
            /* S05. & S07 Possible definition of a member function of class W nested within class A. */
            void set(int l_on);
    };
    
    W oWew;
    
    public:
        
        void set(int l_on);
        
    
};

/* S05. & S07 Definition of a member function of class W nested within class A. */

void A::W::set(int l_on)
{ 
    A o_A;
    
    
    /* S12. Class A cannot use the enum type of the nested class W. */
    //delay_a delay_in_minutes;
    //delay_in_minutes = two;
    
    delay_e delay_in_seconds;
    delay_in_seconds = one;

    
    /* S03. The member functions of class W can use the private components of class A. */
    if(l_on)
    {
        m_priv_W = o_A.m_priv_A = 1;
        std::cout<<"light on\n";
    }
    else
    {
        m_priv_W = o_A.m_priv_A = 0;
        std::cout<<"light off\n";
    }
}

/* S08. Definition of a static data-member of class W nested within class A - must be outside the class body.*/
int A::W::interval = 100;

void A::set(int l_on)
{
    oWew.set(l_on);
}

int main()
{
    A l;
    l.set(1);
    l.set(0);

    return 0;
}