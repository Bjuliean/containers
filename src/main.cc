#include <iostream>
#include "vector/vector.hpp"
#include "list/list.hpp"

#define SIZE 100

class loler {
public:
    loler() {
        a = new int[SIZE]();
        b = new char[SIZE]();
        c = new double[SIZE]();
    }

    loler(size_t n) {
        a = new int[SIZE]();
        b = new char[SIZE]();
        c = new double[SIZE]();
        a[0] = (int)n;
    }

    loler(const loler& l) {
        a = new int[SIZE]();
        b = new char[SIZE]();
        c = new double[SIZE]();
    }

    ~loler() {
        delete [] a;
        delete [] b;
        delete [] c;
    }

private:
    int *a;
    char *b;
    double *c;
};

int main() {

// s21::list<int> a = {1, 2, 3, 4};

// for(int i = 0; i < 10; i++)
//     a.push_front(i);

// a.out();

// std::cout << "======================" << std::endl;

// a.pop_back();
// a.pop_front();
// a.out();

s21::list<int> a = {1};

//a.pop_front();

a.out();




//vector
    // s21::vector<int> a;

    // for(int i = 0; i < 17; i++)
    //     a.push_back(i);

    // a.pop_back();

    // a.reserve(100);

    // s21::vector<int>::iterator it = a.begin();

    // it += 3;

    // a.insert(it, 123);

    // it = a.end();

    // it -= 3;

    // a.erase(it);

    // //a.out();

    // s21::vector<int> b(a);

    // for(int i : b)
    //     std::cout << b[i] << std::endl;

    return 0;
}

