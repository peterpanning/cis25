#include <iostream>

using namespace std;


//Function Prototypes

void callMenu(void);
void getInts(int);
int* extractUncommonDigitPeterMutch(int*, int)


int main()
{
    callMenu();
    return 0;
}



void callMenu() {

    int menuChoice;

    do {
        cout << "\n************************************************\n"
            "*            MENU 04                           *\n"
            "*  1. Calling extractUncommonDigitPeterMutch() *\n"
            "*  2. Quit                                     *\n"
            "************************************************\n"

            "Select an option (1 or 2): ";

        cin >> menuChoice;

        switch (menuChoice) {
        case 1:
            getInts();
            break;
        case 2:
            cout << "\nHaving Fun..." << endl;
            break;
        default:
            cout << "\nWRONG OPTION!\n" << endl;
        }
    } while (menuChoice != 2);
}

void getInts(){

    int *ary;
    int **returnedAry;
    int i;
    int size;

    cout << "\n  How many integers? ";
    cin >> size;
    ary = new int[size];
    for(i = 0; i < size; i++){
        cout << "Enter integer #" << i + 1 << ": ";
        cin >> *(ary + i);
    }

    cout << "  The original array:";
    for (i = 0; i < size; i++){
        cout << "\n  " << *(ary + i);
    }

    cout << "  Calling extractUncommonDigitPeterMutch() --";

    returnedAry = extractUncommonDigitPeterMutch(ary, size);

    cout << "\n  Displaying after returning the array -- the uncommon digits:";
    cout << "\n    There is/are " << *(*(returnedAry)) << " uncommon digit(s)";
    for (i = 1; i < *(*(returnedAry)); i++) {
        cout << "\n  " << *(*(returnedAry + i));
    }
}

