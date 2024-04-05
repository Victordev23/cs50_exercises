height = int(input("Digite o tamanho desejado para a pirâmide: "))

def pyramid(height):
    for i in range(height):

        print(" " * (height - i - 1) + "#" * (i + 1), end= "")
        print("   ", end= "")
        print("#" * (i + 1)  + " " * (height - i - 1))

pyramid(height)