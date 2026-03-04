# 🧩 Rubik Solver 3x3

## 📌 But du projet

Le but du projet est de créer un **solver de Rubik’s Cube 3x3** avec les contraintes suivantes :

- Résolution en **moins de 51 coups maximum**
- Temps de résolution **inférieur à 3 secondes**
- Utilisation de **C++** pour l’optimisation
- Utilisation du système **HTM (Half Turn Metric)**
- Les coups **M, E, S sont interdits**
- Les variantes `'` et `2` sont autorisées

---

## 🏗️ Étapes du projet

### Step 1 : Parsing

- Création du **parsing** et gestion des erreurs
- Vérification des caractères corrects
- Validation du format du mélange

### Step 2 : Exécution du mélange

- Création du **cube interne**
- Application du mélange
- Transformation de l’état du cube pour qu’il soit **parssable dans le code**

### Step 3 : Algorithme de résolution

- Création de l’**algorithme de résolution**
- Objectif : accomplir la tâche demandée dans l’énoncé du projet

### Step 4 : Bonus (SOON)

- Fonctionnalités bonus à venir

---

## 🗂️ Organisation GitHub

Le repository sera organisé par **branches par feature**.

### Convention de nommage :

- `feat/` → Ajout d’une nouveauté
- `bug/` → Réglage d’un bug
