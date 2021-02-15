#include <string>
#include <fstream>
#include <iostream>
#include <vector>
//using namespace std;
//implementation of classic linux command 'grep'
int main(int argc,char *argv[]){
   std::string text, search;
    std::cout << "argc: " << argc << "\nargv1: " << argv[1] << std::endl;
    if (argc = 2){
        char file[100];
        text = argv[1];
      std::ifstream filu("my_grep_plain_ASCII.txt");
       filu.open("man_grep_plain_ASCII.txt");
       
       
        filu >> file;
        std::cout << file;
       return(0);
    } 
    /*cout << "Give a string from which to search for: ";
    cin >> text;
    cout << "Give a search string: ";
    cin >> search;
    cout << text << "   " << search << endl; */

    return 0;
} 