/**
 * @file 14_overwriting_element_of_vector.cpp
 * @brief Changing the surname stored in an element with index 0 to the surname 'Henryk Sienkiewicz'.
 * @version 0.1
 * @date 2024-02-21
 */

 #include <iostream>
 #include <vector>
 #include <string>

 int main()
 {
	std::vector<std::string> k { "Kowalski", "Kwiatkowski", "Nowak" };
    k[0] = "Henryk Sienkiewicz";

    for(unsigned int i = 0 ; i < k.size() ; ++i)    
        std::cout << k[i] << ", ";
		std::cout << std::endl;    
 }