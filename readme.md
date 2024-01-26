# Technisch leerdoel - Mitchel van de Pest
## Maak een SO van de simple_class
```bash
g++ -shared -o simple_class.so -fPIC simple_class.cpp
```

## Compileren van het programma dat gebruik maakt van de SO:
```bash
g++ -o main main.cpp -lsimple_class -L ./simple_class.so
```


## Installeren van Ghidra
Bij deze installatie is gebruik gemaakt van Ubuntu 22.04 ARM64.
Installeren van Ghidra:
```bash
sudo snap install ghidra
```
Dit duurt even.

## Gebruiken van Ghidra
[gebruikte tutorial/naslag werk](https://www.retroreversing.com/intro-decompiling-with-ghidra)


