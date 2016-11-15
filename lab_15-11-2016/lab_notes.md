# Operatory

#### Wprowadzenie

Na typach wbudowanych, takich jak int, można operować przy użyciu operatorów: Dodawać przy użyciu operatora dodawania +, porównywać operatorem ==, itd. Klasy można upodobnić do typów wbudowanych, definiując dla nich zachowanie określane operatorami. Przykładem takiej klasy jest std::string: Można sklejać teksty przy użyciu operatora +, porównywać je operatorem ==, itd. Operatory pozwalają na wygodne operowanie obiektami i tworzenie złożonych wyrażeń przy niedużej ilości kodu.

Wywołania:

```c++
a+b;
a.operator + (b);
operator + (a, b);
```

Aby umożliwić obiektom klasy dodawanie operatorem +, wystarczy przeciążyć metodę/funkcję o nazwie operator +.

```c++
class Lewy
{
public:
    typ_zwracany operator X( Prawy & p );
    typ_zwracany operator Y();
};
typ_zwracany operator X( Lewy & l, Prawy & p );
typ_zwracany operator Y( Lewy & l );
```

Operator w formie funkcji najczęściej jest zaprzyjaźniony z jedną ze stron. X w powyższym kodzie może być niemal dowolnym, dwuargumentowym operatorem dostępnym w języku C++, a Y niemal dowolnym jednoargumentowym operatorem.

Operatory, które można przeciążać: +, -, *, /, %, |, &, ^, <<, >>, ~, ==, !=, >, <, >=, <=, ||, &&, !, =, +=, -=, *=, /=, %=, |=, &=, ^=, <<=, >>=, ++, --, *, ->, &, [], ->*, (), ,, new, new[], delete, delete[].

##### Operatory arytmetyczne

Operatory arytmetyczne to dwuargumentowe operatory +, -, *, /, %. Operatory + i - występują także w postaci jednoargumentowej:

```c++
Klasa Klasa::operator +(); // +k;
Klasa Klasa::operator -(); // -k;
```

##### Operatory bitowe

Operatory bitowe to dwuargumentowe operatory |, &, ^, <<, >> i jednoargumentowy operator ~.

##### Operatory porównania

Operatory porównania to dwuargumentowe operatory ==, !=, >, <, >=, <=. Powinny zwracać wartość logiczną.

##### Operatory logiczne

Operatory logiczne to dwuargumentowe operatory || i && oraz jednoargumentowy operator !.

##### Operator przypisania

Operator przypisania = używany jest do przypisywania wartości do obiektu. Powinien być zabezpieczony przed przypisywaniem obiektu do samego siebie:

```c++
Klasa & Klasa::operator =( const Klasa & prawy )
{
    if( & prawy != this )
    {
        //przypisz składowe
    }
    return * this;
}
```

Tu operator = zwraca referencje na lewy operand, dzięki czemu możliwe są wielokrotne przypisania w ten sposób:

```c++
a = b = c = d = e;
```

##### Operatory z przypisaniem

Operatory z przypisaniem wykonują określoną operacje i zapisują wynik w lewym argumencie. Są to wszystkie dwuargumentowe operatory arytmetycznie i bitowe z dopisanym operatorem =, czyli: +=, -=, *=, /=, %=, |=, &=, ^=, <<=, >>=. Zazwyczaj zwracają referencje na lewy argument.

##### Operatory inkrementacji i dekrementacji

Operatory inkrementacji ++ i dekrementacji -- są jednoargumentowe ale są zapisywane jako jedno lub dwuargumentowe, w celu rozróżnienia preinkrementacji i predekrementacji od postinkrementacji i postdekrementacji:

```c++
Klasa & Klasa::operator ++(); // ++k;
Klasa Klasa::operator ++( int ); //nieużywany argument. k++;
Klasa & Klasa::operator --(); // --k;
Klasa Klasa::operator --( int ); // k--;
```

Postinkrementacja i postdekrementacja zwracają kopię obiektu przed modyfikacją, przez co, w bardziej złożonych klasach, są wolniejsze.

##### Operatory dereferencji i pobierania adresu

Operatory dereferencji *, -> i pobierania adresu & są jednoargumentowe, a operator dostępu do tablicy [] i dereferencji ->* są dwuargumentowe.
Operatory [] i -> mogą być zdefiniowane wyłącznie jako metody.

##### Operator wywołania

Operator wywołania () może przyjmować dowolną liczbę argumentów. Sprawia, że obiekt może być traktowany jako funkcja.

```c++
TypZwracany Klasa::operator ()( argumenty );
//..
Klasa k;
k( argumenty );
```

Ten operator może być zdefiniowany wyłącznie jako metoda.
Operatory new i deleteOperatory new i delete mają ściśle określoną deklarację:

```c++
void * operator new( size_t n );
void * operator new;
void operator delete( void * n );
void operator delete;
```

Należy szczególnie uważać przy ich przeciążaniu i jeśli nie jest to potrzebne, nie należy tego robić.

```c++
include <iostream>
include <cstdlib>
class Klasa
{
public:
    void * operator new( size_t n )
    {
        std::cout << "Alokuje " << n << " bajtow pamieci" << std::endl;
        return malloc( n );
    }
    void operator delete( void * addr )
    {
        if( !addr )
             return;
        std::cout << "Dealokuje.." << std::endl;
        free( addr );
    }
};
int main()
{
    int * n = new int; // tu zostaną użyte zwykłe operatory new
    delete n; // i delete
    std::cout << "---" << std::endl;
    Klasa * k = new Klasa;
    delete k;
}
```

##### Operator konwersji

```c++
Klasa::operator Typ();
```

Przy deklarowaniu operatora konwersji nie podaje się typu zwracanego. Jest on niejawnie taki sam, jak typ podany w nazwie operatora. Może być zdefiniowany wyłącznie jako metoda.

```c++
include <iostream>
/// Int - typ intipodobny ;)
class Int
{
    int i;
public:
    Int()
        : i( 0 )
    { }
    Int( int x )
        : i( x )
    { }
    Int( const Int & x )
        : i( x.i )
    { }
    // Operatory
    Int & operator =( const Int & x )
    {
        i = x.i;
        return * this;
    }
    Int operator +( const Int & x ) const
    {
        return i + x.i;
    }
    Int operator -( const Int & x ) const
    {
        return i - x.i;
    }
    Int operator *( const Int & x ) const
    {
        return i * x.i;
    }
    Int operator /( const Int & x ) const
    {
        return i / x.i;
    }
    Int operator %( const Int & x ) const
    {
        return i % x.i;
    }
    // Operator wypisania obiektu Int do strumienia std::ostream (std::cout, std::cerr, itp)
    friend std::ostream & operator <<( std::ostream & os, const Int & i )
    {
        os << i.i;
        return os;
    }
    // Operator wczytania ze strumienia std::istream (std::cin, itp)
    friend std::istream & operator >>( std::istream & os, Int & i )
    {
        os >> i.i;
        return os;
    }
};
int main()
{
    const Int a = 64;
    Int b = 42, c;
    std::cin >> c;
    std::cout <<( a + b * c - 1 ) % a;
}
```

