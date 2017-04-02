#ifndef SEARCH_H
#define SEARCH_H
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>
namespace search {
int getdir (std::string dir, std::vector<std::string> &files);
}//namespace search
#endif
