height = int(input("Digite o tamanho da escada: "))

def build_steps(height):
    for i in range(height):

        print(" " * (height - i - 1) + "#" * (i + 1))

build_steps(height)