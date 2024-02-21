/**
 * @file 15_adding_new_element_to_vector.cpp
 * @brief Adding a new name to the end of vector k.
 * @version 0.1
 * @date 2024-02-21
 */

 #include <iostream>
 #include <vector>
 #include <string>

 int main()
 {
	std::vector<std::string> k { "Kowalski", "Kwiatkowski", "Nowak" };
    k.push_back("Henryk Sienkiewicz");

    for(unsigned int i = 0 ; i < k.size() ; ++i)    
        std::cout << k[i] << ", ";
		std::cout << std::endl;
 }