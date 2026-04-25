package main

import "fmt"

func inputData() []int {
	var tabgol []int
	for {
		var x int
		fmt.Scanln(&x)
		if x < 0 {
			break
		}
		tabgol = append(tabgol, x)
	}
	return tabgol
}

func average(tabgol []int) float64 {
	total := 0
	for _, v := range tabgol {
		total += v
	}
	return float64(total) / float64(len(tabgol))
}

func main() {
	t1 := inputData()
	t2 := inputData()
	t3 := inputData()

	fmt.Printf("%.2f\n", average(t1))
	fmt.Printf("%.2f\n", average(t2))
	fmt.Printf("%.2f\n", average(t3))
}
