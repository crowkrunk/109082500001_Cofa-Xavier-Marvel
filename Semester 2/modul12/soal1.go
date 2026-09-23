package main

import "fmt"

func main() {
	totalVotes := -1
	validVotes := 0
	voteCounts := make(map[int]int)
	for value := -1; value != 0; {
		fmt.Scan(&value)
		totalVotes++
		if value >= 1 && value <= 20 {
			validVotes++
			voteCounts[value]++
		}
	}
	fmt.Printf("Total votes received: %d\n", totalVotes)
	fmt.Printf("Valid votes: %d\n", validVotes)

	for candidate := 1; candidate <= 20; candidate++ {
		if count, exists := voteCounts[candidate]; exists {
			fmt.Printf("%d: %d\n", candidate, count)
		}
	}
}
