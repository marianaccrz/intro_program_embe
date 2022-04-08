import sys

if len(sys.argv) != 3:
    print("Has introducido una cantidad de elementos no permitida")
else:
    a = int(sys.argv[1])
    b = int(sys.argv[2])
    print("La suma de los elementos es ", a+b)
    print("La resta de los elementos es ", a-b)
    print("El producto de los elementos es ", a*b)
    print("La division de los elementos es ", a/b)


