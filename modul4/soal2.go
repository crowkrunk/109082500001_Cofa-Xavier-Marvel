package main

import "fmt"

func scoreCount(Done, Score *int) {
	*Done = 0
	*Score = 0
	var t int
	for i := 0; i < 8; i++ {
		fmt.Scan(&t)
		if t <= 300 {
			*Done++
			*Score += t
		}
	}
}

func main() {
	var winner, name string
	var highestDone, lowestTime, curDone, curTime int

	highestDone = -1
	lowestTime = 999999

	for {
		fmt.Scan(&name)
		if name == "Selesai" {
			break
		}
		scoreCount(&curDone, &curTime)
		if (curDone > highestDone) || (curDone == highestDone && curTime < lowestTime) {
			highestDone = curDone
			lowestTime = curTime
			winner = name
		}
	}
	fmt.Printf("%s %d %d\n", winner, highestDone, lowestTime)
}
