# 1. Wymień (przynajmniej jedną) różnice pomiędzy tworzeniem/odnoszeniem się do klas/obiektów w języku C++ a C#.

### Tworzenie nowego obiektu w C#:

```
Binary binary = new Binary();
```

Wykorzystywane jest słowo kluczowe *new*, a obiekt klasy przypisywany jest do zmiennej poprzez znak = .

### Tworzenie nowego obiektu w C++:

```
Binary binary();
```

Nowy obiekt tworzony jest zaraz po zdefiniowaniu klasy do której jest on odwoływany (w tym przypadku zarówno zmienną, jak i obiektem klasy jest *binary*).

# 2. Opisz jednym zdaniem do czego służy typ optional?

Klasa dekorująca wskazująca na to, że dany obiekt lub wartość są opcjonalne i mogą zwracać "nullable types".

# 4. Wskaż różnicę pomiędzy strukturą, a klasą.

Pola klas są prywatne, a pola stuktur są publiczne.