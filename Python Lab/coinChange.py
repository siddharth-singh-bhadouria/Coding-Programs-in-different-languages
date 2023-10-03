def count_coin_change_ways(coins, amount):

    dp = [0] * (amount + 1)
    dp[0] = 1 

    for coin in coins:
        for i in range(coin, amount + 1):
            dp[i] += dp[i - coin]

    return dp[amount]

coin_denominations = [1, 2, 5]
target_amount = 5
ways = count_coin_change_ways(coin_denominations, target_amount)
print("Number of ways to make change for", target_amount, "is", ways)