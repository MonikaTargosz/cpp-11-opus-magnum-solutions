#include <iostream>

class A
{
    int m_priv_A;
    
    class W
    {
        int m_priv_W;
        public:
    
            void set(int l_on)
            {
                A o_A;
                
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
    };
    
    W oWew;
    
    public:
        
        void set(int l_on);
        
    
};

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