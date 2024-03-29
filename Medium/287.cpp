class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        multiset<int> p;
        
        for(int i=0;i<nums.size();i++)
        {
            p.insert(nums[i]);
            
        }
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(p.count(i)>1)
            {
            j = i;
                break;
            }
        }
        return j;
    }
};


// Method 2 effiecent method
// Floyd's Algorithm  = Tortois and Hare method
// cycle detection k liye
// I saw three video anuj bhaiya , neetcode video and striver then samaje aaya


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       // 
       
        int slow =  nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
            
        }while(slow!=fast);
        
            
        // till now both has meet 
        // so now we will set a new pointer to first position which is also type of slow 
        // and from here we will move this slow pointer 
       // where they will meet it is our answer
            
            fast = nums[0];
        
        while(fast!=slow){
            fast = nums[fast];
            slow = nums[slow];
        }
        
        // now slow and fast are equal return anyone
        
        return slow;
    }
};