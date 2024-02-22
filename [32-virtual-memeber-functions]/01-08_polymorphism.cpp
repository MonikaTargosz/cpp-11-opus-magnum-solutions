#include "01-08_polymorphism.h"

#include <iostream>

void f_ref(K &ref_k, double l_m);
void f_ptr(K *ptr_k, double l_m);

int main()
{
    
    K k;
    M m;
    
    /** S03. Polymorphism related to the virtuality of a member function f occurs in the case of */
    
    std::cout<<"a) obiect.f()\n";
    k.f(2.1);
    m.f(2.14);
    
    std::cout<<"b) pointer->f()\n";
    
    K *p_k;
    p_k = &k;
    p_k->f(3.50);
    
    M *p_m;
    p_m = &m;
    p_m->f(3.552);
    
    std::cout<<"c) reference.f()\n";
    
    /** S04. Calling a virtual function shows different forms. */
    
    /** S08. The result type of the new virtual function implementation 
    should be identical to that of the base class 
    or in the form of a pointer/reference to an object of the derived class.*/
    
    f_ref(k,5.10);
    f_ref(m,5.099);
    
    f_ptr(&k,5.10);
    f_ptr(&m,5.099);
    
    const unsigned int tab_size = 2;
    
    K *t_k[tab_size] = {&k, &m};
    
    std::string tab_str[tab_size] = {"identical to that of the base class\n", "in the form of a pointer to an object of the derived class\n"};
    
    std::cout<<"The result type of the new virtual function implementation is:\n";
    
    for(unsigned int i = 0 ; i < tab_size; ++i)    
    {
        std::cout<<tab_str[i];
        t_k[i]->f(1.23);
    }

    return 0;
}

void f_ref(K &ref_k, double l_m)
{
    ref_k.f(l_m);
}

void f_ptr(K *ptr_k, double l_m)
{
    ptr_k->f(l_m);
}
