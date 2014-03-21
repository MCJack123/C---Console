#define CURL_STATICLIB
#include <stdio.h>
#include <curl/curl.h>
#include <curl/types.h>
#include <curl/easy.h>
#include <string>

size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written;
    written = fwrite(ptr, size, nmemb, stream);
    return written;
}

int download(char *url, std::string name) {
    CURL *pCurl;
    FILE *fptr;
    CURLcode codes;
    #ifdef __WIN32__
      char outfilename[256] = "%HOMEPATH%\My Downloads\C---Console-master\"name;
    #elif __WIN64__
      char outfilename[256] = "%HOMEPATH%\My Downloads\C---Console-master\"name;
    #elif __APPLE__
      char outfilename[256] = "~/Downloads/C---Console-master/"name;
    #elif __linux__
      char outfilename[256] = "$HOME/C---Console-master/"name;
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
