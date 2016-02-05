/*
Peter Mutch
2015-10-6
CIS 6
Prof. Val
Lab 4.1 Ex. 1
Signature: Valar morghulis
*/


#include <iostream>

using namespace std;

int main()
{
    int num1, num2 = 5;

    cout << "Valar morghulis\n" << endl;

    cout << "Please enter an integer" << endl;
    cin >> num1;
    cout << "num1 = " << num1 << " and num2 =  " << num2 << endl;

    if (num1 == num2)
    {
        cout << "Hey, that's a coincidence!" << endl;
    }

    if (num1 != num2) cout << "The values are not the same" << endl;

    return 0;
}


