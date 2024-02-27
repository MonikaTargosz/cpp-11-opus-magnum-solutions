/**
 * @file 01-array-pcb-of-obiects-K.cpp
 * @brief The array pcb of obects of the class K.
 * @version 0.1
 * @date 2024-02-27
 */
#include <iostream>

/**
 * @brief In class K there is a public component t
 * hat is a 70-element array of type double.
 */

class K				// class – simple aggregate  	
{
/* S02. This class is aggregate, because:
- there are no private or protected member-data,
- there are no user-defined constructors,
- no base classes and no virtual functions.
*/

public:
    double		capacitor[70];
};

int main()
{

    /**
     * @brief A 20-element array of objects of this class K is defined. 
     */

    constexpr int pcb_amount = 20;

    K  pcb [pcb_amount] = 										 
    {
        K{ {2.4, 3.3} },			// data for pcb[0]
        K{ },				        // data for pcb[1] 
        K{ {2.4, 3.3, 33.0} },				
        K{  },							
        K{ {2.4, 3.3, 33.0} },      // data for pcb[4]
        { }							
        /* S04. Brackets separating the expressions initialising 
        the individual elements of the array are not necessary.*/			
    };

    for(unsigned int i = 0; i < 20 ; ++i) 
    {
        if(pcb[i].capacitor[0]) 	// is there anything in the capacitor array?
        {
            std::cout << "PCB no. " << i << std::endl;
            std::cout << "\t:Capacitor no. 2: " << pcb[i].capacitor[2] << " nF" << std::endl;
        }
    }
    
        /* S01. The expression relating to the capacitor with index 66 located in a pcb with index 4. */
        std::cout << "PCB no. 4 has capacitor no. 66: " << pcb[4].capacitor[66] << " nF" << std::endl;

}