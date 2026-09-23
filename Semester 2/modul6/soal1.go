package main

import (
	"fmt"
	"math"
)

type Point struct {
	X int
	Y int
}

type Circle struct {
	Center Point
	Radius int
}

func Distance(a, b, c, d float64) float64 {
	return math.Sqrt((a-c)*(a-c) + (b-d)*(b-d))
}

func In(P Point, C Circle) bool {
	Dist := Distance(
		float64(P.X),
		float64(P.Y),
		float64(C.Center.X),
		float64(C.Center.Y),
	)
	return Dist <= float64(C.Radius)
}

func main() {
	var Cs [2]Circle
	var Ps Point

	fmt.Scan(&Cs[0].Center.X, &Cs[0].Center.Y, &Cs[0].Radius)
	fmt.Scan(&Cs[1].Center.X, &Cs[1].Center.Y, &Cs[1].Radius)
	fmt.Scan(&Ps.X, &Ps.Y)

	in1 := In(Ps, Cs[0])
	in2 := In(Ps, Cs[1])

	if in1 && in2 {
		fmt.Println("Titik di dalam lingkaran 1 dan 2")
	} else if in1 {
		fmt.Println("Titik di dalam lingkaran 1")
	} else if in2 {
		fmt.Println("Titik di dalam lingkaran 2")
	} else {
		fmt.Println("Titik di luar lingkaran 1 dan 2")
	}
}
