# Libft

Libft est un projet du cursus de l'école 42. Il consiste à recréer une bibliothèque standard C contenant des fonctions utiles pour d'autres projets. Ce projet permet de développer une compréhension approfondie des concepts fondamentaux de la programmation en C.

---

## Table des matières

1. [Description](#description)
2. [Fonctionnalités](#fonctionnalités)
3. [Installation](#installation)
4. [Utilisation](#utilisation)
5. [Tests](#tests)
6. [Ressources](#ressources)
7. [Auteur](#auteur)

---

## Description

Libft est une bibliothèque personnalisée écrite en C. Elle regroupe des fonctions couramment utilisées dans les projets académiques ou professionnels. Ces fonctions couvrent des opérations sur les chaînes de caractères, la gestion de mémoire, les listes chaînées, et bien plus encore.

Le but de ce projet est d'apprendre :
- À manipuler des pointeurs et de la mémoire.
- À créer une bibliothèque modulaire.
- Les bonnes pratiques de codage et la documentation.

---

## Fonctionnalités

Voici les catégories principales de fonctions incluses dans libft :

### Fonctions de la bibliothèque standard C
- `ft_strlen` : Calcul de la longueur d'une chaîne.
- `ft_strcpy` : Copie d'une chaîne.
- `ft_strdup` : Duplication d'une chaîne.
- `ft_memset` : Initialisation d'un bloc de mémoire.
- `ft_memcpy` : Copie de mémoire.

### Fonctions supplémentaires
- `ft_itoa` : Conversion d'un entier en chaîne.
- `ft_split` : Division d'une chaîne en sous-chaînes selon un délimiteur.
- `ft_strjoin` : Concatenation de deux chaînes.

### Fonctions pour les listes chaînées
- `ft_lstnew` : Création d'un nouvel élément de liste.
- `ft_lstadd_front` : Ajout d'un élément au début de la liste.
- `ft_lstiter` : Application d'une fonction à chaque élément de la liste.

---

## Installation

Pour compiler la bibliothèque, suivez ces étapes :

1. Clonez ce dépôt :
   ```bash
   git clone https://github.com/votre-utilisateur/libft.git
   cd libft
   ```

2. Compilez la bibliothèque :
   ```bash
   make
   ```

3. Une fois compilée, la bibliothèque `libft.a` sera générée.

---

## Utilisation

Pour utiliser libft dans vos projets :

1. Ajoutez `libft.a` à votre commande de compilation :
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o programme
   ```

2. Incluez le fichier d'en-tête dans vos fichiers sources :
   ```c
   #include "libft.h"
   ```

---

## Tests

Pour tester la bibliothèque :

1. Utilisez les tests unitaires fournis par l'école ou des frameworks comme [LibftTester](https://github.com/Tripouille/libftTester).
   ```bash
   git clone https://github.com/Tripouille/libftTester.git
   cd libftTester
   make m
   ```

2. Vous pouvez aussi écrire vos propres tests :
   ```c
   #include "libft.h"
   #include <stdio.h>

   int main(void) {
       printf("Length of 'Hello': %zu\n", ft_strlen("Hello"));
       return 0;
   }
   ```

---

## Ressources

- [Documentation du projet Libft (42)](https://projects.intra.42.fr/projects/libft)
- [Manpages des fonctions standard C](https://man7.org/linux/man-pages/)
- [LibftTester](https://github.com/Tripouille/libftTester)
- [Unit-Tests pour Libft](https://github.com/alelievr/libft-unit-test)

---

## Auteur

Projet réalisé par :
- **Benjamin "Sweekt" Roy** ([beroy@student.42lyon.fr](mailto:beroy@student.42lyon.fr))

---

