#include <iostream>
#include <Phone.h>
#include <vector>


//////////////////////////
// Start Main
//////////////////////////
int main()
{
    std:: vector<Phone> phones;

    Phone reg = Phone();
    phones.push_back(reg);

    std:: cout << reg.get_Cust_f() << std:: endl;

    Phone set_up = Phone("(123) 456-7890", "John", "Doe", "Verizon");
    phones.push_back(set_up);

    std:: cout << set_up.get_Cust_f() << std:: endl;


    // Have user enter phone info
    Phone user_phone;
    std:: string userin;

    std:: cout << "Please enter phone number in format '(XXX) XXX-XXX' " << std:: endl;
    std:: cin >> userin;
    user_phone.set_phoneNum(userin);

    std:: cout << "Please enter your first name" << std:: endl;
    std:: cin >> userin;
    user_phone.set_firstnm(userin);

    std:: cout << "Please enter your last name" << std:: endl;
    std:: cin >> userin;
    user_phone.set_lastnm(userin);

    std:: cout << "Please enter your service provider" << std:: endl;
    std:: cin >> userin;
    user_phone.set_firstnm(userin);

    phones.push_back(user_phone);

    

return 0;
}
/////////////////////////
// End Main
////////////////////////