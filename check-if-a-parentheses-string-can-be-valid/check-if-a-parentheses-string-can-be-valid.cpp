// First we traverse the string from left to right and check the following

// The chars which are unlocked.
// The chars which are locked and are open brackets.
// The chars which are locked and are closed brackets.
// We need to identify the number of locked brackets which are unpaired, which is equal to number of closed brackets - number of open brackets.
// Now the only way to balance these locked, unpaired brackets is by modifying the unlocked ones. So we check if the number of unlocked > unpaired. If it is not, then balancing is not possible and we return false.
// Similarly we traverse the string from right to left and check for this condition unlocked > unpaired, which is (number of open brackets - number of closed brackets) in this case.
class Solution {
public:
      bool canBeValid(string s, string locked) {
          
        if (s.length() % 2 == 1) 
            return false;
          
        int unlocked = 0, open = 0, closed = 0, unpaired;
        for(int i = 0; i <s.length(); i++) {
            if (locked[i] == '0')
                unlocked++;
            else if (s[i] == '(')
                open++;
            else if (s[i] == ')')
                closed++;
            unpaired = closed-open;
            if (unpaired > unlocked)
                return false;
        }
          
        unlocked = 0, open = 0, closed = 0, unpaired=0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if (locked[i] == '0')
                unlocked++;
            else if (s[i] == '(')
                open++;
            else if (s[i] == ')')
                closed++;
            unpaired = open-closed;
            if (unpaired > unlocked)
                return false;
        }
          
        return true;
    }
};