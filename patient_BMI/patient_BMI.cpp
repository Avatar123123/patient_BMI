#include <iostream>
#include "patient_BMI.hpp"
#include <cmath>

Patient_BMI::Patient_BMI(std::string name_entered, double height_entered, double weight_entered)
{
    name = name_entered;
    height = height_entered;
    weight = weight_entered;
}
Patient_BMI::Patient_BMI(){}

//method to set name
void Patient_BMI::set_name(std::string nameInfo)
{
    name = nameInfo;
}

// method to get name
std::string Patient_BMI::get_name()
{
    return name;
}

//method to set height
void Patient_BMI::set_height(double heightInfo)
{
    height = heightInfo;
}

//method to get height
double Patient_BMI::get_height()
{
    return height;
}

//method to set weight
void Patient_BMI::set_weight(double weightInfo)
{
    weight = weightInfo;
}

//method to get weight
double Patient_BMI::get_weight()
{
    return weight;
}

//method to calculate BMI
double Patient_BMI::calculate_BMI()
{
    return get_weight()/std::pow(get_height(), 2);
}

std::string Patient_BMI::health_status()
{
    if (calculate_BMI() < 18.5)
    {
        return "Underweight";
    } else if (calculate_BMI() < 25)
    {
        return "Normal";
    } else if (calculate_BMI() < 30)
    {
        return "Overweight";
    } else 
    {
        return "Obese";
    }
}

//method to display information 
void Patient_BMI::display_info()
{
    std::cout << "Name: " << get_name() << "\n";
    std::cout << "Height " << get_height() << " m\n";
    std::cout << "Weight: " << get_weight() << " kg\n";
    std::cout << "Calculated BMI: " << calculate_BMI() << " kg/m^2\n";
    std::cout << "Health Status: " << health_status() + "\n\n";
}












