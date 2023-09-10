# ft_printf

ft_printf est un projet de l'école 42 qui consiste à recréer la fonction printf en C et ainsi afficher des données à la manière de la fonction printf de la bibliothèque standard de C.

## Table des matières

- [Présentation du projet](#présentation-du-projet)
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Utilisation](#utilisation)

## Présentation du projet

L'objectif de ce projet est de comprendre en profondeur le fonctionnement de la fonction printf de la bibliothèque standard de C. Il faut implémenter notre propre version de printf en gérant de nombreux spécificateurs de format, tels que %c, %s, %p, %d, %i, %u, %x, %X et %%

## Fonctionnalités

- **Spécificateurs de format :** La fonction doit gérer un ensemble de spécificateurs de format standard tels que %s, %d, %c, %f, etc.

## Installation

1. Clonez ce dépôt : `git clone https://github.com/votre-utilisateur/ft_printf.git`
2. Accédez au répertoire du projet : `cd ft_printf`
3. Compilez le projet en utilisant le Makefile fourni : `make`

## Utilisation

1. Créez un fichier source (par exemple, `main.c`) dans lequel vous utiliserez la fonction ft_printf.
2. Incluez le fichier d'en-tête `ft_printf.h` dans votre fichier source.
3. Utilisez la fonction ft_printf comme vous le feriez avec la fonction printf de la bibliothèque standard.

Exemple :

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return (0);
}
