#include <stdio.h>
#include <string>

std::string maxValue(std::string n, int x) {
    if(n[0] == '-'){
        for(int i = 0; i < n.length(); i++){
            if(n[i] > x + '0'){
                n.insert(i, 1, x+'0');
                return n;
            }
        }
    }
    else{
        for(int i = 0; i < n.length(); i++){
            if(n[i] < x + '0'){
                n.insert(i, 1, x+'0');
                return n;
            }
        }
    }

}

int main(int argc, char* argv[]) 
{ 
    maxValue("123",1);
    return 0; 
}

