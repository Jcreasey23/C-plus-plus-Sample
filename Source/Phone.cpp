#include <iostream>
#include <Phone.h>


// Phone Methods
// Default Constructor
Phone :: Phone()
{
       
    phoneNum = "0000000000";
    Customer_first = "No Name";
    Customer_last = "No Name";
    provider = "No Provider"; 



}   

// Overloaded constructor
Phone :: Phone(std:: string num, std:: string cust_f, std:: string cust_l, std:: string provider) 
{
    phoneNum = num;
    Customer_first = cust_f;
    Customer_last = cust_l;
    provider = provider; 

}

    // Getter Functions
    // get phone number
    std:: string Phone :: get_PhoneNum()
    {
        return phoneNum;
    }  

    // get first name
    std:: string Phone :: get_Cust_f()
    {   
        return Customer_first;
    }

    // get last name
    std:: string Phone :: get_Cust_l()
    {
        return Customer_last;
    }

    // get provider
    std:: string Phone :: get_Prov()
    {
        return provider;
    }


    // Setter Functions
    // set number
    void  Phone :: set_phoneNum(std:: string num)
    {
        phoneNum = num;
    }   

    // set first name
    void  Phone :: set_firstnm(std:: string nm)
    {
        Customer_first = nm;
    }    

    // set last name
    void  Phone :: set_lastnm(std:: string nm)
    {
        Customer_last = nm;
    }   

    // set provider
    void  Phone :: set_provider(std:: string prov)
    {
        provider = prov;
    }   