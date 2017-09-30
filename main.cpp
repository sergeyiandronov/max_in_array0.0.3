#include <iostream>
#include <sstream>

int main()
{   int where=1;
	bool failure=false;
	int max,maxsum;
	int numbers[10];
	int numbers1[10];
    for( std::string string; std::getline( std::cin, string ); ) {
       
        std::istringstream stream( string );
        switch(where){
        	case 1:
        
        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure = true;
                break;
            }
        }where++;break;
        case 2:
         for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers1[ i ] ) ) {
                failure = true;
                break;
            }
        }
        max=numbers[0];
        maxsum=max+numbers1[0];
        for( int i = 1; i < 10; ++i ) {
        	if(max<numbers[i]){
        		max=numbers[i];
        	}
        	if(maxsum<max+numbers1[i]){
        		maxsum=max+numbers1[i];
        	}
        }
          if( !failure ) {
        	
            std::cout<< maxsum;
        }
        else {
            std::cout << "An error has occured while reading numbers from line" << std::endl;
        }
        break;
        }
      
      
    }
    
        
}
