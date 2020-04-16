#include <iostream>
#include <vector>
#include <string>

struct classes{
    classes(){};
    ~classes();

    classes(std::string inClass){
        name = inClass;
    };
    void isConflicted(){
        Conflicted = 10000;
    }

    int Conflicted;
    std::string name;

};

void MinConflicts(int maxSteps);
void display(std::string output);
std::vector<int> GetRandomConflict(classes inClasses);


int main() {
    int maxSteps= 100;
    MinConflicts(maxSteps);

    return 0;
}


std::vector<int> GetRandomConflict(classes inClasses){
    std::vector<int> indices = {0,0};
    std::cout << inClasses.name <<std::endl;
    for(int i = 0; i  < 8; i++){

    }


    return indices;

}




void MinConflicts(int maxSteps){
    classes variables[8][3] = {
            {classes("MT101"),classes("MT102"),classes("MT103")},
            {classes("MT104"),classes("MT105"),classes("MT106")},
            {classes("MT107"),classes("MT201"),classes("MT202")},
            {classes("MT203"),classes("MT204"),classes("MT205")},
            {classes("MT206"),classes("MT301"),classes("MT302")},
            {classes("MT303"),classes("MT304"),classes("MT401")},
            {classes("MT402"),classes("MT403"),classes("MT501")},
            {classes("MT502"),classes(" "),classes(" ")},
    };

    std::vector<int> index=GetRandomConflict(variables[7][2]);
}

