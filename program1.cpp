#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string name;
    int year, month, day;
    
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your birthdate (YYYY MM DD): ";
    cin >> year >> month >> day;
    
    time_t t = time(0);
    tm* now = localtime(&t);
    
    int age = now->tm_year + 1900 - year - ((now->tm_mon + 1 < month) || (now->tm_mon + 1 == month && now->tm_mday < day));
    
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    
    return 0;
}
