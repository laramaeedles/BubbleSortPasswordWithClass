#include "bsort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string passwords[100];
    int n=100;
    bsort bsort;
    bsort.read(passwords);
    bsort.bubble_sort(passwords,n);
    bsort.display(passwords,n);
    return 0;
}
