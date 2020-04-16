#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
struct classes{
    classes(){};

    ~classes(){};

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
void display(classes inClasses[8][3]);
std::vector<int> GetRandomConflict(classes inClasses[8][3]);
int CountConflicts(classes inClasses[8][3]);

int main() {
    int maxSteps= 10000;
    MinConflicts(maxSteps);

    return 0;
}


std::vector<int> GetRandomConflict(classes inClasses[8][3]){
    std::vector<int> indices = {0,0};
    std::vector<int> x;
    std::vector<int> y;
    for(int i = 0; i  < 8; i++){
        if( inClasses[i][0].name !=  "" && inClasses[i][1].name !=  "" && inClasses[i][0].name.at(2) == inClasses[i][1].name.at(2) && inClasses[i][0].name.at(2) != '5'){
            x.push_back(i);
            y.push_back(0);
        }
        else if (inClasses[i][0].name !=  "" && inClasses[i][2].name !=  "" && inClasses[i][0].name.at(2) == inClasses[i][2].name.at(2) && inClasses[i][0].name.at(2) != '5'){
            x.push_back(i);
            y.push_back(2);
        }
        else if (inClasses[i][1].name !=  "" && inClasses[i][2].name !=  "" && inClasses[i][1].name.at(2) == inClasses[i][2].name.at(2) && inClasses[i][1].name.at(2) != '5') {
            x.push_back(i);
            y.push_back(1);
        }

    }
    int r = rand() % x.size();
    indices.at(0) = x.at(r);
    indices.at(1) = y.at(r);
    return indices;
}

int CountConflicts(classes inClasses[8][3]){
    int  conflicts = 0;
    for(int i = 0; i  < 8; i++){
        if( inClasses[i][0].name !=  "" && inClasses[i][1].name !=  "" && inClasses[i][0].name.at(2) == inClasses[i][1].name.at(2) && inClasses[i][0].name.at(2) != '5'){
            conflicts++;
        }
        else if (inClasses[i][0].name !=  "" && inClasses[i][2].name !=  "" && inClasses[i][0].name.at(2) == inClasses[i][2].name.at(2) && inClasses[i][0].name.at(2) != '5'){
            conflicts++;
        }
        else if (inClasses[i][1].name !=  "" && inClasses[i][2].name !=  "" && inClasses[i][1].name.at(2) == inClasses[i][2].name.at(2) && inClasses[i][1].name.at(2) != '5') {
            conflicts++;
        }
    }
    return conflicts;
}

void MinConflicts(int maxSteps) {
    classes variables[8][3] = {
            {classes("MT101"), classes("MT102"), classes("MT403")},
            {classes("MT104"), classes("MT105"), classes("MT106")},
            {classes("MT107"), classes("MT201"), classes("MT202")},
            {classes("MT203"), classes(""), classes("MT205")},
            {classes("MT206"), classes("MT301"), classes("MT302")},
            {classes("MT303"), classes("MT304"), classes("MT401")},
            {classes("MT402"), classes("MT103"), classes("")},
            {classes("MT501"), classes("MT204"),      classes("MT502")},
    };


    int steps = 0;
    int conflicts = CountConflicts(variables);
    int tempConflicts = 9999;
    std::vector<int> tempIndex = {0, 0};
    std::string temporaryName;
    classes tempVariables[8][3];

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 3; ++j) {
            tempVariables[i][j] = variables[i][j];
        }
    }


    while (steps != maxSteps && conflicts != 0) {

        tempIndex.at(0) = rand() % 8;
        tempIndex.at(1) = rand() % 3;

        std::vector<int> index = GetRandomConflict(variables);

        temporaryName = tempVariables[index.at(0)][index.at(1)].name;

        tempVariables[index.at(0)][index.at(1)] = tempVariables[tempIndex.at(0)][tempIndex.at(1)];

        tempVariables[tempIndex.at(0)][tempIndex.at(1)].name = temporaryName;

        tempConflicts = CountConflicts(tempVariables);

        if (tempConflicts < conflicts) {
            for (int i = 0; i < 8; ++i) {
                for (int j = 0; j < 3; ++j) {
                    variables[i][j] = tempVariables[i][j];
                }
            }
            std::cout << tempConflicts <<std::endl;
            conflicts = tempConflicts;
            if(conflicts == 1){
                conflicts++;
            }
        }
        else {
            for (int i = 0; i < 8; ++i) {
                for (int j = 0; j < 3; ++j) {
                    tempVariables[i][j] = variables[i][j];
                }
            }

        }
        steps++;
    }
    display(variables);
}

void display(classes inClasses[8][3]){
    std::cout << "TP51" <<", "<< "SP34" <<", "<< "K3" <<std::endl;
    int counter = 9;
    for(int i = 0; i < 8; i++){
        if(counter >12){
            counter = 1;
        }
        std::cout <<std::setw(3)<<counter<<" "<< inClasses[i][0].name <<", "<< inClasses[i][1].name <<", "<< inClasses[i][2].name<<std::endl;
        counter++;
    }
}
