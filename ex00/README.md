
## Constructeur de recopie
Un constructeur de recopie a la même signature que le constructeur par défaut, mais il prend une référence constante de l'objet de la même classe en tant que paramètre.

```cpp
class A {
    public:
        A(void);
        A(const A &src);
        ~A(void);
};
```

## Surcharge d'opérateur d'affectation
Une surcharge d'opérateur d'affectation surcharge l'opérateur d'affectation (=) pour une classe. Il prend une référence constante de l'objet de la même classe en tant que paramètre.
Il retourne une référence de l'objet de la même classe.

```cpp
class A {
    public:
        A(void);
        A &operator=(const A &a);
        ~A(void);
};
```
