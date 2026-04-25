package main

import (
	"fmt"
	"math"
)

type Points struct {
	x, y float64
}

func jarak(P1, P2 Points) float64 {
	dx := P1.x - P2.x
	dy := P1.y - P2.y
	distance := math.Sqrt(dx*dx + dy*dy)
	return distance
}

func main() {
	var x1, y1, x2, y2 float64
	fmt.Scan(&x1, &y1, &x2, &y2)

	fmt.Printf("%.2f\n", jarak(Points{x: x1, y: y1}, Points{x: x2, y: y2}))
}
