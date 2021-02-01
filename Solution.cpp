int removeDuplicates(vector<int>& nums) {
        
        if (nums.size() == 0) {
            
            return 0;
            
        }
        
        int count = 1;
        
        for (int i=1; i<nums.size(); i++) {
            
            if (nums[i] == nums[i-1]) {
                
                ;
                
            }
            else {
                
                nums[count++] = nums[i];
                
            }
            
        }
        
        return count;
        
    }
