#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <fstream>
#include <string>
#include <iostream>
#include <cstdio>
#include <random>

namespace engine {
std::string encrypt_Decrypt(std::string toEncrypt, char key);
char getRandom();
} //namespace engine
#endif


