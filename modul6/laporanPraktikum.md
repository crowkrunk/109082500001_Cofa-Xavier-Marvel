# <h1 align="center">Laporan Praktikum Modul 7 dan 9 - ... </h1>
<p align="center">[Cofa Xavier Marvel] - [109082500001]</p>

## Unguided 

### 1. [Soal]
#### soal1.go

```go
package main

import (
	"fmt"
	"math"
)

type Point struct {
	X int
	Y int
}

type Circle struct {
	Center Point
	Radius int
}

func Distance(a, b, c, d float64) float64 {
	return math.Sqrt((a-c)*(a-c) + (b-d)*(b-d))
}

func In(P Point, C Circle) bool {
	Dist := Distance(
		float64(P.X),
		float64(P.Y),
		float64(C.Center.X),
		float64(C.Center.Y),
	)
	return Dist <= float64(C.Radius)
}

func main() {
	var Cs [2]Circle
	var Ps Point

	fmt.Scan(&Cs[0].Center.X, &Cs[0].Center.Y, &Cs[0].Radius)
	fmt.Scan(&Cs[1].Center.X, &Cs[1].Center.Y, &Cs[1].Radius)
	fmt.Scan(&Ps.X, &Ps.Y)

	in1 := In(Ps, Cs[0])
	in2 := In(Ps, Cs[1])

	if in1 && in2 {
		fmt.Println("Titik di dalam lingkaran 1 dan 2")
	} else if in1 {
		fmt.Println("Titik di dalam lingkaran 1")
	} else if in2 {
		fmt.Println("Titik di dalam lingkaran 2")
	} else {
		fmt.Println("Titik di luar lingkaran 1 dan 2")
	}
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul6/Output/Output-soal1.png)
[penjelasan]
	Point is a struct with two variables, X and Y, both int.
	circle has 2 variables: Center with the type being point, so it contains variable X and Y, and Radius having the type being int.
	In main, it declares the struct Circle as an array named Cs with 2 indexes, and Point is declared as Ps.
	When scanning for input, the array struct Cs is indexed at 0 to denote the first circle and 1 for the second, with a dot, center, dot, and either X or Y to denote the axis.

#### soal2.go

```go
package main

import (
	"fmt"
	"math"
)

func inputToArray(Size int, Array []int) []int {
	if Size != 0 {
		var input int
		fmt.Scan(&input)
		Array = append(Array, input)
		return inputToArray(Size-1, Array)
	}
	return Array
}

func displayEvenOrOdd(Array []int, even bool, i int) {
	if even && i == 0 {
		fmt.Print("Even index : ")
	} else if i == 0 {
		fmt.Print("Odd index : ")
	}
	if len(Array) != i {
		if even {
			if i%2 == 0 {
				fmt.Print(Array[i], " ")
			}
		} else {
			if i%2 != 0 {
				fmt.Print(Array[i], " ")
			}
		}
		displayEvenOrOdd(Array, even, i+1)
	}
}

func DisplayMultiples(arr []int, x int) {
	if x <= 0 {
		return
	}
	found := false
	for i := x; i < len(arr); i += x {
		fmt.Printf("%d ", arr[i])
		found = true
	}
	if !found {
		fmt.Print("Doesnt exist")
	}
	fmt.Println()
}

func deleteTheIndex(Array []int, index int) []int {
	return append(Array[:index], Array[index+1:]...)
}

func Mean(Array []int) float64 {
	var sum int
	for i := 0; i < len(Array); i++ {
		sum += Array[i]
	}
	return float64(float64(sum) / float64(len(Array)))
}

func standardHUH(Array []int) {

	var SumSquare float64
	for _, val := range Array {
		selisih := float64(val) - Mean(Array)
		SumSquare += selisih * selisih
	}

	varians := SumSquare / float64(len(Array))

	fmt.Printf("\nStandard deviation: %.2f\n", math.Sqrt(varians))
}

func main() {
	nums := []int{}
	var Size, X int
	fmt.Printf("\ninput Size of array :")
	fmt.Scan(&Size)

	fmt.Printf("\ninput number to fill array :")
	nums = inputToArray(Size, nums)

	fmt.Println(nums)
	displayEvenOrOdd(nums, true, 0)
	displayEvenOrOdd(nums, false, 0)

	fmt.Printf("\ninput the X to find the multiples in index and display the element :")
	fmt.Scan(&X)
	DisplayMultiples(nums, X)

	fmt.Printf("\ninput the index to delete :")
	fmt.Scan(&X)
	fmt.Println(deleteTheIndex(nums, X))

	fmt.Print("The average of the Array is :")
	fmt.Print(Mean(nums))

	standardHUH(nums)
}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul6/Output/Output-soal2.png)
[penjelasan]
	This program contains many functions, they are as follows:
	inputToArray, that uses the append function in combo with a dynamic array, or slice, to add numbers to the end of the array without limits, and itterates by being a recursive function.

	displayEvenOrOdd, that uses recursion to traverse the slice, checking each index to print values that match the even or odd criteria, and continues calling itself with an incremented index.

	DisplayMultiples, that uses a loop to iterate through the slice at intervals of x, accessing elements at indices that are multiples of X, and prints them until the end of the array is reached without using using a for loop.

	deleteTheIndex, that uses the append function to create a new slice by merging the parts before and after the target index, effectively deleting the element.

	Mean, that uses a loop to accumulate the sum of all integer elements, then performs a type conversion to float64 before dividing by the array length to return a decimal average.

	standardHUH, that uses a loop to calculate the sum of squared differences from the mean for every element, computes the variance by dividing by the total count, and returns the square root to display the standard deviation.

	main, calling all the functions above and declaring nums and X.
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