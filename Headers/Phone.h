#include <iostream>


class Phone
{
private:
    std:: string phoneNum;  // String in format (###) ### - ####

    std:: string Customer_first;    // Customer First name
    std:: string Customer_last;     // Customer Last name

    // Establish type of phone?

    // Establish Provider Name
    std:: string provider;



public:

    Phone();    // Default Constructor

    Phone(std:: string num, std:: string cust_f, std:: string cust_l, std:: string provider); // Overloaded constructor


    // Getter Functions
    std:: string get_PhoneNum();    // get phone number

    std:: string get_Cust_f();  // get first name

    std:: string get_Cust_l();  // get last name

    std:: string get_Prov();    // get provider


    // Setter Functions
    void set_phoneNum(std:: string num);    // set number

    void set_firstnm(std:: string nm);      // set first name

    void set_lastnm(std:: string nm);       // set last name

    void set_provider(std:: string prov);   // set provider


};