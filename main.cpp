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
    int maxSteps= 100;
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

void MinConflicts(int maxSteps){
    classes variables[8][3] = {
            {classes("MT101"),classes("MT102"),classes("MT403")},
            {classes("MT104"),classes("MT105"),classes("MT106")},
            {classes("MT107"),classes("MT201"),classes("MT202")},
            {classes("MT203"),classes("MT204"),classes("MT205")},
            {classes("MT206"),classes("MT301"),classes("MT302")},
            {classes("MT303"),classes("MT304"),classes("MT401")},
            {classes("MT402"),classes("MT103"),classes("MT501")},
            {classes("MT502"),classes(""),classes("")},
    };


  int steps = 0;
  int conflicts = CountConflicts(variables);
  int tempConflicts = 9999;
  std::vector<int> tempIndex = {0,0};

  classes tempVariables[8][3];
  std::copy(std::begin(tempVariables), std::end(tempVariables), std::begin(variables));



  while(steps != maxSteps){

      tempIndex.at(0) = rand() % 8;
      tempIndex.at(1) = rand() % 3;
      std::cout << tempIndex.at(0) <<", " <<tempIndex.at(1) <<std::endl;
      std::vector<int> index =GetRandomConflict(variables);

    break;
      if(conflicts == 0){
          display(variables);
          break;
      }
      steps++;
  };

}


void display(classes inClasses[8][3]){
    std::cout << "TP51" <<", "<< "SP34" <<", "<< "K3" <<std::endl;
    for(int i = 0; i < 8; i++){
        std::cout <<i<<" "<< inClasses[i][0].name <<", "<< inClasses[i][1].name <<", "<< inClasses[i][2].name<<std::endl;
    }
}
