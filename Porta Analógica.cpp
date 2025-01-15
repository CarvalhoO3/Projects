# Vamos supor que os LEDs estão conectados nas portas 17, 18 e 19
# led_vermelho, led_amarelo e led_verde são os pinos conectados aos LEDs

from gpiozero import LED

# Definindo os pinos dos LEDs
led_vermelho = LED(17)
led_amarelo = LED(18)
led_verde = LED(19)

# Função para mapear o valor de 0 a 100 para os LEDs
def acionar_leds(valor):
    # Mapeando o valor de entrada para um intervalo de 0 a 100
    if valor >= 0 and valor <= 35:
        # Aciona somente o LED vermelho
        leds = [led_vermelho]
    elif valor >= 36 and valor <= 70:
        # Aciona os LEDs vermelho e amarelo
        leds = [led_vermelho, led_amarelo]
    elif valor >= 71 and valor <= 100:
        # Aciona todos os LEDs
        leds = [led_vermelho, led_amarelo, led_verde]

    # Utilizando a função map para acionar os LEDs
    list(map(lambda led: led.on(), leds))

# Exemplo de uso
valor_entrada = 50  # Valor de 0 a 100, ajustável conforme o caso
acionar_leds(valor_entrada)


