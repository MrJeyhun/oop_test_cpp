#include <iostream>
#include "Person.h"

using namespace std;

main()
{
    Person frank;
    Person hero;

//    frank.name = "Frank";
//    frank.balance = 125.5;
    cout << frank.get_name();
    frank.get_balance();
    frank.add_balance(1.5);
    frank.get_balance();

    return 0;
}
