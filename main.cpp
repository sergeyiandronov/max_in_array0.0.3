#include <iostream>
#include <sstream>

int main()
{
    bool failure=false;
    int max,maxsum;
    int numbers[10];
    int numbers1[10];
    while(!failure){
    for( std::string string; std::getline( std::cin, string ); ) {

        std::istringstream stream( string );


        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure = true;
                break;
            }
        }break;
    }
    if(failure){break;}
    for( std::string string; std::getline( std::cin, string ); ) {
        std::istringstream stream( string );
        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers1[ i ] ) ) {
                failure = true;
                break;
            }
        }break;}break;}
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

}


