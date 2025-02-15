class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) {
                return false;
            }
    
            int reversed = 0, original = x; 
    
            while (x > 0) {
                // Check for overflow before multiplying by 10
                if (reversed > (INT_MAX / 10)) {
                    return false;  // Prevent overflow
                }
    
                reversed = (10 * reversed) + (x % 10);
                x /= 10;
            }
    
            return original == reversed;
        }
    };