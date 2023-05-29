
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    //C++20: ...(span<const int> tickets, ...)...
    int timeRequiredToBuy(const vector<int>& tickets, int targetIndex) const {
        int timeNeededForTargetToBuyTickets = tickets[targetIndex];
        for (int i = 0; i < targetIndex; ++i) {
            timeNeededForTargetToBuyTickets += min(tickets[targetIndex], tickets[i]);
        }
        for (int i = targetIndex + 1; i < tickets.size(); ++i) {
            timeNeededForTargetToBuyTickets += min(tickets[targetIndex] - 1, tickets[i]);
        }
        return timeNeededForTargetToBuyTickets;
    }
};
