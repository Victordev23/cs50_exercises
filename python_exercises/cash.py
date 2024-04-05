change = float(input("Digite o valor do troco: ")) * 100

def calculate_change(change):
    quarters = int(change / 25)
    change %= 25

    dimes = int(change / 10)
    change %= 10

    nickels = int(change / 5)
    change %= 5  

    pennies = int(change / 1)
    change %= 1

    coin = (quarters + dimes + nickels + pennies)

    print(coin)

calculate_change(change)