#include "fmanip.h"
/**
 * This namespace contains all "basic" functions for manipulating files:
  * reading, writing and encryption
 */
namespace fmanip
{
  /**
   * This function returns the text within a file as a string
   * @param  source_file_name: Name of the file to be read, string
   * @return  Returns a string, the text in source_file_name
   */

std::string read(std::string source_file_name){
  std::ifstream source_file;
    source_file.open(source_file_name);
    std::string text;

    if(source_file.is_open()) {
        std::string line;

        text = "";
        while(getline(source_file, line)) {
            text += line + '\n'; //add a '\n' too many at the end and remove
            //later (lines below)
        }
        text = text.substr(0, text.size()-1); //this removes last caracter of
        //string which is '\n' (refer to lines above)
        //The above doesn't seem to be nessessary anymore...
        source_file.close();
    }
    else {
        std::cout << "Cannot open file for reading." << std::endl;
    }
    return text;
}

/**
 * Allows text to be written in (almost) any file.
 * @param  file_name     Written file will have the name file_name
 * @param  text_to_write String that will be written on file_name
 */
int write(std::string file_name, std::string text_to_write){
    std::ofstream file;
    file.open(file_name);
    if(file.is_open()) {
        file << text_to_write;
    }
    else {
        std::cout << "Cannot write file.";
    }
    file.close();
    return 0;
}

} //namespace fmanip
