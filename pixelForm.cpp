#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){
    if(argc!=4){
        std::cerr<<"ERROR! Correct usage is ./pixelForm fromFile toFile isLast"
    }
    else{
        ofstream myfile.open(argv[2]);
        ifstream frofile.open(argv[1]);
        getline.(frofile,myText);
        myfile<<mytext;
        if(argv[3]=="y"||argv[3]=="Y"){
            myfile<<"],";
        }
        else{
            myfile<<"]}";
        }
        
    }

}
