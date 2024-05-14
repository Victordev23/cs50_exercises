import re

text = input("Digite o texto: ")
text_size = len(text)

def readability():
    word_regex = re.findall(r"[\w'-]+", text)
    words = len(word_regex)
    sentences = 0
    letters = 0

    for x in range(0, text_size):
        if text[x].isalpha():
            letters += 1

        if text[x] in [".", "!", "?"]:
            sentences += 1

    calculate_readability(letters, words, sentences)

def calculate_readability(letter, word, sentence):
    L = (letter / word) * 100
    S = (sentence / word) * 100

    result = int(round((0.0588 * L) - (0.296 * S) - 15.8))

    if (result <= 1):
        print("Before Grade 1")

    elif (result >= 16):
        print("Grade 16+")
    
    else:
        print("Grade: {}".format(result))

readability()