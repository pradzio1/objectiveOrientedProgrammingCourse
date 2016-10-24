### Zajecia laboratoryjne 25.10.2016 - Konspekt

1. Konstruktory:
    - Domniemany:
	    - Konstruktor wywo�ywany bez �adnych argument�w
		- Je�eli nie zadeklarujemy konstruktora domniemanego, kompilator zadeklaruje konstruktor domy�lny b�d�cy jednocze�nie domniemanym.
	- Publiczny:
	    - Standardowy konstruktor instancji
	- Niepubliczny:
	    ```c++
		class example{
			private example(){
			}
		};
		```
		- Taki konstruktor mo�e by� wywo�any tylko z cia�a klasy
		- Sprawia, �e kompilator nie tworzy konstruktora domy�lnego
		- Je�eli wszystkie konstruktory s� prywatne, obiektu nie mo�na w og�le utworzy� z zwen�trz
		- Mo�emy stworzy� metod� zwracaj�c� gotowy obiekt
		```c++
		class example{
			private example(){}
			public example Create(){
				return new example();
			}
		};
		```
	- Kopiuj�cy:
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
2. Wska�niki w klasach:
    - Do pokazywania na dan� sk�adow� klasy:
        - Wska�nik do sk�adowej typu int w klasie example:
		    ```c++
			int example::*pointer;
			```
		- Za��my, �e klasa example ma dwa publiczne, nie statyczne pola integer1 i integer2:
		    ```c++
			pointer1=&example::integer1;
			pointer2=&example::integer2;
			```
		- Symbol '&' nie oznacza pobrania bezwzgl�dnego adresu, wskazuje on na przesuni�cie wska�nika do sk�adowej integer od pocz�tku obiektu klasy example
		- TO BE CONTINUED
	- Do funkcji sk�adowych:
	    