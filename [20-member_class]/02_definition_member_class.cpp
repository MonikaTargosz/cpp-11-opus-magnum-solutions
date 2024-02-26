#include <iostream>

class A
{
    class Wew
    {
        public:
    
            void set(int l_on)
            {
                if(l_on)
                {
                    std::cout<<"light on\n";
                }
                else
                {
                    std::cout<<"light off\n";
                }
            }
    };
    
    Wew oWew;
    
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