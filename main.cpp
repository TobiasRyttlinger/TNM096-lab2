#include <iostream>
#include <vector>
#include <string>
bool MinConflicts();
void display(std::string output);


int main() {
    MinConflicts();

    return 0;
}
bool MinConflicts(){
    std::vector<std::string> classes {"MT101", "MT102","MT103","MT104","MT105","MT106","MT107","MT201","MT202","MT203","MT204","MT205","MT206","MT301","MT302","MT303","MT304","MT401","MT402","MT403","MT501","MT502"};
    std::string variables[8][3] = {{classes[1],classes[2],classes[3]}, {classes[4],classes[5],classes[6]}, {classes[7],classes[8],classes[9]}, {classes[10],classes[11],classes[12]}, {classes[13],classes[14],classes[15]}, {classes[16],classes[17],classes[18]}, {classes[19],classes[20],classes[21]}, {classes[22],"0","0"}};
    display("hej");


}

void display(std::string output){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 3; j++){
            std::cout<< output[j];
        }
    }
}

