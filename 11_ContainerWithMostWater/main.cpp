#include <iostream>
#include <vector>


class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int MA = 0;
        int left = 0;
        int right = height.size()-1;
        while(right > left){
            int tempMA = 0;
            if(height[left] > height[right]){
                tempMA = (height[right])*(right-left);
                right--;
                }
            else{
                tempMA = (height[left])*(right-left);
                left++;
            }
            if (tempMA > MA) {
                MA = tempMA;
            }

        }


        /* High Complexity Solution: 
          
        for (int i = 0; i < height.size(); i++) {       
            
            for (int j = i + 1; j < height.size(); j++) {
                int tempMA = 0;

                if(height[i] > height[j]){
                    tempMA = (height[j])*(j-i);
                }
                else{
                    tempMA = (height[i])*(j-i);
                }

                if (tempMA > MA) {
                    MA = tempMA;
                }

            }
            
        } */
        return MA;
    }
};



int main(){
    Solution s;
    std::vector<int> height = {1,8,6,2,5,4,8,3,7};
    std::cout << s.maxArea(height) << std::endl;
    return 0;
}