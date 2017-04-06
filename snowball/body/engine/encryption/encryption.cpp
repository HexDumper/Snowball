#include "encryption.h"
/**
 * @brief This namespace contains the components of Snowball's Polymorphic Engine.
 */
namespace engine {

 /**
   * @brief This function allows the encryption and decryption of text.
   * @param  toEncrypt This is the text that is to be encrypted or decrypted
   * @param  key       Key used for XOR encryption
   * @return           Tthe encrypted or decrypted string
   */
std::string encrypt_Decrypt(std::string toEncrypt, char key){
  std::string output = toEncrypt;
  int numberStart = 0; //Find a way not to encrypt engine itself

   for (int i = numberStart; i < toEncrypt.size(); i++){
     output[i] = toEncrypt[i] ^ key;
     //key += 1; //can't use it in "interface..."
   }
  return output;
}
/**
 * @brief Allows the user to get a random character.
 * @return A random character used as a key for encrypt_Decrypt
 */
char getRandom() {
  char c;
    int r;
    srand(time(NULL));    // initialize the random number generator
    for (int i = 0; i < 1000; i++)
    {    r = rand() % 26;   // generate a random number
          c = 'a' + r;            // Convert to a character from a-z
    }
    return c;
}

} //namespace engine
