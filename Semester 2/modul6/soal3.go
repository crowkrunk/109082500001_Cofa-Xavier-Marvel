package main

import "fmt"

func whoWins(Clubs [2]string) []string {
	var Apoints, Bpoints int
	var Winners []string
	for i := 1; ; i++ {
		fmt.Printf("Round %d : ", i)
		fmt.Scan(&Apoints, &Bpoints)
		if Apoints < 0 || Bpoints < 0 {
			break
		}
		if Apoints > Bpoints {
			Winners = append(Winners, Clubs[0])
		} else if Apoints < Bpoints {
			Winners = append(Winners, Clubs[1])
		} else if Apoints == Bpoints {
			Winners = append(Winners, "Draw")
		}
	}
	return Winners
}

func main() {
	var Clubs [2]string
	fmt.Printf("Klub A :")
	fmt.Scan(&Clubs[0])
	fmt.Printf("Klub B :")
	fmt.Scan(&Clubs[1])
	Winner := whoWins(Clubs)
	for i := 0; len(Winner) > i; i++ {
		fmt.Printf("Hasil %d : %s \n", i+1, Winner[i])
	}
	fmt.Print("Pertandingan selesai")
}
