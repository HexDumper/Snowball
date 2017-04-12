#include "path.h"


/**
 * @brief This namespace contains functions that allow the user obtain paths, especially of
 *  executables.
 */
namespace path {
/**
   * @brief Gets the path of executable, depending on the operating system it was compiled for.
   * @return A string, the path of the executed executable.
   */
std::string get_selfpath() {
  std::string final_path;
  if (getOsName() == "Linux" || getOsName() == "Unix") {
    char buff[PATH_MAX];
    ssize_t len = ::readlink("/proc/self/exe", buff, sizeof(buff)-1);
    if (len != -1) {
      buff[len] = '\0';
      final_path =  std::string(buff);
    }
  }
//  else if (getOsName() == "Mac OSX") {
//    char path[1024];
//    uint32_t size = sizeof(path);
//    if (_NSGetExecutablePath(path, &size) == 0) {
//      final_path = path;
//    }

//  }
  // else if (getOsName() == "Windows 32-bit" || getOsName() == "Windows 64-bit") {
  //   final_path = GetModuleFileName();
  // }

  return  final_path;

}

/**
   * @brief Gets the path Name of the operating system. Also includes
   * "Whindows.h" if needed.
   * @return A string, the name of OS.
   */
std::string getOsName() {
    #ifdef _WIN32
    #include "Windows.h"
    return "Windows 32-bit";
    #elif _WIN64
    return "Windows 64-bit";
    #include "Windows.h"
    #elif __unix || __unix__
    return "Unix";
    #elif __APPLE__ || __MACH__
    return "Mac OSX";
    #include <mach-o/dyld.h>
    #elif __linux__
    return "Linux";
    #elif __FreeBSD__
    return "FreeBSD";
    #else
    return "Other";
    #endif
}
} //namespace path

/*int main()
{
  std::string selfpath = get_selfpath();
  std::cout << selfpath << std::endl;
  return 0;
}*/
