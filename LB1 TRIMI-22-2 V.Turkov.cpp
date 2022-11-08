#include <iostream>
using namespace std;

int main()

{
    string FirstName, LastName, YearOfBirth, GroupNumber, PhoneNumber, Skipe, Email;
    cout << "FirstName: ";
    getline(cin, FirstName);
    cout << "LastName: ";
    getline(cin, LastName);
    cout << "Year Of Birth: ";
    getline(cin, YearOfBirth);
    cout << "Group Number: ";
    getline(cin, GroupNumber);
    cout << "Phone Number: ";
    getline(cin, PhoneNumber);
    cout << "Skipe: ";
    getline(cin, Skipe);
    cout << "Email: ";
    getline(cin, Email);
    cout << "\nFirstName: ", cout << FirstName, cout << "\nLastName: ", cout << LastName, cout << "\nYear Of Birth: ", cout << YearOfBirth, cout << "\nGroup Number: ", cout << GroupNumber, cout << "\nPhone Number: ", cout << PhoneNumber, cout << "\nSkipe: ", cout << Skipe, cout << "\nEmail: ", cout << Email;


    return 1;
}
