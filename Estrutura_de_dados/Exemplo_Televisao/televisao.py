import os

system = os.name
        
#definindo a classe televisao
class Televisao:
    def __init__(self):
        self.marca = ""
        self.ligado = False #estado inicial da TV
        self.volume = 0
        self.volume_max = 10
        self.canal = 0

    def ligar(self):
        self.ligado = True

        volume = 4

        self.definir_volume(volume)
        print(f"TV {self.marca} ligada!")
        
    def desligar(self):
        self.ligado = False
        print(f"TV {self.marca} delisgada!")

    def definir_marca(self, nome_marca):
        self.marca = nome_marca
        print(f"TV | Marca definida: {self.marca}")

    def definir_volume(self, volume):
        if self.ligado:
            self.volume = volume
            print(f"TV {self.marca} | Volume definido para {self.volume}")

        else:
            print(f"Ligue antes a TV {self.marca}")

    def definir_canal(self, canal):
        if self.ligado:
            self.canal = canal
            print(f"TV {self.marca} | Canal definido para {self.marca}")
       
        else:
            print(f"Ligue a TV {self.marca}")

    def aumentar_volume(self):
        if self.ligado:
            if self.volume < self.volume_max:
                self.volume += 1
                print(f"Volume da TV {self.marca} definido para {self.volume}")

            else:
                print(f"Sua TV {self.marca} já está no volume máximo (Volume {self.volume_max})")

        else:
            print("Você precisa ligar a sua TV primeiro.")

def menu_operacao(tv):
    while True:

        print()
        print("1. Ligar TV")
        print("2. Desligar TV")
        print("3. Definir marca")
        print("4. Aumentar volume")
        print("5. Definir canal")
        print("6. Sair")

        opcao = input("Escolha a opção desejada: ")

        if opcao == "1":
            os.system("clear")
            tv.ligar()

        elif opcao == "2":
            os.system("clear")
            tv.desligar()

        elif opcao == "3":
            os.system("clear")
            marca = input("Digite o nome da marca: ")
            tv.definir_marca(marca)

        elif opcao == "4":
            os.system("clear")
            tv.aumentar_volume()

        elif opcao == "5":
            os.system("clear")
            canal = input("Digite o canal desejado: ")
            tv.definir_canal(canal)

        elif opcao == "6":
            os.system("clear")
            print("Saindo...")
            break  # Saia do loop quando o usuário escolher a opção "6"
        else:
            os.system("clear")
            print("Opção inválida! Por favor, escolha uma opção válida.")

def main():

    minha_tv = Televisao()
    menu_operacao(minha_tv)

if __name__ == "__main__":
    main()