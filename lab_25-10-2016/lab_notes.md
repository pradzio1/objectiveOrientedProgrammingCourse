### Zajecia laboratoryjne 25.10.2016 - Konspekt

1.  Konstruktory:
    -   Domniemany:
        - Konstruktor wywoływany bez żadnych argumentów
        - Jeżeli nie zadeklarujemy konstruktora domniemanego, kompilator zadeklaruje konstruktor domyślny będący jednocześnie domniemanym.
    -   Publiczny:
        - Standardowy konstruktor instancji
    -   Niepubliczny:  

        ```c++
          class example{
          	private example(){
          	}
          };
        ```
        - Taki konstruktor może być wywołany tylko z ciała klasy
        - Sprawia, że kompilator nie tworzy konstruktora domyślnego
        - Jeżeli wszystkie konstruktory są prywatne, obiektu nie można w ogóle utworzyć z zwenątrz
        - Możemy stworzyć metodę zwracającą gotowy obiekt
        ```c++
        class example{
        	private example(){}
        	public example Create(){
        		return new example();
        	}
        };
        ```
    -   Kopiujący:
        - Przyjmuje jako argument tylko obiekt klasy
        ```c++
        class point{
        	public:
        		int x, y;
        		point(){
        			x=0;
        			y=0;
        		}
        		point(point &copiedPoint){
        			x=copiedPoint.x;
        			y=copiedPoint.y;
        		}
        };
        ```
2.  Wskaźniki w klasach:
    -   Do pokazywania na daną składową klasy:
        - Z zewnątrz klasy wskazać możemy tylko na publiczną składową
        ```c++
        class example{
        	public:
            	double x, y, z;
        };
        double example::*pointer; //definicja wskaźnika na obiekty typu double
        pointer=&example::x;
        ```
        - Symbol '&' nie oznacza pobrania bezwzględnego adresu, wskazuje on na przesunięcie wskaźnika do składowej integer od początku obiektu klasy example
        - Nie jest to więc wskaźnik ustawiony na stałe miejsce w pamięci, a jedynie offset od początku obiektu, który ma zarezerwowane jakiś obszar w pamięci.
        - Nie da się ustawić wskaźnika w klasie na obiekty, które nie posiadają własnej nazwy.

    -   Do funkcji składowych:

        ```c++
          class example{
          	public:
          	  int x, y, z;
          	  int sampleMethod();
          };
          int (example::*pointer)();
        ```
        - W powyższym wypadku pointer jest wskaźnikiem pokazującym na składniki klasy example będące funkcjami, wywoływanymi bez argumentów, zwracającymi integery.
        ```c++
        pointer = &example::sampleMethod;
        ```
        - Metodę uruchamia się na rzecz konkretnego obiektu jej klasy.
        ```c++
        int (example::*pointer)();
        pointer=&example::sampleMethod;
        example object;
        (object.*pointer)();
        ```

3.  Akcesory, modyfikatory:  
    - Gettery (Akcesory) - metody pobierające jakąś wartość z obiektu.
    - Settery (Modyfikatory) - metody ustawiające jakąś wartość w obiekcie.