#include <stdio.h>
#include <curl/curl.h>

int main(void)
{

	CURL *curl;
	CURLcode res;
	
	curl = curl_easy_init();
	if(curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://192.168.0.109:8086/write?db=test_db");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "patient,hospital=hosp1,name=pat1 temp=0.23");
		res = curl_easy_perform(curl);
		if(res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform failed: %s\n", curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
	return 0;
}
