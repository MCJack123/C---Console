#include <iostream>
#include <string>
#include <sstring>
#include <curl/curl.h>
#include <curl/easy.h>

int dumpFile(std::string file) {
  std::ifstream ifs(file);
  std::string content;
	content.assign( (std::istreambuf_iterator<char>(ifs) ),
    (std::istreambuf_iterator<char>()    ) );
  return 0;
}
int download(std::string url, std::string name) {
  
}
