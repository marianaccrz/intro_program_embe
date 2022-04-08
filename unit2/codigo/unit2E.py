
cadena = input("Escribe una cadena de texto: ")
cadena_lista = cadena.split()
cadena_invertida = cadena_lista[::-1]
texto_final=""
for texto in cadena_invertida:
    texto_final = texto_final + texto + " "
print(texto_final)