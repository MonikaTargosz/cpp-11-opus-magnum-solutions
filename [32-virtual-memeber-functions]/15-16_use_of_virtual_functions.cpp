#include "15-16_use_of_virtual_functions.h"

#include <iostream>

void f_ref(K &ref_k);
void f_ptr(K *ptr_k);

int main()
{
    
    K k;
    M m;
    N n;
    
    /** S03. Polymorphism related to the virtuality of a member function f occurs in the case of */
    
    std::cout<<"S15. No virtual function definition in derived class\n";
    
    std::cout<<"a) pointer->f()\n";
    
    const unsigned int tab_size = 2;
    
    K *t_k[tab_size] = {&k, &m};
    
    for(unsigned int i = 0 ; i < tab_size; ++i)    
    {
        t_k[i]->print();
    }
    
    std::cout<<"b) reference.f()\n";
    
    f_ref(k);
    f_ref(m);
    
    
    std::cout<<"\nS16. With virtual function definition and private access in derived class N\n";
    
    
    K *t2_k[tab_size] = {&k, &n};
    //N *t_n[tab_size] = {&k, &n};
    
    std::string str_class[tab_size] = {"K","N"};
    std::string str_typ_pointer[tab_size] = {"K *","N *"};
    std::string str_result[tab_size] = {"invalid conversion from K* to N*\n","print() is private memeber function for class N\n"};
    
    for(unsigned int i = 0 ; i < tab_size; ++i)    
    {
        std::cout<<"an object of class "<< str_class[0] << " shown by a pointer of type " << str_typ_pointer[i] <<"\n";
        t2_k[i]->print();
    }
    
    for(unsigned int i = 0 ; i < tab_size; ++i)    
    {
        std::cout<<"an object of class "<< str_class[1] << " shown by a pointer of type " << str_typ_pointer[i] <<"\n";
        std::cout<<str_result[i];
    }

    return 0;
}

void f_ref(K &ref_k)
{
    ref_k.print();
}

void f_ptr(K *ptr_k)
{
    ptr_k->print();
}
