# <h1 align="center">Laporan Praktikum Modul 7 dan 9 - ... </h1>
<p align="center">[Cofa Xavier Marvel] - [109082500001]</p>

## Unguided 

### 1. [Soal]
#### soal1.go

```go
package main

import "fmt"

var RabbitCap int = 1000

func getWeights(N int) []int {
	var weight int
	var rabbitTable []int
	for i := 0; N > i; i++ {
		fmt.Scan(&weight)
		rabbitTable = append(rabbitTable, weight)
	}
	return rabbitTable
}

func smallNLarge(T []int) {
	var biggest int = 0
	var smallest int = T[0]
	for _, nums := range T {
		if biggest < nums {
			biggest = nums
		}
	}
	for _, nums := range T {
		if smallest > nums {
			smallest = nums
		}
	}
	fmt.Print(smallest, biggest)
}

func main() {
	var N int
	fmt.Scan(&N)
	if N > RabbitCap {
		fmt.Print("error")
	}
	smallNLarge(getWeights(N))

}

```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul10/Output/Output-soal1.png)
[penjelasan]
	This program reads a user-defined count of inputs (capped at 1000), stores them in a dynamic slice, and iterates through the data to identify and print the smallest and largest values.
#### soal2.go

```go
package main

import "fmt"

func main() {
	var x, y int
	var sum float64
	fmt.Scan(&x, &y)

	weight := make([]float64, x)
	containerWeights := make([]float64, (x+y-1)/y)

	for i := 0; i < x; i++ {
		fmt.Scan(&weight[i])
		containerWeights[i/y] += weight[i]
	}

	for i := 0; i < (x+y-1)/y; i++ {
		if i > 0 {
			fmt.Print(" ")
		}
		fmt.Print(containerWeights[i])
	}

	fmt.Println()

	for _, weight := range weight {
		sum += weight
	}
	fmt.Print(sum / float64((x+y-1)/y))

}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul10/Output/Output-soal2.png)
[penjelasan]
This program reads the number of items x and a grouping size y, then reads a set of x weights, sums them into groups of size y (with the last group potentially smaller), prints the sum of each group, and outputs the average of these group sums.

### 3. [Soal]
#### soal3.go

```go
package main

import "fmt"

type babyWeightArray [100]float64

func calculateMinMax(weightArray babyWeightArray, n int, minWeight, maxWeight *float64) {
	if n == 0 {
		return
	}

	*minWeight = weightArray[0]
	*maxWeight = weightArray[0]

	for i := 1; i < n; i++ {
		w := weightArray[i]
		if w < *minWeight {
			*minWeight = w
		}
		if w > *maxWeight {
			*maxWeight = w
		}
	}
}

func calculateAverageWeight(weightArray babyWeightArray, len int) float64 {
	if len == 0 {
		return 0
	}

	var sum float64
	for _, weight := range weightArray {
		sum += weight
	}

	return sum / float64(len)
}

func main() {
	var n int
	var weight babyWeightArray
	var minWeight, maxWeight float64

	fmt.Print("Enter the number of baby weight data : ")
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Printf("Enter weight of baby %d: ", i+1)
		fmt.Scan(&weight[i])
	}

	calculateMinMax(weight, n, &minWeight, &maxWeight)
	avgWeight := calculateAverageWeight(weight, n)

	fmt.Printf("Minimum baby weight: %.2f kg\n", minWeight)
	fmt.Printf("Maximum baby weight: %.2f kg\n", maxWeight)
	fmt.Printf("Average baby weight: %.2f kg\n", avgWeight)
}
```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/crowkrunk/109082500001_Cofa-Xavier-Marvel/blob/main/modul10/Output/Output-soal3.png)
[penjelasan]
	This program collects baby weight data, then calculates and displays the minimum, maximum, and average weights from the entered values.
