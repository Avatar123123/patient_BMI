#include<iostream>
#include "patient_BMI.hpp"

int main()
{
    std::cout << "This program calculates Body mass index(BMI) using the height (in metres) and weight (in kg), in order to determine how healthy the person is.\n\n";
    Patient_BMI john_info("John", 1.74, 72.1); 
    Patient_BMI peter_info("Peter", 1.79, 99.11);
 
    std::cout << "Example: \n";

    john_info.display_info();
    peter_info.display_info();

    //this object is created to store user input
    Patient_BMI user_data;
    std::string user_name;
    double user_height, user_weight;


    std::cout << "Enter name: \n";
    //this will set the name for user_data
    std::cin >> user_name;
    std::cout << "\n";


    std::cout << "Enter height (in meters): \n";
    //this will set the height for user_data
    std::cin >> user_height;
    std::cout << "\n";


    
    std::cout << "Enter weight (in kilograms): \n";
    //this will set the weight for user_data
    std::cin >> user_weight;
    std::cout << "\n";

    user_data.set_name(user_name);
    user_data.set_height(user_height);
    user_data.set_weight(user_weight);

    // double calculatedValue = user_data.calculate_BMI();
    std::cout << "Your Results:\n";
    user_data.display_info();
}

