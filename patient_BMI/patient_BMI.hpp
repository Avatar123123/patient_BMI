#include <string>

class Patient_BMI
{
    std::string name;
    double height, weight;

    public: 
    Patient_BMI();
    Patient_BMI(std::string name_entered, double height_entered, double weight_entered);

    //method to set name - DONE
    void set_name(std::string);

    //method to get name - DONE
    std::string get_name();


    //method to set height - DONE
    void set_height(double);

    //method to get height
    double get_height();


    //method to set weight - DONE
    void set_weight(double); 

    //method to get weight
    double get_weight();

    
    // method to calculate BMI
     double calculate_BMI(); 


     //mothod to display health
     std::string health_status();

   


    //method to display information 
    void display_info();

};

