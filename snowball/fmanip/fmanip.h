//Author: 1nn3r5493

#ifndef FMANIP_H
#define FMANIP_H

#include <fstream>
#include <string>
#include <iostream>
#include <cstdio>
#include <random>

namespace fmanip
{
std::string read(std::string source_file_name);
int write(std::string file_name, std::string text_to_write);
std::string encrypt_Decrypt(std::string toEncrypt, char key);
char getRandom();
} //namespace fmanip
#endif
