class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int l = min(height[i],height[j]);
            int b = j-i;
            int tmp_area = (l*b);
            area = max(area,tmp_area);
            if(height[i]<height[j]){
                i++;
            }
            else if(height[j]<height[i]){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return area;
    }
};