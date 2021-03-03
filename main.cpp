#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <cstring>  
//using namespace std;
//implementation of classic linux command 'grep'
//int searching(char* text, char* search);
int main(int argc,char *argv[]){
   std::string text_f;
   std::string search_f;

     // INCREMENT 1 DOWN BELOW
    //comparing two strings together, if first given one includes the second one 
  if(argc == 1){
    std::cout << "Give a string from which to search for: ";
    std::getline(std::cin,text_f);
    std::cout << "Give a string to search for: ";
    std::getline(std::cin,search_f); 
      if(strstr(text_f.c_str(),search_f.c_str()))
        std::cout << "\"" << search_f << "\" FOUND in " << "\"" << text_f << "\""  << "\n\n";     
      else
        std::cout << "\"" << search_f << "\" NOT FOUND in " << "\"" << text_f << "\""  << "\n\n";
  }
  //////INCREMENT NUMBER 2 DOWN BELOW
  std::ifstream txtfile;
  std::string line;
  if(argc == 3){ 
    std::string search_ff(argv[1]);           //insert txt-file and word to search to strings
    txtfile.open(argv[2]);                   //
      if (txtfile.fail()) {                 //if argv[2] is not a file
        std::cout << "Error opening file"; //
        return(0);                        //
      }      
      while(getline(txtfile,line)){
        if(line.find(search_ff) != std::string::npos)
                std::cout << line;
        else
       std::cout <<  "\n"; 
      
      }
  } 
return(0);
} 

