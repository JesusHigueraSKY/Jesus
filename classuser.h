#ifndef USER_H
#define USER_H
#include <string>
using namespace std;


class User {
    private:
        string name;
        int age;

    public:
        User(string name, int age);
        string getName();
        int getAge();
};

#endif
