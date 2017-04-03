#include "encryption.h"
namespace engine {
 /**
   * This function allows the encryption and decryption of text.
   * @param  toEncrypt This is the text that is to be encrypted or decrypted
   * @param  key       Key used for XOR encryption
   * @return           Tthe encrypted or decrypted string
   */
std::string encrypt_Decrypt(std::string toEncrypt, char key){
  std::string output = toEncrypt;

   for (int i = 0; i < toEncrypt.size(); i++){
     output[i] = toEncrypt[i] ^ key;
     //key += 1; //can't use it in "interface..."
   }
  return output;
}
/**
 * Allows the user to get a random character.
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
