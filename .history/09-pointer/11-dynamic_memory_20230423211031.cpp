#include <iostream>

using namespace std;

int main()
{
    /*
    int *p_int{nullptr};
    p_int = new int;
    cout << p_int << endl;
    cout << *p_int << endl;
    *p_int = 100;
    cout << *p_int << endl;
    delete p_int;

    cout << p_int << endl;
    cout << *p_int << endl;
    p_int = nullptr;
    */

    //    initilize with new upon pointer declaration
    int *p_number5{new int};
    int *p_number6{new int(6)};
    int *p_number7{new int{7}};

    cout << *p_number5 << endl;
    cout << *p_number6 << endl;
    cout << *p_number7 << endl;

    delete p_number5;
    delete p_number6;
    delete p_number7;

    p_number5 = nullptr;
    p_number6 = nullptr;
    p_number7 = nullptr;

    return 0;
}
