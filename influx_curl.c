#include <stdio.h>
#include <curl/curl.h>

int main(void)
{

	CURL *curl;
	CURLcode res;
	
	curl = curl_easy_init();
	if(curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://192.168.31.119:8086/write?db=test_db");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "cpu,host=cpu1,region=us-west value=0.23 1463647182000000000");
		res = curl_easy_perform(curl);
		if(res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform failed: %s\n", curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
	return 0;
}
