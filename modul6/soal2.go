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
