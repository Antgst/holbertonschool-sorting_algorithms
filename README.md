
## 📚 Sorting Algorithms — Holberton School
#### 📝 Description

Le projet **sorting_algorithms** consiste à implémenter plusieurs **algorithmes de tri** classiques en langage C, tout en respectant les normes Holberton (Betty) et les contraintes du C standard.

### Ce projet permet de comprendre :

- Comment fonctionnent les principaux algorithmes de tri
- Leurs comportements en termes de complexité
- Les structures de données sous-jacentes
- La notation **Big O**

C’est un projet fondamental en algorithmique et en optimisation.

## 📁 Contenu du projet

### Le dépôt contient :

- Implémentations de plusieurs algorithmes de tri

- Fonctions utilitaires pour afficher :
    - des tableaux d'entiers (print_array)
    - des listes doublement chaînées (print_list)

- Des fichiers *Big O* qui détaillent la complexité des algorithmes

- Un fichier d’en-tête sort.h regroupant les prototypes et structures nécessaires

## 🔢 Algorithmes implémentés
#### Tri sur tableaux

- **Bubble Sort** — `0-bubble_sort.c`

- **Selection Sort** — `2-selection_sort.c`

- **Quick Sort** (Lomuto partition) — `3-quick_sort.c`

#### Tri sur listes doublement chaînées

- **Insertion Sort** — 1-insertion_sort_list.c

Chaque fichier source contient l’implémentation complète, accompagnée des appels à print_array ou print_list pour illustrer visuellement les étapes du tri.

## 📦 Compilation

#### Toutes les sources se compilent avec :
```c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c
```

## 📊 Big O
#### Les fichiers suivants contiennent les complexités demandées :
| Fichier | Description |
|---------|-------------|
| `0-O`   | Complexité pour Bubble Sort |
| `1-O`   | Complexité pour Insertion Sort |
| `2-O`   | Complexité pour Selection Sort |
| `3-O`   | Complexité pour Quick Sort |

**Ils incluent :**
- Meilleur cas
- Cas moyen
- Pire cas
- Complexité en espace

## 🔧 Structures utilisées
#### Liste doublement chaînée

```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## 🎯 Objectifs pédagogiques

- Comprendre la mécanique interne des algorithmes de tri
- Utiliser correctement les pointeurs et structures en C
- Manipuler des tableaux et des listes doublement chaînées
- Visualiser les opérations effectuées par les algorithmes
- Analyser des complexités Big O de façon rigoureuse

