
/**
 * @param {number[]} tickets
 * @param {number} targetIndex
 * @return {number}
 */
var timeRequiredToBuy = function (tickets, targetIndex) {
    let timeNeededForTargetToBuyTickets = tickets[targetIndex];
    for (let i = 0; i < targetIndex; ++i) {
        timeNeededForTargetToBuyTickets += Math.min(tickets[targetIndex], tickets[i]);
    }
    for (let i = targetIndex + 1; i < tickets.length; ++i) {
        timeNeededForTargetToBuyTickets += Math.min(tickets[targetIndex] - 1, tickets[i]);
    }
    return timeNeededForTargetToBuyTickets;
};
