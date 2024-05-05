from math import trunc
import re

card_number = input("Número do cartão: ")
card_size = len(card_number)

def validate_card(card):
    sum = 0
    card = card[::-1]
    
    for x in range(1, card_size, 2):
        number = int(card[x]) * 2
        if number >= 10:
            sum += trunc(number / 10) + (number % 10)
        else:
            sum += number

    for x in range(0, card_size, 2):
        sum += int(card[x])

    if sum % 10 == 0:
        return True
    else:
        return False

def detect_card_brand():
    amex = re.search('^(34|37)', card_number)
    master = re.search('(51|52|53|54|55)', card_number)
    visa = re.search('^4', card_number)

    if validate_card(card_number) != True:
        print("Cartão invalido")
        return 0
    
    if amex and card_size == 15:
        print("AMEX")
    
    elif master and card_size == 16:
        print("MASTERCARD")

    elif visa and (card_size == 13 or card_size == 16):
        print("VISA")

    print("VÁLIDO")


detect_card_brand()