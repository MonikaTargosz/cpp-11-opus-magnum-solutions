#include <iostream>

class Lamp
{
    class Bulb;
    Bulb *ptr_b;
    
    public:
        
        void set(int l_on);
        
    
};

class Lamp::Bulb
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

void Lamp::set(int l_on)
{
    ptr_b = new Bulb;
    ptr_b->set(l_on);
    delete ptr_b;
}

int main()
{
    Lamp l;
    l.set(1);
    l.set(0);

    return 0;
}