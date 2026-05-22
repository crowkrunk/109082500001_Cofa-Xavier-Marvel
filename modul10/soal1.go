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
