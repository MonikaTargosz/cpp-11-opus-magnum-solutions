/**
 * @file 16_range-base_for_loop.cpp
 * @brief A range for loop that will output all the names in the k vector one by one, 
 * and at the same time add a "- not coming" to each of them. 
 * It will then output the contents of this vector again, this time with a simple for.
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

    for(auto & i : k)    
        std::cout << i << "- not coming " << std::endl;
 }