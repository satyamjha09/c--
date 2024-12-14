#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main() {

    char chars[] = {};

    int n = chars.size();

    int index = 0;

    for(int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;

        while(i < n && chars[i] == ch) {
            count++;
            i++;
        }

        if(count = 1){
            chars[index++];
        }
    }




   



    return 0;
}