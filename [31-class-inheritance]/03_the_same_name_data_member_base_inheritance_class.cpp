
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
 */

class B : public A
{
    private: 
        int x;
    public:
        void f();   
};

void B::f()
{
    set(5);
    std::cout<<"x of basic class (A) is: "<<get()<<"\n";
    x = 10;
    std::cout<<"x of inheritance class (B) is: "<<x;
}

int main()
{
    B b;
    b.f();
}