### Zajecia laboratoryjne 25.10.2016 - Konspekt

1. Konstruktory:
    - Domniemany:
	    - Konstruktor wywo³ywany bez ¿adnych argumentów
		- Je¿eli nie zadeklarujemy konstruktora domniemanego, kompilator zadeklaruje konstruktor domyœlny bêd¹cy jednoczeœnie domniemanym.
	- Publiczny:
	    - Standardowy konstruktor instancji
	- Niepubliczny:
	    ```c++
		class example{
			private example(){
			}
		};
		```
		- Taki konstruktor mo¿e byæ wywo³any tylko z cia³a klasy
		- Sprawia, ¿e kompilator nie tworzy konstruktora domyœlnego
		- Je¿eli wszystkie konstruktory s¹ prywatne, obiektu nie mo¿na w ogóle utworzyæ z zwen¹trz
		- Mo¿emy stworzyæ metodê zwracaj¹c¹ gotowy obiekt
		```c++
		class example{
			private example(){}
			public example Create(){
				return new example();
			}
		};
		```
	- Kopiuj¹cy:
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
2. WskaŸniki w klasach:
    - Do pokazywania na dan¹ sk³adow¹ klasy:
        - WskaŸnik do sk³adowej typu int w klasie example:
		    ```c++
			int example::*pointer;
			```
		- Za³ó¿my, ¿e klasa example ma dwa publiczne, nie statyczne pola integer1 i integer2:
		    ```c++
			pointer1=&example::integer1;
			pointer2=&example::integer2;
			```
		- Symbol '&' nie oznacza pobrania bezwzglêdnego adresu, wskazuje on na przesuniêcie wskaŸnika do sk³adowej integer od pocz¹tku obiektu klasy example
		- TO BE CONTINUED
	- Do funkcji sk³adowych:
	    