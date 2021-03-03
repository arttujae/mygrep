#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <cstring>  
//using namespace std;
//implementation of classic linux command 'grep'
//int searching(char* text, char* search);
//int search_from_file(const char* string, const char* file_as_string);
int main(int argc,char *argv[]){
  int pos = -1;
   std::string text_f;
   std::string search_f;

     // INCREMENT 1 DOWN BELOW
    //comparing two strings together, if first given one includes the second one 
    if(argc == 1){
      std::cout << "Give a string from which to search for: ";
      std::getline(std::cin,text_f);
      std::cout << "Give a string to search for: ";
      std::getline(std::cin,search_f); 
        if(strstr(text_f.c_str(),search_f.c_str())){
          std::cout << "\"" << search_f << "\" FOUND in " << "\"" << text_f << "\""  << "\n\n";
        }
        else
      std::cout << "\"" << search_f << "\" NOT FOUND in " << "\"" << text_f << "\""  << "\n\n";
      }

  //////INCREMENT NUMBER 2 DOWN BELOW
  std::string s;
  std::string file_as_string;
  std::ifstream txtfile;
    if(argc == 3){
      std::string search_ff(argv[1]);           //insert txt-file and word to search to strings
      txtfile.open(argv[2]);                   //
        if (txtfile.fail()) {                 //if argv[2] is not a file
          std::cout << "Error opening file"; //
          return(0);                        //
        }                                  //
      while(!txtfile.eof()){              //
	      getline(txtfile, s);             //
	      file_as_string += s + "\n";     //
      }
      //search_from_file(search_ff.c_str(), file_as_string.c_str());
  std::string line;
      while(getline(txtfile,line)){
        if(strstr(txtfile.c_str(),search_ff.c_str()))
        std::cout << line;
      }
  }
return(0);
} 
  /*int search_from_file(const char* string, const char* file_as_string){
    char* s =
    while()

return 0;
}
*/
