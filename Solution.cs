
using System;

public class Solution
{
    public int TimeRequiredToBuy(int[] tickets, int targetIndex)
    {
        int timeNeededForTargetToBuyTickets = tickets[targetIndex];
        for (int i = 0; i < targetIndex; ++i)
        {
            timeNeededForTargetToBuyTickets += Math.Min(tickets[targetIndex], tickets[i]);
        }
        for (int i = targetIndex + 1; i < tickets.Length; ++i)
        {
            timeNeededForTargetToBuyTickets += Math.Min(tickets[targetIndex] - 1, tickets[i]);
        }
        return timeNeededForTargetToBuyTickets;
    }
}
