// http://zetcode.com/db/sqlitec/
// test mini-projet SN2 27/11/2020

#include <stdio.h>
#include <iostream>
#include "sqlite3.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    printf("%s\n", sqlite3_libversion());
    return 0;
}
