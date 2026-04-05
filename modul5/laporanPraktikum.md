# <h1 align="center">Laporan Praktikum Modul 4 - ... </h1>
<p align="center">[Cofa Xavier Marvel] - [109082500001]</p>

## Unguided 

### 1. [Soal]
#### soal1.go

```go
package main

import "fmt"

func fibonaci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonaci(n-1) + fibonaci(n-2)
}

func main() {
	var input int
	fmt.Scan(&input)
	for i := 0; i <= input; i++ {
		fmt.Println(fibonaci(i))
	}
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul5/Output/Output-soal1.png)
[penjelasan]
Using a recursive function, the function {fibonaci} returns the number of an entry in the Fibonacci sequence using the formula Sn = Sn-1 + Sn-2 by defining the variable {n} as the entry number, and returning 0 if the entry number is below or equal to 0. It uses a for loop to get numbers from variable i(0) to variable x{input} to insert i into the function fibonaci as n with the returned values being printed into seperate lines.
#### soal2.go

```go
package main

import "fmt"

func row(n int) {
	if n < 1 {
		fmt.Println()
	} else {
		fmt.Print("*")
		row(n - 1)
	}
}

func main() {
	var input int
	fmt.Scan(&input)
	for i := 1; i <= input; i++ {
		row(i)
	}
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul5/Output/Output-soal2.png)
[penjelasan]
This program uses a recursive procedural function to print n asterisks in a row, with the base case triggering an empty fmt.Println to separate the rows. This procedure is named row. The program uses a for loop from 1 to input, with the numbers from 1 to input being the n in row.
### 3. [Soal]
#### soal3.go

```go
package main

import "fmt"

var input int

func main() {
	fmt.Scan(&input)
	Factory(1)

}

func Factory(n int) {
	if n > input {
		fmt.Println()
	} else {
		if input%n == 0 {
			fmt.Print(n, " ")
		}
		Factory(n + 1)
	}
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul5/Output/Output-soal3.png)
[penjelasan]
This program finds the factors of an input by using the recursive function Factory. It starts by getting the input using fmt.Scan(). Then Factory checks if n > input and if input%n is equal to 0, with if input%n being equal to zero, it prints n using fmt.Print, then n is increased by 1; this repeats until n is larger than the input.
