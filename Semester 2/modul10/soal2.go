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
