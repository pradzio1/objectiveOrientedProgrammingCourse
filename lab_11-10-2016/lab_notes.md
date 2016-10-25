### Zajecia laboratoryjne 18.10.2016 - Konspekt

1.  Przeładowanie funkcji:  
    - Funkcja ma tą samą nazwę, ale zwraca inny typ, lub ma inną ilość lub typy argumentów.  

    ```c++
    int add (int a, int b){
    	return a+b;
    }
    double add (double a, double b){
    	return a+b;
    }
    ```

2.  Zmienne typu *const* oraz *static*:
    - Zmienna typu const posiada stałą, zapisaną w kodzie wartość, której program nie może zmienić.

    - Zmienna typu static posiada tylko jedną instancję w całym programie, tak więc wszystkie obiekty danej klasy dzielą ją między sobą.

	```c++
	class exampleClass{
	public:
      const double pi = 3.14;
      static classCount;
      exampleClass(){
        classCount++;
      }
	};
	```

    - Inicjalizacja zmiennej statycznej:

	```c++
	int exampleClass::classCount=0;
	```
	
3.  Wskaźniki:

    - Do funkcji:

    ```c++
        int exampleFunc(int a, int b){
        	return a+b;
        }
        int(*pointer)(int , int );
        pointer=exampleFunc;
        //wywołanie
        pointer(7, 8);
    ```

    - 