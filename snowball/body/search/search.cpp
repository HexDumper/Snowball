#include "search.h"

using namespace std;

/**
 * This namespace contains functions that allow the user to search directories.
 */
namespace search {
  /**
   * getdir() Scans the current working directory, gets the names of the files contained
   * within it, opens and writes into those files.
   * @param dir : a string corresponding to the directory to be searched;
   * files : a vector<string> corresponding to the array of the names of the files
   * contained within the scanned directory.
   * @return Technically returns an integer, but the "files" parameter can be used
   * like just like an ordinary array.
   */
int getdir(string dir, vector<string> &files)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(dirp->d_name));
    }
    closedir(dp);
    return 0;
}
}//namespace search
/* Exec ecample :
int main()
{
    string dir = string(".");
    vector<string> files = vector<string>();

    getdir(dir,files);

    for (unsigned int i = 0;i < files.size();i++) {
        cout << files[i] << endl;
    }
    return 0;
}
*/
