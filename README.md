# Operatoren_Cpp_2026
# Exercices pour rafraîchir les notions d'opérateurs en C++

## MÉTHODES À IMPLÉMENTER — Classe `ComplexNumber`

### 1. Opérateurs arithmétiques

1. `ComplexNumber& operator+=(const ComplexNumber& cn)` // Additionner les parties réelles entre elles et les parties imaginaires entre elles.

2. `ComplexNumber& operator-=(const ComplexNumber& cn)` // Soustraire les parties réelles et imaginaires correspondantes.

3. `ComplexNumber& operator*=(const ComplexNumber& cn)` // Multiplier deux nombres complexes et stocker le résultat dans l'objet courant.

4. `ComplexNumber& operator/=(const ComplexNumber& cn)` // Diviser deux nombres complexes et stocker le résultat dans l'objet courant. Gérer la division par zéro.

5. `ComplexNumber operator+(const ComplexNumber& cn) const` // Retourner un nouveau nombre complexe égal à la somme des deux nombres.

6. `ComplexNumber operator-(const ComplexNumber& cn) const` // Retourner un nouveau nombre complexe égal à la différence des deux nombres.

7. `ComplexNumber operator*(const ComplexNumber& cn) const` // Retourner le produit de deux nombres complexes.

8. `ComplexNumber operator/(const ComplexNumber& cn) const` // Retourner le quotient de deux nombres complexes.

### 2. Opérateurs de comparaison

9. `bool operator==(const ComplexNumber& cn) const` // Vérifier si les parties réelles et imaginaires sont égales.

10. `bool operator!=(const ComplexNumber& cn) const` // Vérifier si les deux nombres complexes sont différents.

### 3. Opérateurs unaires

11. `ComplexNumber operator-() const` // Retourner l'opposé du nombre complexe : $a+bi \rightarrow -a-bi$.

12. `ComplexNumber operator+() const` // Retourner le nombre complexe sans modifier son signe.

### 4. Opérateurs d'incrémentation et de décrémentation

Pour cet exercice, on choisit la convention suivante : incrémenter ou décrémenter la partie réelle de 1.

13. `ComplexNumber& operator++()` // Pré-incrémentation : incrémenter la partie réelle, puis retourner l'objet courant.

14. `ComplexNumber operator++(int)` // Post-incrémentation : retourner l'ancienne valeur, puis incrémenter la partie réelle.

15. `ComplexNumber& operator--()` // Pré-décrémentation : décrémenter la partie réelle, puis retourner l'objet courant.

16. `ComplexNumber operator--(int)` // Post-décrémentation : retourner l'ancienne valeur, puis décrémenter la partie réelle.

### 5. Opérateurs d'entrée et de sortie

17. `friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn)` // Afficher le nombre complexe sous la forme `a + bi` ou `a - bi`.

18. `friend std::istream& operator>>(std::istream& is, ComplexNumber& cn)` // Lire les parties réelle et imaginaire depuis un flux d'entrée.

### 6. Méthodes classiques à implémenter

19. `ComplexNumber(double real = 0.0, double imag = 0.0)` // Construire un nombre complexe à partir de ses deux composantes.

20. `double getReal() const` // Retourner la partie réelle.

21. `double getImag() const` // Retourner la partie imaginaire.

22. `void setReal(double real)` // Modifier la partie réelle.

23. `void setImag(double imag)` // Modifier la partie imaginaire.

24. `ComplexNumber conjugate() const` // Retourner le conjugué du nombre complexe : $a+bi \rightarrow a-bi$.

25. `double modulus() const` // Retourner le module : $\sqrt{a^2+b^2}$.

26. `double norm() const` // Retourner le carré du module : $a^2+b^2$.


Quelques consignes pour votre entraînement :

- Privilégiez `const ComplexNumber&` pour les paramètres qui ne doivent pas être modifiés.
- Les opérateurs `+=`, `-=`, `*=`, `/=` retournent généralement `ComplexNumber&` pour permettre les opérations chaînées.
- Les opérateurs `+`, `-`, `*`, `/` retournent généralement un nouvel objet.
- Pour les opérateurs `<<` et `>>`, utilisez des fonctions non membres.
- Testez chaque opérateur avec un petit programme dans `main.cpp`, puis ajoutez des tests pour les cas limites.
