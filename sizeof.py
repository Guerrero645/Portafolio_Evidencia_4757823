////OSWALDO ISAI DE LA TORRE GUERRERO////4757823////

import sys

TAMANO = 2

c = ''
x = 0
Arreglo = [0] * TAMANO
y = 0.0

print(f"\nEl tamaño en bytes de una variable char es: {sys.getsizeof(c)}")
print(f"En bits es: {sys.getsizeof(c) * 8}")
print(f"En nibbles es: {sys.getsizeof(c) * 2 // 8}")

print(f"\nEl tamaño en bytes de una variable int es: {sys.getsizeof(x)}")
print(f"En bits es: {sys.getsizeof(x) * 8}")
print(f"En nibbles es: {sys.getsizeof(x) * 2 // 8}")

print(f"\nEl tamaño en bytes de una variable arreglo es: {sys.getsizeof(Arreglo)}")
print(f"En bits es: {sys.getsizeof(Arreglo) * 8}")
print(f"En nibbles es: {sys.getsizeof(Arreglo) * 2 // 8}")

print(f"\nEl tamaño en bytes de una variable double es: {sys.getsizeof(y)}")
print(f"En bits es: {sys.getsizeof(y) * 8}")
print(f"En nibbles es: {sys.getsizeof(y) * 2 // 8}")
