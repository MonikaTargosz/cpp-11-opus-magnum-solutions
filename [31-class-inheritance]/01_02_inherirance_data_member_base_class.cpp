#include <iostream>

/**
 * @brief Class B inherits class A, in which there is a (non-private) given-component x. 
 * In class B, there is only a member function f. 
 * To use the data member x you need to 
 */

/**
 * @brief Base class with non-private data member x
 */

class A 
{
    protected:
        int x;
    public:

        /**
         * @brief Function to set the private data member
         * 
         * @param m 
         */
        void set(int m) { x = m; }

        /**
         * @brief Function get the private data member
         * 
         * @return int 
         */
        int get() { return x; }
};

/**
 * @brief Class B inherits class A with member function f 
 * to set the non-private data member of class A
 * 
 * In the list of class origins, we set the names of the base classes.
 */

class B : public A //list of class origins
{
    public:
        void f();   
};


void B::f()
{
    set(5);
    std::cout<<get();
}

int main()
{
    B b;
    b.f();
}