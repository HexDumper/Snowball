#include "path.h"
/**
 * @brief This namespace contains functions that allow the user obtain paths, especially of
 *  executables.
 */
namespace path {
/**
   * @brief Gets the path of executable. This function si optimized for Linux; for
   * MacOS, use _NSGetExecutablePath() from <mach-o/dyld.h>
   * @return A string, the path of the executed executable.
   */
std::string get_selfpath() {
    char buff[PATH_MAX];
    ssize_t len = ::readlink("/proc/self/exe", buff, sizeof(buff)-1);
    if (len != -1) {
      buff[len] = '\0';
      return std::string(buff);
    }
    /* handle error condition */
}
} //namespace path

/*int main()
{
  std::string selfpath = get_selfpath();
  std::cout << selfpath << std::endl;
  return 0;
}*/
