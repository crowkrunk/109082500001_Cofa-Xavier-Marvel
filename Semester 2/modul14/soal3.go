package main

import "fmt"

func main() {
	var input int
	var data []int

	for {
		fmt.Scan(&input)
		if input < 0 {
			break
		}
		data = append(data, input)
	}

	for i := 1; i < len(data); i++ {
		temp := data[i]
		j := i
		for j > 0 && data[j-1] > temp {
			data[j] = data[j-1]
			j--
		}
		data[j] = temp
	}

	for i := 0; i < len(data); i++ {
		fmt.Print(data[i])
		if i < len(data)-1 {
			fmt.Print(" ")
		}
	}
	fmt.Println()

	if len(data) <= 1 {
		fmt.Println("Data berjarak 0")
		return
	}

	isConstant := true

	for i := 2; i < len(data); i++ {
		if data[i]-data[i-1] != data[1]-data[0] {
			isConstant = false
			break
		}
	}

	if isConstant {
		fmt.Printf("Data berjarak %d\n", data[1]-data[0])
	} else {
		fmt.Println("Data berjarak tidak tetap")
	}
}
