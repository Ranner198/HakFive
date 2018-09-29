#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <unistd.h>
#include "wifi_scan.h"

using namespace std;

int main(){

	struct station_info station;
	struct wifi_scan *wifi = wifi_scan_init("wlan0");

	double strengthVal = station.signal_dbm;
	cout << '\n' << strengthVal << '\n';
	
	wifi_scan_close(wifi);



	return 0;
}
