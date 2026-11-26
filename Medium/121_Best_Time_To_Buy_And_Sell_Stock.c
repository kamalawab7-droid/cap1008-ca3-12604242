int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int bestProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;

            if (profit > bestProfit) {
                bestProfit = profit;
            }
        }
    }

    return bestProfit;
}
