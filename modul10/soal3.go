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
