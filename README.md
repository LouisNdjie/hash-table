# HASH-TABLE
Ce projet porte sur la gestion de scores avec une table de hachage.


## Qu'est ce qu'une table de hashage ?
Une table de hashage est une structure de donnée permettant une association clé-valeur(associe une valeur prédéfinie à chaque clé).Elle a pour but de permettre de retrouver une clé donnée très rapidement, en la cherchant à un emplacement de la table correspondant au résultat d'une fonction de hashage.


## Qu'est ce qu'une fonction de hashage ?
Une fonction de hachage est une fonction qui associe, à une donnée de taille non bornée, une donnée de taille fixe.
De manière pueril on peut dire qu'elle se contente de hasher l'information reçu , pour permettre sa representation.
Dans le cadre de cet exercice nous avons opté pour un hashage simple qui combine addition et multiplication des données ASCII puis on congru le résultat aux nombres de cellules présentent dans la table.

## Qu'est ce qu'une collision ?
Une peut être vu ici comme une interférence qui survient lors du hashage de l'information. En effet, il est posiible lors du hashage de l'information de tomber sur le même résultat de hash pour deux informations différentes. Ce qui crée donc une interférence entre les informations présentent et celle qui veut être insérée.