#ifndef BSORT_H
#define BSORT_H
#include <string>
#include <cstring>

using namespace std;

class bsort
{
    public:
        bsort();
        virtual ~bsort();
        void bubble_sort(string*, int);
        void read(string*);
        void display(string*,int);
    protected:
    private:
};

#endif // BSORT_H
