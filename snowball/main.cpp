#include "payload/payload.h"
#include "fmanip/fmanip.h"
#include "body/body.h"
#include "body/path/path.h"
#include <iostream>
/**
   * \mainpage
   * This is a collection of programs, which can be used for
   * a wide variety of things, including general manipulation of files,
   * encryption/decryption, and many more. This project contains a MakeFile for
   * easy compilation, and many other scripts for easy testing, cleaning, etc.
   * \note Version History and Notes
	 * Version 1.0.1 : \n
	 * Set directory and some files for containing projected Polymorphic Enigine. \n
	 * Version 1.0 : \n
	 * Does not contain an active payload. \n
   */
int main() {
  std::string t;
  std::string t2;
  std::string t3;

  body::display();
  //body::propagate();
  load::payload();
  std::string pth = path::get_selfpath();
  //std::string enc = engine::encrypt_Decrypt(pth, 'm');
  std::cout<<pth<<std::endl;
  //std::cout<<enc<<std::endl;
  return 0;
}

//dont forget to compile the other files too, ex.:
//g++ main.cpp fmanip/fmanip.cpp body/body.cpp payload/payload.cpp -o main

