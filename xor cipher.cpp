#include <iostream>
#include <string>


using namespace std;

int main()


  string xor(string data, char key[]) {

       string xorstring = data;
       for (int i=0; i< xorstring.size(); i++)
       {
           xorstring[i]= data[i] ^ key [i% (sizeof(key)/ sizeof(char))] ;

       }
   }
    return xorstring;



int main(){
    char key[]= { 'K', 'E', 'Y'};
    std::cout<<xor ("virtual coder" , key) ;
    getchar() ;
    return 0;
}
