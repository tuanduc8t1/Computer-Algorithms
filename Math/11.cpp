class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0, i=0, j=height.size()-1;
        while(i<j)
        {
            int x=min(height[i], height[j]);
            water=max(water,x * j - x * i);
            while(i<j && height[i]<=x)i++;
            while(i<j && height[j]<=x)j--;
        }
        return water;
    }
};
