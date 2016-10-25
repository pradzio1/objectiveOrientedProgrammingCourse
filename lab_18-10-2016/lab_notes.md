### Zajecia laboratoryjne 18.10.2016 - Konspekt

1.  Klasy:
    - Deklaracja, definicja:

    ```c++
    class className{
      //class body
    };
    ```

    - Funkcje i dane składowe klasy
        - Zmienne zadeklarowane wewnątrz klasy to jej składowe, a funkcje, to metody

    ```c++
    class exampleClass{
      int length, height, depth;
      exampleClass(int , int , int );
      int getClassVolume();
    };
    int exampleClass::getClassVolume(){
      return length*height*depth;
    }
    exampleClass::exampleClass(int a, int b, int c){
      length=a;
      height=b;
      depth=c;
    }
    ```

    - Dostęp do składników klasy: 
        - **public** - Dostęp do składników klasy jest możliwy z każdego miejsca w programie.
        - **private** - Dostęp do składników klasy jest możliwy tylko przez metody tej klasy.
        - **protected** - Dostęp do składników klasy jest możliwy tylko w obrębie tej klasy, oraz w obrębie klas zaprzyjaźnionych.
    - Wskaźnik *this*:
        - Argument, który posiada KAŻDA metoda danej klasy (dodawany przez kompilator)
        - Jest wskaźnikiem na obiekt klasy w którym wywoływana jest metoda