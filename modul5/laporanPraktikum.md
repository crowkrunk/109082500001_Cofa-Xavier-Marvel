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
### 4. [Soal]
#### soal4.go

```go
package main

import "fmt"

var m int = 1
var k int

func Nto1toN(n, k int) {
	if n == 1 {
		m = -1
	}
	if n == k && m == -1 {
		fmt.Print(k)
	} else {
		fmt.Print(n, " ")
		Nto1toN(n-m, k)
	}
}

func main() {
	var x int
	fmt.Scan(&x)
	Nto1toN(x, x)
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul5/Output/Output-soal4.png)
[penjelasan]
This program uses the recursive function Nto1toN to print a sequence of numbers from x to 1 to x by first declaring a variable outside the function to be used in the function, and using n as the numerator and k as the limit after n reaches 1, printing the n until 1 which then changes the modifier m to -1, two minuses become a plus and increases n until k.
### 5. [Soal]
#### soal5.go

```go
package main

import "fmt"

func allodds(n int, i int) {
	if i > n {
		return
	}
	if i%2 == 1 {
		fmt.Print(i, " ")
	}
	allodds(n, i+1)
}

func main() {
	var input int
	fmt.Scan(&input)
	allodds(input, 1)
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul5/Output/Output-soal5.png)
[penjelasan]
This program recursively prints all odd numbers from 1 to a number n, using i to track the current number and stopping when i is larger than n.
### 6. [Soal]
#### soal6.go

```go
package main

import "fmt"

func power(x, n int) int {
	if n == 0 {
		return 1
	}
	if n == 1 {
		return x
	}
	return x * power(x, n-1)
}

func main() {
	var input1, input2 int
	fmt.Scan(&input1, &input2)
	fmt.Print(power(input1, input2))
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul5/Output/Output-soal6.png)
[penjelasan]
This is a program that implements recursion to find the power of two numbers. by first checking if the power is equal to 1, which returns 1 or zero, which returns x, then returns x to the power of x-1 times x.