# 🔐 STM32 Smart Access Control System

## 📌 Présentation du projet

Le projet **STM32 Smart Access Control System** est un système de contrôle d’accès intelligent basé sur une double authentification :

- Empreinte digitale
- QR Code

Le système utilise une carte STM32 pour gérer l’authentification des utilisateurs et contrôler automatiquement l’ouverture d’une porte via un moteur ou un servo moteur.

Ce projet combine les domaines :
- des systèmes embarqués,
- de la sécurité électronique,
- de l’IoT,
- et de la programmation embarquée en langage C.

---

# 🚀 Fonctionnalités

✅ Vérification des empreintes digitales  
✅ Vérification des QR codes  
✅ Double authentification  
✅ Contrôle d’ouverture de porte  
✅ Gestion des utilisateurs  
✅ Ajout/Suppression d’empreintes  
✅ Gestion des QR codes autorisés  
✅ Développement STM32 HAL  

---

# 🛠️ Composants matériels

- Carte STM32
- Capteur d’empreintes digitales
- Caméra OV7670
- Servo moteur / moteur
- LEDs
- Alimentation
- Boutons poussoirs

---

# 💻 Technologies utilisées

- Langage C
- STM32 HAL
- Systèmes embarqués
- Gestion mémoire
- Authentification biométrique
- QR Code

---

# ⚙️ Fonctionnement du système

1. Capture de l’empreinte digitale
2. Lecture du QR code
3. Vérification dans la base de données
4. Si les deux sont valides :
   - ouverture de la porte
5. Sinon :
   - accès refusé

---

# 🎯 Objectifs du projet

- Développer un système de sécurité intelligent
- Apprendre la programmation STM32
- Implémenter une authentification multi-facteurs
- Concevoir une architecture embarquée modulaire

---

# 👨‍💻 Auteur

**Abdelhak Rezma**  
Ingénieur en électronique de communication

---

# 📜 Licence

Projet développé dans un cadre pédagogique.
