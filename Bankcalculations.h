#ifndef bankCalculations
#define bankCalculations
#include <cmath>

class Bank{
    private:
    double principal_amt=10000; // The amount is in rupees
    double interest_rate=5; // The rate is in percent
    int tenure=10; // Tenure is in years

    public:
    // defining getter functions 
    
    double get_principal_amt()const{
        return principal_amt;
    }
    double get_interest_rate()const{
        return interest_rate;
    }
    int get_tenure()const{
        return tenure;
    }
    // defining the setter function

    void set_Bank(double adj_principal_amt=10000, double adj_interest_rate=5, int adj_tenure=10){
        this->principal_amt=adj_principal_amt;
        this->interest_rate=adj_interest_rate;
        this->tenure=adj_tenure;
    }

    // FD calculations

    double FD_amount() const { 
        double rate_decimal = this->interest_rate / 100.0; // Accessing member variable
        return this->principal_amt * std::pow((1 + rate_decimal), this->tenure); // Accessing member variables
    }

};


#endif