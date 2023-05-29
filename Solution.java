
public class Solution {

    public int timeRequiredToBuy(int[] tickets, int targetIndex) {
        int timeNeededForTargetToBuyTickets = tickets[targetIndex];
        for (int i = 0; i < targetIndex; ++i) {
            timeNeededForTargetToBuyTickets += Math.min(tickets[targetIndex], tickets[i]);
        }
        for (int i = targetIndex + 1; i < tickets.length; ++i) {
            timeNeededForTargetToBuyTickets += Math.min(tickets[targetIndex] - 1, tickets[i]);
        }

        return timeNeededForTargetToBuyTickets;
    }
}
