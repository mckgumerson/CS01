// Find the sub string in the original string

#include <iostream>
using namespace std;

int finduserstring(char[], int, char[], int);
int main() {
        int cstrlen, userlen, position;
        char cstr[] = "Chocolate";
        char userstr[100];

        cstrlen = strlen(cstr);
        cin >> userstr;
        userlen = strlen(userstr);

        position = finduserstring(cstr, cstrlen, userstr, userlen);
        if (position != -1)
                cout << "Found your string at : " << position << endl;
        else
                cout << "Not found\n";
}
int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen) {
}