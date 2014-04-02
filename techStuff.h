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
  CURL *pCurl;
  FILE *fptr;
  CURLcode codes;
  #ifdef __WIN32__
    char outfilename[256] = "%HOMEPATH%\\C++ Console\\"name;
  #elif __WIN64__
    char outfilename[256] = "%HOMEPATH%\\C++ Console\\"name;
  #elif __APPLE__
    char outfilename[256] = "~/C++ Console/"name;
  #elif __linux__
    char outfilename[256] = "$HOME/C++ Console/"name;
  #endif
  pCurl = curl_easy_init();
  if (pCurl) {
    fptr = fopen(outfilename,"wb");
    curl_easy_setopt(pCurl, CURLOPT_URL, url);
    curl_easy_setopt(pCurl,, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(pCurl,, CURLOPT_WRITEDATA, fptr);
    res = curl_easy_perform(pCurl);
    curl_easy_cleanup(pCurl);
    fclose(fptr);
  }
  return 0;
}
int runFile(std::string file) {
	std::stringstream stream;
	stream <<file ;
	system(stream.str().c_str());;
	return 0;
}
