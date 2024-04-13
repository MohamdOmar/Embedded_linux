#include <iostream>
#include <string>
#include <getopt.h>



int main(int argc, char* argv[]){
	int opt=0;
	int hour=0;
	int mins=0;
	std::string day= "";
	std::string task= "";
	
	while((otp = getopt(argc, argv, "h:m:d:") != -1){
	  switch (opt) {
            case 'h':
                hour = std::stoi(optarg);
                break;
            case 'm':
                mins = std::stoi(optarg);
                break;
            case 'd':
                day = optarg;
                break;
            default:
                std::cerr << "Usage: " << argv[0] << " -h <hour> -m <month> -d <day> <task>" << std::endl;
                return 1;
         }
	}

}
