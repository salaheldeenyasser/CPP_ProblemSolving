#include <iostream>
#define getBit(num, bitPos) ((num& (1<<bitPos)) !=0)

class Solution {
public:
    int hammingWeight(int n) {
        int counter;
        for(int i=0; i <32; i++ ){
            if ( getBit(n, i) == 1){
                counter++;
            }
        }
        return counter;
    }
    
};

int main(){
    Solution s;
    int n = 11;
    std::cout << s.hammingWeight(n) << std::endl;

    Solution s2;
    int n2 = 128;
    std::cout << s2.hammingWeight(n2) << std::endl;

    Solution s3;
    int n3 = 4294967293;
    std::cout << s3.hammingWeight(n3) << std::endl;


    return 0;
}